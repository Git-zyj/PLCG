/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218898
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_10 = ((long long int) min((((long long int) var_2)), (((/* implicit */long long int) ((_Bool) (unsigned short)59456)))));
    var_11 = ((/* implicit */unsigned short) ((unsigned int) ((long long int) ((unsigned short) var_0))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                arr_5 [i_0 + 2] = max((((long long int) ((unsigned char) arr_1 [i_0]))), (((/* implicit */long long int) ((unsigned char) max((((/* implicit */unsigned char) (signed char)56)), (var_6))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) max((((long long int) ((signed char) arr_4 [i_0] [i_0 + 3] [i_1]))), (((/* implicit */long long int) ((unsigned int) ((unsigned int) var_4))))));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    var_12 = min((((/* implicit */unsigned int) max((min(((unsigned short)6020), (((/* implicit */unsigned short) var_2)))), (((/* implicit */unsigned short) ((signed char) (unsigned short)59515)))))), (((unsigned int) ((unsigned char) (unsigned short)35531))));
                    arr_10 [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((_Bool) max((((/* implicit */long long int) (unsigned short)59515)), (var_4))))), (((long long int) ((unsigned short) var_2)))));
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((long long int) max((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_0 [i_2])), (var_1)))), (min((9213774107448179250LL), (((/* implicit */long long int) (unsigned char)145))))))))));
                }
                for (unsigned char i_3 = 4; i_3 < 20; i_3 += 3) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_5 = 2; i_5 < 19; i_5 += 2) 
                        {
                            var_14 = ((/* implicit */_Bool) ((unsigned int) ((unsigned short) var_5)));
                            var_15 = ((/* implicit */unsigned int) ((signed char) ((unsigned short) arr_2 [i_5 - 2] [i_4])));
                        }
                        arr_18 [i_4] [(unsigned short)11] [i_3] [i_1] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) ((_Bool) ((long long int) ((_Bool) arr_2 [i_1] [i_1]))));
                        var_16 = ((long long int) ((_Bool) ((long long int) arr_12 [i_3 - 4] [(unsigned short)16] [(unsigned short)16])));
                        var_17 = ((long long int) min((max((var_8), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) ((long long int) var_9)))));
                    }
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((unsigned long long int) ((unsigned short) var_4))))));
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((long long int) ((long long int) var_3))))));
                        var_20 -= ((/* implicit */signed char) ((long long int) (unsigned short)30005));
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((unsigned short) ((unsigned short) var_6))))));
                    }
                    arr_22 [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned short) min((max((((/* implicit */long long int) ((unsigned int) var_9))), (((long long int) (unsigned short)17085)))), (max((max((arr_1 [i_0]), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) ((unsigned int) var_4)))))));
                    arr_23 [i_0 + 3] [i_1] [i_3 - 4] [i_0 + 3] = ((/* implicit */long long int) ((unsigned int) max((((/* implicit */unsigned short) ((unsigned char) 2325570508160575630LL))), (max(((unsigned short)31802), ((unsigned short)29486))))));
                    var_22 ^= ((unsigned char) ((_Bool) ((long long int) var_2)));
                    var_23 = ((/* implicit */signed char) max((2325570508160575630LL), (((/* implicit */long long int) (unsigned short)35531))));
                }
                for (long long int i_7 = 2; i_7 < 19; i_7 += 4) 
                {
                    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) max((max((((long long int) var_0)), (((/* implicit */long long int) min(((unsigned char)155), (((/* implicit */unsigned char) arr_0 [i_0]))))))), (max((((long long int) 14494291482921612130ULL)), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_9)), (var_7)))))))))));
                    var_25 &= ((/* implicit */signed char) ((long long int) max((((long long int) (unsigned short)30005)), (((/* implicit */long long int) ((unsigned int) -719663845534406416LL))))));
                }
            }
        } 
    } 
}

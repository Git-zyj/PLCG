/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212198
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                var_11 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((var_4) - (((/* implicit */unsigned int) var_7))))), (((((/* implicit */_Bool) arr_1 [i_1 - 2])) ? (((unsigned long long int) var_0)) : (((/* implicit */unsigned long long int) arr_2 [i_1 + 2]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 4; i_2 < 16; i_2 += 2) 
                {
                    arr_8 [i_2] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_3)))))));
                    arr_9 [(_Bool)1] [i_1] [i_1] [i_1 + 1] = ((/* implicit */long long int) ((((/* implicit */int) var_6)) == (var_7)));
                    var_12 = ((_Bool) var_6);
                    arr_10 [i_0] [i_1 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2 - 1] [i_1 - 2] [i_1 + 2] [i_2 + 2]))) | (arr_0 [i_1] [i_1 + 3])));
                }
                arr_11 [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)9420)), (6898433033615547066LL)));
                /* LoopNest 3 */
                for (short i_3 = 3; i_3 < 17; i_3 += 2) 
                {
                    for (int i_4 = 2; i_4 < 16; i_4 += 3) 
                    {
                        for (signed char i_5 = 4; i_5 < 18; i_5 += 1) 
                        {
                            {
                                arr_21 [i_4] [i_1] [i_3] [i_3] [i_1] [(short)9] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) max((var_1), (arr_19 [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_3)))) : (max((((/* implicit */long long int) var_0)), (1692138199309936630LL))))) == (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                                var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) var_1)) - (((/* implicit */int) var_2)))) : (((/* implicit */int) var_10)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) + (var_9)))) ? (min((((/* implicit */int) var_8)), (-339054158))) : (((/* implicit */int) ((unsigned short) var_9))))))))));
    /* LoopSeq 1 */
    for (long long int i_6 = 0; i_6 < 19; i_6 += 2) 
    {
        arr_25 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) (+(((/* implicit */int) arr_16 [i_6] [i_6] [i_6] [i_6] [i_6])))))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
        arr_26 [i_6] = ((/* implicit */unsigned long long int) var_3);
    }
}

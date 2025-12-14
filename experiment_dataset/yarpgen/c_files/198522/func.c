/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198522
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
    var_13 = ((/* implicit */_Bool) (+(max((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)240))))), (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 4294967295U))))))));
    var_14 = ((/* implicit */signed char) ((((_Bool) ((signed char) (unsigned char)255))) ? (max((((((/* implicit */_Bool) (unsigned short)145)) ? (((/* implicit */int) (unsigned short)59074)) : (((/* implicit */int) (short)-32577)))), (((((/* implicit */int) var_12)) / (((/* implicit */int) var_2)))))) : (((/* implicit */int) ((unsigned short) var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 3; i_2 < 21; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) ((unsigned char) (~(((((/* implicit */int) arr_3 [i_0])) | (((/* implicit */int) var_2)))))));
                                var_16 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)2251))))))), (((((((/* implicit */unsigned long long int) 2717633192408173798LL)) & (16ULL))) - (((/* implicit */unsigned long long int) min((((/* implicit */int) var_9)), ((-2147483647 - 1)))))))));
                                var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32581)) ? ((~(-2717633192408173799LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4] [i_3 - 2] [i_0] [i_0] [i_1] [i_0 - 1])))))) ? (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)107))) > ((-9223372036854775807LL - 1LL)))) && (((/* implicit */_Bool) 2147483647))))) : ((((_Bool)0) ? (((/* implicit */int) arr_11 [i_0 - 3] [i_0 - 3] [i_0] [i_0 - 3])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 - 2] [i_4])) && (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]))))))));
                                arr_13 [i_0] [i_0] [(signed char)19] = ((/* implicit */signed char) max((((/* implicit */int) (((+(((/* implicit */int) var_11)))) >= (((((/* implicit */int) var_11)) & (((/* implicit */int) var_9))))))), (min((((((/* implicit */_Bool) arr_7 [i_3 - 1] [(unsigned char)20] [i_3 - 1] [i_3])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_2)))), (((/* implicit */int) ((-1) <= (767381064))))))));
                                var_18 = ((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) min((1134922659), (((/* implicit */int) arr_7 [i_0 - 1] [i_1] [(signed char)0] [i_3]))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) (unsigned short)21410);
                }
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_6 [12LL] [i_0] [i_1] [i_1])), (arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 1])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))))) : ((~(arr_2 [i_0] [i_1] [i_0])))));
            }
        } 
    } 
}

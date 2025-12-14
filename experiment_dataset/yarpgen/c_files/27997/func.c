/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27997
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        var_13 *= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)19543))) : (arr_1 [i_0] [10U]))) > (var_2)))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)32)), (arr_1 [i_0] [10LL])))) ? (((/* implicit */long long int) var_2)) : (min((var_11), (((/* implicit */long long int) (short)-19544))))))));
        var_14 = ((391578472751685384LL) - (var_7));
        var_15 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */long long int) arr_1 [i_0] [i_0]))));
        arr_2 [i_0] = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) var_12)), (arr_0 [i_0 + 2] [i_0]))), (min((((/* implicit */long long int) arr_1 [i_0 - 1] [i_0])), (var_8)))));
    }
    /* LoopNest 2 */
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            {
                arr_8 [i_2] [i_2] = ((/* implicit */unsigned int) (unsigned char)224);
                /* LoopNest 3 */
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        for (short i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            {
                                arr_18 [i_1] [i_1] [i_2] [i_4] [i_2] = ((/* implicit */short) var_0);
                                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) max((((((/* implicit */_Bool) arr_11 [i_2] [i_4] [i_5] [i_5])) ? (var_7) : (((/* implicit */long long int) arr_14 [i_3] [i_3] [i_3] [i_1])))), (var_7))))));
                                var_17 = ((/* implicit */unsigned char) arr_7 [i_2] [(short)4] [(unsigned char)0]);
                                var_18 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_2] [3]))) : (var_4)))))) ? (((((/* implicit */_Bool) min((var_4), (arr_6 [i_2] [i_4] [i_2])))) ? (((/* implicit */long long int) ((280156788U) / (3944619444U)))) : (max((((/* implicit */long long int) 4014810508U)), (var_7))))) : (((/* implicit */long long int) ((/* implicit */int) ((280156788U) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */int) (unsigned char)223)) : (((/* implicit */int) (unsigned char)212)))))))))));
                                var_19 = ((/* implicit */unsigned int) max((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_11 [i_1] [i_2] [i_3] [i_4])), (2351598372U)))), (max((((/* implicit */long long int) var_4)), (arr_0 [i_1] [i_2])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

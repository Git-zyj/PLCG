/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38800
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
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_15 [(signed char)22] [7U] [i_0 - 2] [i_0] [i_0 - 2] = ((/* implicit */unsigned short) max(((~(max((((/* implicit */unsigned long long int) (unsigned short)256)), (arr_6 [i_4]))))), (((/* implicit */unsigned long long int) (~(((arr_13 [i_0 + 1] [i_0 + 2] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_8))))))))));
                                arr_16 [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) min((min((var_12), (((/* implicit */unsigned int) (short)1792)))), (((12U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-1815))))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) max(((short)1803), ((short)1792)))))))));
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_6 = 1; i_6 < 24; i_6 += 3) 
                        {
                            arr_21 [i_0 + 2] [i_1] [(signed char)13] [i_0 + 1] [(unsigned short)15] &= ((/* implicit */long long int) ((max((((/* implicit */long long int) max(((unsigned short)6836), (((/* implicit */unsigned short) var_1))))), (min((arr_0 [5]), (((/* implicit */long long int) arr_18 [i_0])))))) > (((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (var_11))))) / (min((var_2), (((/* implicit */long long int) arr_7 [(unsigned short)9]))))))));
                            var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min(((-(((/* implicit */int) var_13)))), (((/* implicit */int) (!((_Bool)0)))))))));
                            var_18 = ((/* implicit */unsigned short) ((max((max((var_2), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-1815)), (var_12)))))) | (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) -1495458989680733023LL))))))))));
                            var_19 ^= ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) (-(var_6)))), (min((((/* implicit */long long int) var_5)), (var_15))))), (max((((/* implicit */long long int) max((-1044294845), (((/* implicit */int) arr_12 [i_5] [2U] [10] [9]))))), (min((var_2), (((/* implicit */long long int) arr_14 [i_6] [i_5] [(unsigned char)9] [i_1] [i_0 - 1]))))))));
                        }
                        for (unsigned char i_7 = 3; i_7 < 23; i_7 += 1) 
                        {
                            var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) max((max((arr_13 [(short)21] [i_1] [i_1]), (var_14))), (((/* implicit */long long int) ((-1LL) > (((/* implicit */long long int) var_6))))))))));
                            var_21 = ((/* implicit */signed char) ((min((max((var_2), (((/* implicit */long long int) arr_8 [i_5] [i_1])))), ((+(1495458989680733022LL))))) / (((/* implicit */long long int) (-(max((((/* implicit */int) var_1)), (var_5))))))));
                        }
                        var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((/* implicit */int) arr_5 [(unsigned char)16] [i_2] [i_5]))) ^ (1495458989680733015LL)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_13), (var_13))))) & (min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [(short)15])), (arr_6 [(unsigned short)20])))))));
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) var_12)), (var_14))), ((-(var_14)))))) && (((/* implicit */_Bool) min((((/* implicit */int) min((var_3), (var_0)))), (((((/* implicit */int) var_0)) / (((/* implicit */int) (unsigned short)58716)))))))));
}

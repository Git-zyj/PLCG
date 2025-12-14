/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248974
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
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((((((/* implicit */int) (unsigned char)173)) << (((((((/* implicit */int) arr_5 [i_2 - 2] [i_1] [i_2 - 2])) + (27431))) - (17))))), (((((/* implicit */_Bool) ((short) arr_3 [i_0]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)245))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)116)))))))));
                    arr_8 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)245))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250))) : (var_5)))))) ? (max((((((/* implicit */_Bool) (unsigned char)245)) ? (var_3) : (var_0))), (((/* implicit */unsigned long long int) (~(515220935U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_4 [i_2 - 1] [i_2 - 2] [i_2 - 1]), (arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1])))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_12 [i_2 - 3] [i_2 - 3] [i_2 - 3] [i_2 - 3])))))));
                        var_17 = ((/* implicit */unsigned char) (unsigned short)27398);
                        arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))));
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            arr_16 [i_0] [i_0] [i_0] = arr_10 [i_0] [i_1] [i_0] [i_0];
                            var_18 = ((/* implicit */unsigned int) (~(arr_14 [i_3] [i_2] [i_1] [i_0])));
                            arr_17 [i_0] [i_1] [i_2 - 3] [i_3] [i_1] [i_2 + 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (2216615441596416ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (arr_14 [i_2 - 2] [i_2 + 2] [i_2 + 1] [i_2 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                            arr_18 [i_0] [i_0] [i_0] [i_3] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_9 [i_2 - 2] [i_2 - 2]))));
                        }
                        for (long long int i_5 = 1; i_5 < 20; i_5 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned char) ((unsigned short) arr_6 [i_5 + 2]));
                            arr_21 [i_0] [i_0] [i_2] [i_2] [i_5] = ((/* implicit */long long int) arr_6 [i_0]);
                        }
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            var_20 = ((/* implicit */short) ((arr_12 [i_2 - 2] [i_2] [i_2] [i_2 - 2]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                            arr_24 [i_6] [i_3] [i_3] [i_0] [i_0] [i_0] = var_7;
                            var_21 = arr_10 [i_1] [i_1] [i_2 + 2] [i_2 - 3];
                            var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)190))));
                        }
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */int) 515220948U);
}

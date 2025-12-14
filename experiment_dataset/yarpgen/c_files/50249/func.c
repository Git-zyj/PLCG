/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50249
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
    var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_8)), (var_6)));
    var_18 = var_1;
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) var_12)), (var_15))), (((/* implicit */unsigned long long int) var_8))));
        var_19 = ((/* implicit */unsigned char) max((9530329369881101959ULL), (((/* implicit */unsigned long long int) (short)15820))));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((min((((/* implicit */short) var_7)), (var_13))), (var_13)))), (max((((/* implicit */unsigned long long int) var_6)), (var_2)))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_13)), (min((var_16), (((/* implicit */int) ((short) var_5)))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                {
                    arr_11 [i_3] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) max((min((var_10), (var_2))), (min((((/* implicit */unsigned long long int) (short)15826)), (var_1)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        for (int i_5 = 0; i_5 < 23; i_5 += 3) 
                        {
                            {
                                arr_20 [i_1] [i_2] [i_4] [i_4] [i_1] = max((max((((/* implicit */unsigned long long int) var_9)), (var_4))), (min((max((((/* implicit */unsigned long long int) var_0)), (var_11))), (((/* implicit */unsigned long long int) var_0)))));
                                arr_21 [i_4] [i_2] = ((/* implicit */unsigned char) min((min((var_2), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) var_6))));
                                arr_22 [i_4] [3U] [i_3] [i_2] [i_4] = ((/* implicit */short) var_0);
                                arr_23 [i_5] [i_4] [i_4] [i_2] [i_1] = ((/* implicit */unsigned char) var_2);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 = var_7;
    }
    var_22 = ((/* implicit */unsigned long long int) max((var_16), (var_16)));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199357
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
    var_16 = ((/* implicit */long long int) var_5);
    var_17 = ((/* implicit */unsigned short) min((var_4), (((/* implicit */long long int) var_0))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_0))));
        var_19 = ((long long int) var_4);
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (~(((/* implicit */int) ((short) (signed char)-35))))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            var_21 = ((/* implicit */long long int) min((max((arr_2 [i_1]), (((/* implicit */unsigned int) arr_4 [i_0] [i_1])))), ((~(arr_0 [i_0 + 2] [i_1])))));
            /* LoopNest 3 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        {
                            var_22 = var_15;
                            arr_16 [i_0 + 2] [i_3] [i_3] [i_4] [i_3] [i_3] [i_3] &= ((/* implicit */unsigned int) var_15);
                        }
                    } 
                } 
            } 
        }
        for (short i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            arr_20 [i_5] = ((/* implicit */long long int) min((min((((/* implicit */unsigned short) arr_15 [i_0])), (max((((/* implicit */unsigned short) arr_1 [i_0] [i_0])), (var_6))))), (((unsigned short) max((((/* implicit */unsigned short) var_3)), (var_6))))));
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_7), (((/* implicit */int) var_2)))))))), (var_13))))));
        }
    }
    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) 
    {
        var_24 = arr_22 [i_6] [i_6];
        var_25 = ((/* implicit */short) max((((/* implicit */unsigned int) max((((/* implicit */int) ((short) arr_14 [i_6] [i_6] [i_6]))), (var_7)))), (max((((/* implicit */unsigned int) (signed char)-27)), (1409485468U)))));
        arr_24 [i_6] [i_6] = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) var_5)), (var_13))), (((/* implicit */long long int) min((arr_11 [i_6] [i_6]), (arr_11 [i_6] [i_6]))))));
    }
    var_26 = ((/* implicit */signed char) var_8);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207566
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
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) ((signed char) arr_2 [i_1]));
                /* LoopSeq 2 */
                for (long long int i_2 = 1; i_2 < 17; i_2 += 3) 
                {
                    var_12 |= ((/* implicit */_Bool) min((((/* implicit */long long int) min((arr_3 [i_0] [i_1 + 1] [i_2 + 3]), (((/* implicit */unsigned int) (!(arr_0 [i_1]))))))), (((((arr_4 [i_0]) + (9223372036854775807LL))) << (((((/* implicit */int) var_8)) - (92)))))));
                    var_13 = ((/* implicit */long long int) ((unsigned int) 9223372036854775807LL));
                    var_14 = ((/* implicit */unsigned char) var_10);
                    var_15 += ((/* implicit */unsigned char) ((short) 9223372036854775807LL));
                }
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    var_16 |= ((/* implicit */int) min((((long long int) var_5)), (arr_4 [i_3])));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) var_10);
                                var_18 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) ((unsigned char) arr_15 [i_0] [i_1] [i_3] [i_4] [i_5]))), (arr_3 [i_3] [i_3] [i_5]))), (min((arr_9 [i_3] [i_1 + 1] [i_4 + 1] [i_1 + 1]), (((/* implicit */unsigned int) var_4))))));
                                var_19 += ((/* implicit */unsigned char) (+((-9223372036854775807LL - 1LL))));
                                var_20 = arr_11 [i_5] [i_1] [i_4] [i_4] [i_0] [i_0];
                            }
                        } 
                    } 
                }
                var_21 = ((/* implicit */unsigned long long int) arr_11 [i_1 + 1] [i_1] [i_0] [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_22 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / (min((((/* implicit */unsigned long long int) ((short) var_6))), (var_9))));
    var_23 = ((/* implicit */short) var_1);
    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) var_2))));
}

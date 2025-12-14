/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199924
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    var_17 *= ((/* implicit */unsigned short) arr_4 [22]);
                    var_18 += ((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 1] [i_2 - 1] [i_2 - 1]))) < (max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_16))))))));
                    var_19 = ((/* implicit */unsigned int) (+(max((max((((/* implicit */unsigned long long int) arr_4 [i_0])), (arr_2 [i_2 - 1] [i_1]))), (((/* implicit */unsigned long long int) arr_5 [i_1 - 3] [i_0]))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_20 *= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_8 [6U] [i_1 - 3])) ? (arr_8 [i_1 - 2] [i_1 + 1]) : (((/* implicit */int) var_4)))), ((-(arr_8 [i_1] [i_1 - 1])))));
                                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)4639)))))))))));
                                var_22 = (i_0 % 2 == 0) ? (((/* implicit */long long int) (-(((((/* implicit */int) arr_5 [i_0] [i_0])) >> (((arr_12 [i_0] [i_0] [i_0]) - (2605910563U)))))))) : (((/* implicit */long long int) (-(((((/* implicit */int) arr_5 [i_0] [i_0])) >> (((((arr_12 [i_0] [i_0] [i_0]) - (2605910563U))) - (4144056946U))))))));
                                arr_13 [i_0] [i_0] [16] [i_0] [i_0] &= ((/* implicit */unsigned long long int) arr_1 [12] [12]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) var_1);
    var_24 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) var_4)), (var_11))), (var_14)))) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) var_14)) ? ((+(((/* implicit */int) var_12)))) : (((/* implicit */int) var_6))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233052
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
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_18 ^= ((/* implicit */short) ((var_13) >> ((((+((+(var_7))))) - (3622716633U)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 3; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-9209)), (arr_6 [7LL] [7LL] [7LL])))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9208))) : (var_4))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3)))))))) ? (((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) < (1156745311))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (short)9213)) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (6916883979294269666LL)))));
                                var_20 = ((((/* implicit */long long int) ((/* implicit */int) (short)32749))) + (2553889152837515707LL));
                                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) min((arr_9 [12] [i_3] [i_3] [(short)22] [i_1] [(short)17]), (((/* implicit */short) var_17)))))))) ? (((/* implicit */unsigned long long int) 2598229250514328657LL)) : (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) min(((signed char)95), ((signed char)0))))))));
                                var_22 = ((/* implicit */long long int) (_Bool)1);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)15202))) : (arr_1 [i_0]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [2] [2])) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9211)))))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) var_12);
}

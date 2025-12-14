/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243049
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_9 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_2]);
                    var_16 += (((~((-9223372036854775807LL - 1LL)))) == ((+((+((-9223372036854775807LL - 1LL)))))));
                    var_17 += ((/* implicit */unsigned long long int) (+((+((-9223372036854775807LL - 1LL))))));
                    arr_10 [i_0] = (-9223372036854775807LL - 1LL);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) ((short) (+(9223372036854775807LL))));
                                var_19 += ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_3 [i_0] [i_1]))))));
                                var_20 -= ((/* implicit */unsigned long long int) var_1);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 &= ((/* implicit */_Bool) var_3);
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_11)) - (((((var_8) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) + (((/* implicit */unsigned long long int) (+((-9223372036854775807LL - 1LL)))))))));
    var_23 = ((/* implicit */long long int) var_7);
    var_24 |= ((/* implicit */unsigned short) var_6);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42065
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned long long int) 1999305056)))), (var_0)));
                                arr_16 [i_4 - 1] [i_3] [i_2] [i_3] [i_0] |= ((/* implicit */unsigned int) max((((1999305056) << (((((((/* implicit */int) (signed char)-93)) + (123))) - (30))))), (((/* implicit */int) ((_Bool) arr_12 [i_0] [i_0] [i_2] [i_3] [i_4])))));
                                var_18 += (short)14464;
                                arr_17 [i_0] [(_Bool)1] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) var_15))));
                            }
                        } 
                    } 
                } 
                arr_18 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_1]))))));
            }
        } 
    } 
    var_19 *= ((/* implicit */unsigned long long int) var_11);
    var_20 = ((/* implicit */unsigned long long int) var_2);
}

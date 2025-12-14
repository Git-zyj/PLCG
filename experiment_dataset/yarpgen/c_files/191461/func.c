/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191461
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
    var_15 = ((((((/* implicit */int) var_9)) <= (((((/* implicit */int) var_12)) << (((((/* implicit */int) var_3)) - (106))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */int) var_9)) > ((~(((/* implicit */int) (unsigned short)2846))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */long long int) var_5);
                var_17 = ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)54410)));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((int) arr_5 [i_1 - 2] [i_1] [i_1 - 2] [i_2 - 1]))), (((long long int) arr_5 [i_1 - 2] [4LL] [i_1 + 1] [i_2 + 1])))))));
                            arr_8 [i_0] [i_1] [i_2] &= ((/* implicit */unsigned long long int) ((unsigned short) max((arr_6 [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_2 - 2]), (((/* implicit */int) var_7)))));
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (_Bool)1))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */short) arr_1 [i_1 - 2]);
            }
        } 
    } 
    var_21 |= ((/* implicit */signed char) var_7);
    var_22 = ((/* implicit */unsigned short) ((short) var_2));
}

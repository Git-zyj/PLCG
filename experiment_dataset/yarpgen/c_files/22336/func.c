/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22336
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
    var_14 = ((/* implicit */short) var_0);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) ((var_13) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) (_Bool)1))));
                arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)54)) / (((/* implicit */int) var_6))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) var_0))));
                            var_16 = ((/* implicit */signed char) 5339460401574956895ULL);
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */short) var_3);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32917
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
    var_12 = var_8;
    var_13 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_9) << (((((/* implicit */int) arr_2 [i_1 - 1])) - (64))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((arr_6 [i_0] [i_0] [i_1]), (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) (signed char)105)) ? (var_10) : (((/* implicit */unsigned long long int) var_5))))));
                            var_16 = ((/* implicit */signed char) arr_7 [i_0] [i_0] [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
}

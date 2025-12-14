/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35091
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
    var_12 |= ((/* implicit */int) var_11);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned short) (-9223372036854775807LL - 1LL));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_14 += ((/* implicit */long long int) ((var_4) > (((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) * (((/* implicit */long long int) ((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */signed char) var_3)))))))))));
                            var_15 += ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
                        }
                    } 
                } 
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (unsigned char)255))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) min((((/* implicit */long long int) ((unsigned char) min((-3LL), (9223372036854775807LL))))), ((-9223372036854775807LL - 1LL))));
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) 9223372036854775797LL))));
}

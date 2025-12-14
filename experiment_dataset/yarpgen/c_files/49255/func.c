/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49255
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */short) var_12);
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 20; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_19 = (+(((long long int) arr_6 [i_2] [i_1] [i_3] [i_2 - 1])));
                            arr_11 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-28))))) && (((/* implicit */_Bool) ((long long int) (short)-28))))))) != (((var_15) ^ (((/* implicit */long long int) ((((/* implicit */int) var_18)) - (((/* implicit */int) var_0)))))))));
                            var_20 |= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_5)))) * (((((/* implicit */_Bool) (short)0)) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_3] [i_3] [i_1] [i_0])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-22662))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775796LL))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 += ((((/* implicit */_Bool) (-((~(((/* implicit */int) (short)-17123))))))) ? (-9223372036854775797LL) : (((long long int) var_13)));
    var_22 += ((/* implicit */short) (!(((/* implicit */_Bool) (short)27014))));
    var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) max((var_16), (((/* implicit */short) (!(((/* implicit */_Bool) var_13))))))))));
}

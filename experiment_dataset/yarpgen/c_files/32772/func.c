/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32772
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
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_18))));
    var_20 = ((/* implicit */signed char) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (signed char i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_3] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 1996524460U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63382))) : (-7004499020721474884LL))), (((/* implicit */long long int) arr_2 [18]))));
                            var_21 = ((short) (+(((((arr_1 [(_Bool)1]) + (9223372036854775807LL))) << (((((((/* implicit */int) var_12)) + (119))) - (42)))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned short) arr_10 [i_1] [i_1] [i_1] [i_1]);
            }
        } 
    } 
}

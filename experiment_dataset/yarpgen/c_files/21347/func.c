/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21347
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
    var_13 = ((((/* implicit */_Bool) (~(8672342530835112773LL)))) ? (211764184956836602LL) : (-8522928318928932605LL));
    var_14 = (~((((-(211764184956836602LL))) & (((var_9) & (var_12))))));
    var_15 = ((/* implicit */long long int) (!(((((((/* implicit */_Bool) 211764184956836602LL)) ? ((-9223372036854775807LL - 1LL)) : (211764184956836602LL))) <= (((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_1) : (var_12)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = max((((((/* implicit */_Bool) -5053269878072069772LL)) ? (arr_4 [i_0 + 4] [i_0 + 2] [i_0 + 2]) : (var_9))), ((~((~(var_4))))));
                arr_6 [21LL] [16LL] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_4 [i_1 + 3] [i_1] [i_1]))) && (((/* implicit */_Bool) max((arr_0 [i_1 + 3] [i_1 - 1]), (-4303594930557087309LL))))));
                var_16 = min((5053269878072069772LL), (9223372036854775807LL));
                var_17 = ((/* implicit */long long int) min((var_17), (((long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_1])) && (((/* implicit */_Bool) 1970416810917225994LL)))))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 20; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) max((var_18), ((~((-(arr_7 [14LL] [i_2 - 1] [i_1 - 3] [i_0 + 2])))))));
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_8 [i_0] [i_1] [1LL] [20LL]) & ((~(arr_8 [i_0] [i_0] [16LL] [i_0])))))) && (((/* implicit */_Bool) ((long long int) ((var_11) % (-9223372036854775807LL)))))));
                            var_20 = 4502500115742720LL;
                        }
                    } 
                } 
            }
        } 
    } 
}

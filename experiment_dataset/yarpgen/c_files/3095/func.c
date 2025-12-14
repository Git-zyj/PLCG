/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3095
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_13 += (-(((/* implicit */int) arr_3 [i_0 + 1])));
                var_14 = ((/* implicit */signed char) ((unsigned long long int) var_8));
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) (~((~(arr_0 [i_0 + 1] [3ULL])))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? ((~(((/* implicit */int) arr_5 [i_3])))) : (((/* implicit */int) (_Bool)1)))))));
                            var_16 = min((((unsigned int) (+(((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (var_11)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_0 + 1]))) >= ((-9223372036854775807LL - 1LL)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) ((_Bool) min((var_11), (max((15586706618495635960ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) * (((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (8265714662719710653ULL)))))));
    var_19 = ((/* implicit */_Bool) (~(var_3)));
}

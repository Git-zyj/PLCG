/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45489
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1))));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1015)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)95)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) ? (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_2))))))) : (((((/* implicit */_Bool) 12334916958182370416ULL)) ? (12334916958182370423ULL) : (((/* implicit */unsigned long long int) 1502469545))))));
    var_17 = ((/* implicit */_Bool) var_7);
    var_18 = ((/* implicit */long long int) var_12);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_19 ^= ((/* implicit */short) max((min(((+(((/* implicit */int) var_5)))), (((/* implicit */int) arr_0 [i_0 - 1])))), (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1]))))) <= (((/* implicit */int) var_14)))))));
                var_20 = ((/* implicit */long long int) min((var_20), ((+(arr_3 [i_0] [i_1])))));
                var_21 ^= ((/* implicit */unsigned int) arr_4 [i_1] [i_1]);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_22 = (+(((/* implicit */int) arr_0 [i_1])));
                            var_23 = ((/* implicit */_Bool) (-(arr_5 [i_1] [i_1] [i_0 + 2])));
                            var_24 -= ((/* implicit */signed char) arr_7 [i_0] [i_1] [i_2] [i_0]);
                            var_25 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_0 + 2] [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) var_2))))) ? ((~(arr_5 [i_0 - 1] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 + 2])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}

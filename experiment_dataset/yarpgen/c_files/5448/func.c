/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5448
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_1] [i_3] = ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_5))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32)) ? (((/* implicit */int) var_1)) : (-1492255114)))))))) == (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) 3819989946U)))) * (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_7)))))));
                            var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) var_1))));
                            arr_13 [i_1] [i_1 + 1] [i_2] [i_3] = ((/* implicit */_Bool) ((((((min((((/* implicit */long long int) 474977349U)), (var_5))) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)17818))))))) + (9223372036854775807LL))) << (((var_3) - (1741644895U)))));
                        }
                    } 
                } 
                arr_14 [i_1] = ((/* implicit */unsigned int) (unsigned short)17818);
                arr_15 [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((short) var_3)))))), (min((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) (signed char)28)) ? (3819989946U) : (var_3)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) ((((/* implicit */long long int) var_3)) % (((((_Bool) var_9)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17839))) + (474977324U)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_11)) : (-5779544092517444983LL)))))));
    var_14 = ((/* implicit */unsigned int) ((-7200704911622169109LL) + (((/* implicit */long long int) min((((/* implicit */unsigned int) var_1)), (((unsigned int) -583662492)))))));
}

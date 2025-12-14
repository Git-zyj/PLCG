/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48822
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
    var_14 = ((unsigned int) max((1533123863U), (((/* implicit */unsigned int) (unsigned short)25696))));
    var_15 *= ((/* implicit */short) (unsigned short)25710);
    var_16 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (long long int i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_17 = var_5;
                            var_18 = ((/* implicit */unsigned long long int) ((_Bool) ((short) arr_0 [i_1])));
                            arr_9 [16ULL] [16ULL] = ((/* implicit */signed char) (unsigned short)25710);
                            var_19 ^= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1 + 2] [i_2] [i_1])), (max((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_1] [11ULL])), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) 487526757)) : (16412551652066043553ULL)))))));
                            arr_10 [i_0] [i_0] [i_2] = ((/* implicit */short) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [2ULL])), (1658285474U)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [11LL] [i_1] [i_2] [i_3])), (var_2))))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2]))) : (var_5)))))));
                        }
                    } 
                } 
                var_20 *= ((/* implicit */signed char) max((((((/* implicit */int) (unsigned short)39826)) << (((var_7) - (612713252947037006LL))))), (((/* implicit */int) (unsigned short)25720))));
                arr_11 [i_0] = ((/* implicit */signed char) ((long long int) arr_0 [i_0]));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) (-(var_7)));
}

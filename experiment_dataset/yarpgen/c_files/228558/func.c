/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228558
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
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (((/* implicit */int) var_2)) : (var_3)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 23; i_3 += 2) 
                    {
                        for (short i_4 = 3; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (short)-20331)) ? (3002772297U) : (1292194979U))));
                                var_15 = ((/* implicit */short) ((min((((((/* implicit */long long int) ((/* implicit */int) (short)-24231))) - (4633654217347573688LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967294U)) || (((/* implicit */_Bool) var_12))))))) > (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                                var_16 = ((/* implicit */int) max(((short)32755), (((/* implicit */short) min((arr_10 [i_0] [i_1] [i_1] [i_4 + 2] [i_4 + 1] [(short)9] [i_4 + 2]), (arr_10 [i_0] [i_1] [i_2] [i_4 + 1] [i_4] [i_1] [i_0]))))));
                                var_17 = ((/* implicit */short) ((((int) (~(((/* implicit */int) (short)-23990))))) > (((/* implicit */int) (short)12932))));
                            }
                        } 
                    } 
                    var_18 -= ((/* implicit */short) var_3);
                    var_19 = ((/* implicit */short) max((((/* implicit */int) var_5)), (min((((int) 4294967273U)), (((/* implicit */int) ((var_2) && (((/* implicit */_Bool) var_11)))))))));
                    var_20 = ((/* implicit */signed char) (+(((((((/* implicit */int) min((arr_7 [i_0] [i_0] [i_1] [i_2]), (((/* implicit */short) var_11))))) + (2147483647))) << ((((((-(1698404523))) + (1698404550))) - (27)))))));
                    var_21 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])) : (311382768)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_2])) - (((/* implicit */int) arr_1 [i_2]))))) : ((+(var_8))))), (((/* implicit */unsigned long long int) ((int) ((var_0) + (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
                }
            } 
        } 
    } 
}

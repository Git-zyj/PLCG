/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4295
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
    var_17 = ((/* implicit */_Bool) max((var_17), (((((((var_12) || (((/* implicit */_Bool) (signed char)-10)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-10))) : ((-9223372036854775807LL - 1LL)))) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54833)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_2 [i_3] [(short)20]) ? (((/* implicit */long long int) arr_8 [(unsigned char)23] [i_2] [21LL] [i_0])) : (9223372036854775789LL))) & (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14))) * (358667298U))))))) ? (max((((/* implicit */long long int) (short)31044)), (9223372036854775784LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_1)))))))));
                            var_19 = ((/* implicit */int) var_16);
                        }
                    } 
                } 
                arr_12 [i_1] [i_1] = ((/* implicit */unsigned char) arr_0 [i_1]);
                arr_13 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (+((~(((/* implicit */int) ((unsigned short) (signed char)-10)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) var_11);
}

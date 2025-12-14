/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192018
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
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-39))))) | (((/* implicit */int) var_5)))))));
    var_19 |= ((/* implicit */unsigned char) ((((((unsigned long long int) (signed char)38)) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)0))))))) / (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_2)) / (((/* implicit */int) (signed char)61)))) ^ (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)192))) >= (var_0)))))))));
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((signed char) ((long long int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_7)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_21 = ((((((/* implicit */_Bool) ((((-1374496566801999391LL) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_1 [i_1])) - (41137)))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) (+(((long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-121))) / (1374496566801999391LL))))));
                                var_23 = ((/* implicit */signed char) (-(12241437049450937489ULL)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

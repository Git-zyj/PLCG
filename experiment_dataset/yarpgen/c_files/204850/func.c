/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204850
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
    var_15 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */int) (short)4454))))))) && (((/* implicit */_Bool) var_1)));
    var_16 = ((/* implicit */_Bool) ((long long int) var_8));
    var_17 = var_2;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */_Bool) var_10);
                var_18 = ((/* implicit */int) ((_Bool) ((((/* implicit */int) min(((short)-4454), ((short)4441)))) >= ((+(arr_2 [i_1] [i_1]))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_13 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (+((-(1471863295)))));
                                arr_14 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) (short)24144))))) ? ((+(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_1]))))));
                                var_19 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (((long long int) 3793932074U))))));
                                var_20 = ((/* implicit */unsigned long long int) 1588897472);
                                var_21 ^= ((/* implicit */short) (+(((((/* implicit */_Bool) (short)4441)) ? (min((((/* implicit */long long int) (short)4445)), (9223372036854775807LL))) : (((/* implicit */long long int) arr_7 [i_4] [i_3] [i_0] [i_0]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

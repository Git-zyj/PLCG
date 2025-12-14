/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201656
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
    var_16 = ((/* implicit */long long int) max((((/* implicit */short) var_12)), (var_13)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned int i_3 = 4; i_3 < 16; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) (unsigned char)188);
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) ((long long int) arr_6 [i_0 + 1] [i_0 + 1]));
                                var_18 ^= ((((/* implicit */_Bool) max((1956513407848442779ULL), (((/* implicit */unsigned long long int) arr_11 [i_0 - 1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_11 [i_0 - 1])) <= (((/* implicit */int) arr_11 [i_0 + 1]))))) : (((int) arr_11 [i_0 - 1])));
                                var_19 = ((/* implicit */long long int) ((((max((arr_2 [i_0 - 1]), (((/* implicit */unsigned long long int) arr_1 [4ULL])))) >= (((/* implicit */unsigned long long int) 3382139797262767398LL)))) ? (max((((/* implicit */unsigned long long int) max((25U), (((/* implicit */unsigned int) (_Bool)0))))), (max((arr_0 [15LL]), (4531409851520293261ULL))))) : (((/* implicit */unsigned long long int) ((long long int) var_3)))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_0] &= ((/* implicit */unsigned char) 511);
            }
        } 
    } 
    var_20 = ((/* implicit */int) var_0);
}

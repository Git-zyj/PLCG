/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206590
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (~((-(arr_6 [i_0 - 1] [14] [i_0 + 1]))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_17 |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_9)))) | (((unsigned long long int) arr_9 [i_3] [i_3] [4] [i_3 + 1] [i_3 - 1]))));
                                var_18 = min((((arr_12 [i_0] [i_2] [i_2] [i_3 + 2]) - (arr_12 [i_3] [0] [0ULL] [i_3 + 2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_4] [i_3])) || (((/* implicit */_Bool) arr_1 [i_2] [i_2]))))));
                                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1] [i_3 + 1]))) / (3162514247325800652ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_6)))) : (arr_6 [i_0] [i_0] [i_4])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 |= var_0;
    var_21 = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) min((min((-7480058044268836729LL), (((/* implicit */long long int) (signed char)-72)))), (((((/* implicit */_Bool) 550979332)) ? (var_15) : (((/* implicit */long long int) var_9))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (15284229826383750963ULL)))) ? (((15284229826383750971ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29502))))) : (min((((/* implicit */unsigned long long int) var_13)), (0ULL))))));
}

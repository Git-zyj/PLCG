/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241113
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
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 19; i_2 += 2) 
                {
                    for (signed char i_3 = 2; i_3 < 18; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_18 |= ((/* implicit */short) arr_4 [i_0]);
                                var_19 = min((((/* implicit */int) arr_8 [i_0])), ((+((-(((/* implicit */int) var_1)))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */int) ((unsigned int) var_10));
                var_21 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) min(((short)10024), (((/* implicit */short) arr_2 [i_1] [i_0 - 2]))))) ? (((((/* implicit */_Bool) arr_9 [i_1] [14] [i_0] [i_0] [i_0 - 2] [i_0])) ? (((/* implicit */int) (signed char)-52)) : (((/* implicit */int) arr_9 [(short)0] [i_1] [i_0] [i_0] [i_0 - 2] [i_0 + 1])))) : (((/* implicit */int) min((arr_1 [i_1]), (((/* implicit */short) arr_2 [i_1] [i_0 - 1])))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) var_12);
}

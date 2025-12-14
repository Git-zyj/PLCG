/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25750
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
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-13)))))));
                                arr_15 [i_0] [i_0] [i_2] [i_3] [(_Bool)1] = ((/* implicit */_Bool) var_15);
                            }
                        } 
                    } 
                } 
                var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) arr_8 [i_1] [i_1] [i_0] [i_0])), ((signed char)-24))))) : (max((var_1), (arr_11 [i_0] [i_0] [i_0])))))) ? (((/* implicit */long long int) 1835383211U)) : (((((/* implicit */_Bool) min((arr_1 [i_1] [i_0]), (((/* implicit */signed char) (_Bool)1))))) ? (((((/* implicit */_Bool) 1835383211U)) ? (2020121450598525600LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1835383211U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_14 [i_0] [i_0] [(signed char)0] [i_0] [8U] [i_0] [i_0])))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_3);
}

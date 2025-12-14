/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247214
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
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) var_5))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 22; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            var_17 = (~(var_0));
                            var_18 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_4 [i_1 - 1] [i_0]))))));
                            var_19 = ((/* implicit */signed char) (-(((arr_9 [i_1] [(_Bool)1] [i_1 + 1] [i_0]) ? (((/* implicit */int) arr_9 [i_2] [i_1 + 1] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_9 [(unsigned char)13] [i_1] [i_1 + 1] [i_0]))))));
                        }
                    } 
                } 
                arr_10 [i_0] [i_0] [i_0] = ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(signed char)10] [i_0] [22U] [i_0] [i_0]))) ^ ((((_Bool)1) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_2 [i_1 + 1] [i_1 - 1]) ? (var_0) : (((/* implicit */unsigned long long int) var_10))))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (var_11))) : (arr_0 [i_0])));
            }
        } 
    } 
    var_21 = var_9;
}

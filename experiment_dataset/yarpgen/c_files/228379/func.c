/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228379
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
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) arr_1 [i_1]))));
                var_20 += ((/* implicit */unsigned int) arr_4 [i_0 - 1] [i_0] [i_1]);
                arr_5 [i_1] [i_1] [i_0] = ((/* implicit */long long int) arr_1 [i_0 + 2]);
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 20; i_2 += 1) 
                {
                    for (long long int i_3 = 4; i_3 < 22; i_3 += 1) 
                    {
                        {
                            arr_12 [i_1] [i_1] [i_1] = ((/* implicit */short) (+(((/* implicit */int) ((signed char) 18446744073709551614ULL)))));
                            var_21 &= ((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_2]);
                            var_22 = ((/* implicit */unsigned long long int) (-((+(((unsigned int) var_13))))));
                        }
                    } 
                } 
                arr_13 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_1] [i_0 - 2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_8))) / (((((/* implicit */_Bool) (unsigned char)168)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0 + 1]))) : (arr_8 [i_0 + 1] [i_0] [i_1])))))) ? (((/* implicit */long long int) (+(arr_11 [i_0 + 1] [i_0 + 1] [i_1] [(_Bool)1])))) : (((((/* implicit */long long int) (+(((/* implicit */int) var_1))))) / (arr_8 [i_1] [i_0 - 1] [i_1])))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */long long int) ((unsigned char) var_10))), (var_8))));
}

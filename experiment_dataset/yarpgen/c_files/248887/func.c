/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248887
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
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((var_13) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_9))))));
    var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) ((((/* implicit */int) min((arr_4 [i_0 + 1] [i_0 + 1]), (arr_4 [i_0 - 1] [i_0 - 1])))) ^ (((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 1]))))));
                            var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0] [i_2]))));
                            arr_11 [i_2] [i_2] [i_2] [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) (+(((/* implicit */int) var_18))))), (((long long int) arr_0 [i_0 - 1]))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) (unsigned char)216);
            }
        } 
    } 
}

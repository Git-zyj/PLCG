/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214957
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
    var_19 |= ((/* implicit */long long int) var_8);
    var_20 = ((/* implicit */unsigned short) ((var_1) ^ (((/* implicit */long long int) min(((-(var_8))), (var_14))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 17; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65524)) - (min(((-(((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_3])))), (arr_2 [i_2 - 1])))));
                            arr_13 [i_0] [i_0] [i_2 + 2] [i_2 + 2] = ((/* implicit */unsigned char) var_2);
                            arr_14 [i_3] = ((/* implicit */short) var_15);
                        }
                    } 
                } 
                var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_1] [i_0])) ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_1]) : (arr_9 [i_0] [i_0] [i_0] [i_1] [i_1])))) ? (min((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) var_18)))) : (((((/* implicit */_Bool) var_9)) ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_1]) : (arr_9 [i_0] [i_0] [i_1] [i_1] [i_1])))));
                var_22 = ((/* implicit */unsigned int) (-(((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) | (2097151LL)))));
            }
        } 
    } 
}

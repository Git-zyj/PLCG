/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40201
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) arr_3 [i_0] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) arr_10 [i_1] [i_3] [i_1]);
                                arr_14 [(short)0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((var_2), (var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_9 [i_3 - 1] [i_3] [i_3] [i_3] [i_3] [i_1 - 1])))) : (((arr_9 [i_3] [i_3] [19U] [i_1 + 1] [i_3] [i_1 + 1]) * (arr_9 [i_4] [i_4] [i_4] [i_4] [i_4] [i_1 + 1])))));
                            }
                        } 
                    } 
                    arr_15 [i_0] = (-(min(((((_Bool)1) ? (4098343260U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)99))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))))));
                }
            } 
        } 
    } 
    var_16 |= ((/* implicit */_Bool) (-(((/* implicit */int) var_10))));
}

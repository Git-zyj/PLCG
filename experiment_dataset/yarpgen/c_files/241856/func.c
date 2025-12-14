/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241856
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
    var_17 &= ((/* implicit */int) ((((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_6))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) ? (min((var_0), (((var_12) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (6LL)))))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_18 = ((min((6LL), (min((((/* implicit */long long int) (_Bool)1)), (6LL))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) -3LL)) ? (var_11) : (((/* implicit */int) arr_2 [i_0 - 1] [(short)19] [i_1 - 3]))))));
                                arr_12 [i_1] [i_1] = ((/* implicit */int) var_3);
                                var_19 = ((/* implicit */unsigned long long int) (_Bool)1);
                                var_20 = ((/* implicit */unsigned long long int) arr_2 [i_0 + 1] [i_1] [i_4]);
                                var_21 &= ((/* implicit */int) var_6);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_22 = arr_8 [i_5 + 1] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0];
                                arr_19 [i_1] [i_1 - 3] [i_2] [i_5] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_5])) : (var_7))))));
                                var_23 = ((/* implicit */_Bool) (((~(((/* implicit */int) (short)18177)))) | (((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0 - 2] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_15 [i_0] [i_0 - 2] [(_Bool)1] [i_0 - 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

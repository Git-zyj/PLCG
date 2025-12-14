/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28535
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
    for (int i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (int i_3 = 3; i_3 < 22; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */int) max((var_11), (min((min((((((/* implicit */_Bool) var_1)) ? (arr_7 [i_1] [i_1]) : (2147483647))), (((((/* implicit */_Bool) arr_12 [i_3])) ? (917504) : (917504))))), ((-(max((917504), (-1466476996)))))))));
                                var_12 ^= ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [21]))))), (min(((-2147483647 - 1)), (var_3)))))) ? (min((min((arr_9 [6] [6] [i_2] [i_4] [i_4]), (arr_4 [i_0]))), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) var_5))))))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_2])) ? (61897489) : (min((arr_12 [i_0]), (16646144))))));
                                var_13 = max((((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))), (var_7));
                            }
                        } 
                    } 
                } 
                var_14 = max((((((/* implicit */_Bool) min((arr_0 [i_0] [i_1]), (arr_12 [i_0])))) ? (1542684231) : (((((/* implicit */_Bool) 2147483647)) ? (var_7) : (arr_0 [i_0 - 2] [i_1]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1307739636)) ? ((-2147483647 - 1)) : (2147483647)))) ? (((((/* implicit */_Bool) arr_11 [i_0] [0] [0] [i_1] [1] [1] [i_1])) ? (arr_12 [i_1]) : (var_9))) : (((int) -2147483635)))));
                var_15 = (+(((((/* implicit */_Bool) 1652082908)) ? (-607579770) : ((-(2147483647))))));
            }
        } 
    } 
    var_16 = var_6;
}

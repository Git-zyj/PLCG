/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = (((248 ? (((arr_4 [i_1] [i_1] [i_1]) ^ (arr_0 [i_1]))) : 11515)));
                var_20 = (max(var_20, ((((((((-6400376093183999224 ? 12595 : var_2))) ? (((min(37, 51)))) : (((arr_0 [i_0]) ? (arr_4 [i_1] [i_0] [i_0]) : var_5)))) < (((+((1 ? (arr_1 [i_1]) : var_15))))))))));
                arr_5 [i_0] [i_0] [i_1] = (((((var_7 ? var_6 : (arr_0 [5])) - (arr_4 [i_0] [i_1] [i_1])))));
            }
        }
    }
    var_21 = (max(var_21, ((max((max(var_10, ((var_1 ? var_11 : 1863157438239627171)))), ((max(var_14, (var_9 < var_16)))))))));
    #pragma endscop
}

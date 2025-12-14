/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_14 = (max(((max(((((arr_3 [i_1]) ? (arr_3 [i_0]) : var_10))), var_1))), (((arr_3 [i_1 + 1]) ? (min(1360376722, var_7)) : (arr_0 [5])))));
                var_15 = (min(var_15, (((((max(4096, 29130))) ? (((arr_3 [i_0]) ? var_9 : (arr_3 [i_0]))) : (arr_3 [i_1 + 1]))))));
            }
        }
    }
    var_16 *= var_5;
    var_17 = (min(var_17, -60));
    var_18 = (min(var_18, (((min((var_7 ^ var_4), var_1)) + (((max(var_4, var_5))))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                var_19 = (max(((var_7 ? (var_9 - -3999) : ((min(0, 0))))), ((((var_5 >= 2) ? var_5 : (65516 | var_5))))));
                arr_9 [i_2] [i_2] = (max(((((max(var_3, 54))) ? (max(var_0, 15115048267921789899)) : 8)), (arr_8 [i_2])));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((((var_11 ? (~5535204632695862481) : (!var_6))) % (((((49424 ? var_9 : var_12)) + var_3))))))));

    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_14 = 477207465506527891;
                    var_15 = (max(var_15, (((-(arr_1 [i_2 - 1]))))));
                }
            }
        }
        var_16 = (min(var_16, (((16113 ? 49424 : 65425)))));
        var_17 = (max(var_17, (((((((arr_1 [i_0 + 3]) ? (arr_2 [i_0 + 4]) : (arr_1 [i_0 - 1])))) ? (((var_11 + (arr_1 [i_0 - 1])))) : (16590993504643780405 - 150))))));
    }
    for (int i_3 = 3; i_3 < 13;i_3 += 1)
    {
        var_18 = (min(var_18, (((((((arr_7 [i_3 - 2]) < (arr_7 [i_3 - 1])))) << (((max(((((arr_7 [12]) - (arr_8 [12])))), (((arr_7 [i_3 - 2]) % 5535204632695862486)))) - 10239123436488513974)))))));
        var_19 = (((arr_7 [i_3 + 1]) ? ((((arr_7 [i_3 + 2]) || (arr_7 [i_3 - 2])))) : (((!(arr_7 [i_3 + 2]))))));
        var_20 = (~3884878012);
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_21 = (arr_10 [i_4]);
        arr_13 [13] &= 45459;
    }
    var_22 -= (var_0 ? ((((((var_0 ? var_2 : var_2)) + 2147483647)) >> (var_2 && var_10))) : var_11);
    #pragma endscop
}

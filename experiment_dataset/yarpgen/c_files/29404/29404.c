/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((min(1, -8)) + 2147483647)) << (((var_7 + 6580812056273397417) - 9))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 = (min(var_14, (max((((~(arr_1 [i_0] [9])))), (arr_1 [6] [i_0])))));
        var_15 &= 10526167481307484706;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_16 = (((max(-690240832350156641, (arr_0 [i_1]))) == (((-var_0 ? (arr_0 [i_1]) : (((arr_1 [i_1] [i_1]) ^ (arr_1 [i_1] [i_1]))))))));
        var_17 = (min(var_17, 16929992174890625149));
        arr_6 [i_1] [i_1] |= (((~((var_10 ? var_7 : 18)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    var_18 = ((min(var_4, (arr_2 [i_2] [i_2]))) | ((((((11 ? 18446744073709551615 : 16929992174890625152))) ? (max((arr_3 [i_2]), var_7)) : (arr_7 [i_2])))));
                    arr_11 [i_2] [i_2] = var_9;
                    var_19 = (var_11 < ((67 ? ((-12 ? var_4 : (arr_1 [i_2] [i_2]))) : 6452522942544424657)));
                    arr_12 [i_2] [i_2] [0] [i_2] = ((((((-3905635936180755084 > (arr_4 [i_1]))))) % (-9223372036854775807 - 1)));
                }
            }
        }
    }
    var_20 = (((var_5 == 1) ? (((-(var_3 + -6452522942544424660)))) : var_4));
    #pragma endscop
}

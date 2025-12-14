/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += ((var_15 > (var_8 && var_10)));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_18 = ((8638470863064681172 >> (8638470863064681165 - 8638470863064681126)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 23;i_3 += 1)
                {
                    {
                        var_19 *= (((((var_0 ? (61793 | 61802) : (var_16 & var_8)))) ? (min((arr_0 [i_0 + 1]), var_15)) : (((var_10 != var_14) >> ((((var_14 ? 3733 : (arr_3 [i_3 - 1]))) - 30046))))));
                        var_20 = (((((3735 >= var_5) & 857843897200983701))) ? (min((max(15280522932700824784, var_3)), var_14)) : (((((var_13 ? var_10 : var_1))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_21 = 7152427368357694421;
        var_22 |= (max((min(var_9, (min(0, 302949973)))), 0));
        var_23 = (((((-((22 ? 225 : 0))))) ? ((((max(var_12, var_8))) ? ((var_4 ? (arr_5 [5] [i_4]) : (arr_1 [18] [i_4]))) : (var_13 <= -8638470863064681173))) : ((((((arr_3 [1]) ? 10481 : -302949988))) * ((61793 ? 0 : var_2))))));
    }
    #pragma endscop
}

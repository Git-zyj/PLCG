/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] &= ((((((var_7 - -1) - var_8))) ? (arr_1 [i_0 - 1]) : (((-var_6 ? ((min((arr_0 [i_0 + 1]), var_2))) : (arr_0 [i_0]))))));
        var_10 *= ((-((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [11]))) == (10180311611852352838 == 0))))));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        arr_5 [i_1] = (((arr_4 [i_1]) || 1023));
        var_11 = (max(var_11, ((((arr_1 [16]) / (min(9223372036854775792, -2)))))));
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        arr_10 [9] = ((((max((51 || var_0), (max(var_7, var_7))))) ? (min((arr_7 [i_2 - 1]), (arr_7 [i_2 - 1]))) : var_2));
        var_12 = (max(var_12, ((((((-(8868 & var_9)))) ^ ((-((-3 ? 12723453743674886874 : -20532)))))))));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    {
                        var_13 *= ((-(((!var_3) * var_0))));

                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_14 = ((((var_1 ? var_7 : 1))) || (~1));
                            arr_23 [i_3] = ((((arr_11 [i_3] [i_5 - 1]) ? (arr_11 [i_3] [i_5 - 1]) : (arr_11 [i_3] [i_5 - 1]))));
                        }
                        arr_24 [i_3] = -5843614556351812216;
                        var_15 = (max(var_15, (127 % 32767)));
                    }
                }
            }
        }
    }
    var_16 = (max((max(((50463 ? 8600 : var_3)), var_0)), ((((15092 & 228) < (var_0 & var_0))))));
    var_17 = (((min(var_8, var_8))));
    var_18 |= ((((((min(var_5, 254))))) != ((var_2 ? 0 : var_2))));
    var_19 = ((((((0 - var_9) * var_0))) ? (max(var_8, ((min(35852, var_3))))) : ((((var_7 << var_5) % (-2331952788605830205 < 64454))))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((((max(((var_0 ? -1 : var_7)), var_10))) && (!var_8))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_2] = (1375098550 > 5295356329106464096);
                        var_14 = ((3204279969465988215 ? -1 : 25911));
                        var_15 ^= (((arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3]) > var_4));
                    }
                }
            }
        }
        var_16 += (((var_0 * 3114019809) ? ((var_0 ? var_8 : var_1)) : (arr_10 [i_0] [i_0] [3] [1] [i_0] [2])));
        var_17 = ((arr_6 [i_0]) + var_10);
    }
    for (int i_4 = 2; i_4 < 15;i_4 += 1)
    {
        arr_15 [i_4] = (((min(var_9, (arr_14 [0]))) - (min((min((arr_13 [i_4] [i_4]), var_12)), (224 - -1)))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                {
                    var_18 = (min(var_18, ((((arr_17 [i_4]) < (min(((min(67107840, var_8))), ((4294967295 ? (arr_18 [i_5] [i_5] [i_5] [i_5]) : 14)))))))));
                    var_19 = (~(max(-569778373292478015, (arr_13 [12] [i_4 - 2]))));
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        arr_23 [3] [3] = ((((((!(!6155994452537000255))))) + (((-1 * 2487004018) ^ ((((-25440 + 2147483647) >> (var_7 - 4141564513085305963))))))));
        arr_24 [i_7] = (((((max(-1, -3300465599607124161)) + (min(1807963284, var_6)))) / 1807963278));
        var_20 = (max(var_20, 0));
        var_21 = (max((((arr_21 [10]) ? var_9 : (arr_20 [i_7]))), ((27588 | (arr_20 [i_7])))));
        var_22 = (max(var_22, (max(((-27589 ? var_6 : 28370)), (max(((((arr_22 [i_7]) / var_11))), (arr_20 [i_7])))))));
    }
    for (int i_8 = 1; i_8 < 12;i_8 += 1)
    {
        var_23 = var_4;
        var_24 = (min(var_24, 2320716283));
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = 14138;
        arr_2 [i_0] = (0 / -436895089895893826);
        arr_3 [i_0] = (((((66 - (arr_0 [i_0]))) % (min(-436895089895893803, (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_8 [i_1] = (arr_5 [i_1]);
        var_13 = ((((min(0, 1023))) ? 14132 : 14138));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 6;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 8;i_4 += 1)
                {
                    {
                        arr_16 [i_3] [i_3] [i_4] = 436895089895893846;
                        arr_17 [i_2 + 2] [i_4] [i_3] [i_4 + 2] [i_3] [i_2] = (((((22325 / (max((arr_6 [i_1]), 192))))) ? (((arr_15 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]) * 65535)) : (((!(arr_12 [3] [3] [3] [i_2]))))));
                        var_14 = (arr_0 [10]);
                    }
                }
            }
        }
        arr_18 [i_1] [i_1] = (max((arr_6 [i_1]), (max(-436895089895893803, 4294967295))));
        arr_19 [i_1] &= (arr_5 [9]);
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_15 -= (arr_1 [i_5]);
        arr_23 [i_5] = ((((((min(30162, (arr_0 [i_5])))) - (((0 && (arr_22 [i_5] [i_5])))))) + ((((((!(arr_21 [i_5])))) > 14128)))));
    }
    var_16 = (min(35374, 6166));

    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        var_17 = (arr_1 [i_6]);
        var_18 = ((var_4 ? (arr_1 [i_6]) : ((((!((max(var_8, var_3)))))))));
        var_19 = (14128 ^ (min((arr_26 [i_6]), (((-8192 + (arr_25 [19] [18])))))));
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        var_20 = ((((255 && ((min(var_7, (arr_0 [14])))))) && 2241190483));
        var_21 = (!18446744073709551615);
    }
    #pragma endscop
}

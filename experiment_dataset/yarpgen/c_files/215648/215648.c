/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= var_6;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 -= var_8;
        arr_2 [i_0] = (min(((var_0 ^ (arr_0 [i_0]))), ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 *= (max((max(-1439367829864916501, 1)), (arr_3 [0] [i_1 - 3] [i_2])));
                    var_16 -= (arr_1 [i_0] [8]);
                    arr_7 [10] [i_2] &= 62;
                    var_17 = (min(var_17, (((((-(arr_5 [i_1] [0])))) & (var_12 < var_4)))));
                    arr_8 [11] [i_0] [i_0] = (((((arr_4 [i_0]) + (min((arr_4 [i_0]), (arr_6 [i_0] [i_1 - 1] [i_1 - 1] [i_1])))))) ? (arr_1 [i_1 + 1] [i_0]) : var_10);
                }
            }
        }
        arr_9 [i_0] = 32765;
        arr_10 [i_0] = (max((((-(((var_9 && (arr_3 [i_0] [i_0] [i_0]))))))), (arr_6 [i_0] [i_0] [i_0] [i_0])));
    }
    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        var_18 = ((!(arr_12 [i_3 - 1])));
        var_19 = ((255 <= (((!(arr_11 [i_3 - 2]))))));
    }
    var_20 = var_10;
    var_21 = var_10;
    var_22 = (max(32751, (min(var_0, var_3))));
    #pragma endscop
}

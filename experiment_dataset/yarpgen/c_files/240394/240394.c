/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= var_7;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = max((((var_1 ? var_0 : 1))), (max(((((arr_2 [i_0]) ? var_10 : 1))), (max(var_9, 1)))));
        arr_5 [i_0] = (arr_1 [i_0] [i_0]);

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_9 [i_0] [i_0] = ((((max(var_3, 1))) || 1));
            arr_10 [i_0] [i_0] = (max(1, var_0));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_13 [i_0] [1] = (max((((((arr_2 [i_0]) ? var_0 : var_3)))), (arr_0 [i_0])));
            arr_14 [6] [i_2] = (((((((max(var_10, var_3))) ? var_9 : (((1 ? (arr_2 [i_0]) : 1)))))) ? ((((1 ? (arr_7 [i_0] [i_0] [i_0]) : (arr_0 [i_0]))))) : ((max(1, 1)))));
            arr_15 [i_0] [i_0] = var_10;
            arr_16 [i_0] = ((((var_2 ? var_3 : (arr_2 [i_2]))) == ((var_0 ? (arr_2 [i_0]) : 1))));
            arr_17 [i_0] = (((((var_1 != 1) ? 1 : ((min(var_0, (arr_6 [i_0] [i_0] [i_2]))))))) ? ((((max(1, (arr_2 [i_0])))) ? (min(var_2, 1)) : 1)) : ((((((1 ? 1 : 1))) ? 1 : ((max(1, 1)))))));
        }
        arr_18 [i_0] = (min(1, (min(var_1, ((max(1, 1)))))));
    }
    #pragma endscop
}

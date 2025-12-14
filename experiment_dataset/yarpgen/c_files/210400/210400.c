/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= var_6;
    var_14 = var_6;
    var_15 ^= (!109);
    var_16 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    var_17 = ((-(((((-(arr_1 [i_0])))) ? var_0 : ((((arr_0 [i_0]) <= -104)))))));
                    arr_10 [i_2] [i_2] [4] &= ((((((((var_12 ? (arr_2 [i_2] [i_2]) : (arr_7 [4] [i_1] [i_1] [i_2])))) ? ((((arr_1 [i_1 - 1]) ? 169 : 2147483636))) : ((var_12 ? var_8 : 13643529426427006024))))) ? ((((((var_11 ? var_6 : var_6))) ? ((100 ? 78 : 3530928432)) : ((((arr_8 [i_0] [i_1 - 1] [i_1 - 1] [i_2]) ? -2147483629 : var_8)))))) : (max(-1744524039744485105, (32710 <= var_3)))));
                    arr_11 [i_0 - 1] [i_1] [i_0 - 1] = min(var_3, (((var_10 ? (arr_9 [i_1]) : 32712))));
                }
            }
        }
    }
    #pragma endscop
}

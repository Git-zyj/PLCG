/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_5 <= 65509);
    var_12 = var_10;
    var_13 = (~((var_4 ? 0 : (var_4 - var_4))));
    var_14 = ((var_9 ? ((-8154188672408225905 ? var_10 : -1331014496)) : 125));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_0 - 2] [i_0 - 2] = (((arr_6 [i_2 - 2] [i_2 - 3] [i_2 - 3] [i_2 - 3]) & (((arr_6 [i_2 - 1] [i_2 + 1] [i_2 - 4] [i_2]) ^ (arr_6 [i_2 - 4] [i_2 - 2] [i_2 - 1] [i_2 - 4])))));
                    var_15 ^= (arr_1 [i_0]);
                    var_16 = (((var_7 && (arr_4 [i_0]))));
                    var_17 = ((((((max((arr_6 [i_2] [i_2] [i_2] [i_2]), (arr_0 [i_0])))) ? (arr_3 [i_0] [8]) : (arr_3 [i_0 - 1] [i_0 + 1]))) < ((((min((-127 - 1), 127))) ? var_8 : (arr_5 [i_2 + 1] [i_2 - 4] [i_0 - 1] [i_0 - 2])))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = (((((arr_6 [i_0] [i_0] [i_0] [i_2]) ? var_7 : var_8)) > (59832 >= -124)));
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_18 += ((((((((var_15 ? var_3 : var_12))) ? (((((arr_4 [i_2 - 1]) <= (arr_3 [i_0] [i_0]))))) : (-7900256644574486127 & 11623185788557253702)))) ? (((7900256644574486134 / 10236519480979036202) ? ((((arr_6 [i_1 + 1]) ? 1867687126 : 11))) : (((arr_1 [i_0] [i_0]) ? var_1 : (arr_0 [i_0]))))) : ((((((var_15 ? (arr_5 [i_0] [i_1 + 1] [i_1]) : var_5)) < (((var_14 ? (arr_2 [i_1] [i_2]) : var_12)))))))));
                    var_19 += ((((var_11 - var_0) ? ((((arr_3 [i_1] [i_2]) || var_1))) : (8 <= 8442021197698403262))) % ((((((arr_0 [i_1 - 1]) ? (arr_1 [i_0] [i_0]) : 2576555202278696630))) ? (((9223372036854775807 < (arr_4 [i_2])))) : (65535 > 7900256644574486123))));
                }
            }
        }
    }
    var_20 -= (((((var_10 <= 65535) >> (0 + 0))) - ((((((var_17 ? var_1 : var_12)) + 2147483647)) >> ((((var_15 ? var_15 : 244)) - 1554133281))))));
    #pragma endscop
}

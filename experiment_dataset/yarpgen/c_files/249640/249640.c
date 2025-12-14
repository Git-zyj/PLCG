/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = (arr_5 [i_0] [i_1]);
                var_15 ^= ((((((-(arr_2 [i_0] [i_1]))))) ? (min((min((arr_1 [i_0] [4]), (arr_3 [i_1]))), 16383)) : (min((min((arr_6 [i_0] [i_0] [2]), (arr_3 [i_0]))), (8832476866564257674 & 50417)))));
            }
        }
    }

    for (int i_2 = 4; i_2 < 13;i_2 += 1)
    {
        var_16 |= ((!((((arr_8 [i_2 - 1]) ? (arr_1 [i_2] [i_2 - 4]) : (arr_8 [i_2 - 1]))))));
        var_17 = (min((arr_8 [i_2 - 4]), ((((((arr_5 [i_2] [i_2 - 4]) ? (arr_6 [i_2] [i_2] [i_2]) : var_4))) ? (arr_6 [4] [4] [i_2]) : 18446744073709551615))));
        var_18 ^= 1;
    }
    var_19 += var_10;
    #pragma endscop
}

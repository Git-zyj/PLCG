/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_17 = (((8351 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))));
        arr_2 [i_0] = (((arr_0 [i_0]) | (min(1731742922, (((!(arr_1 [i_0] [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    var_18 = (((0 ^ ((max(-8358, -8))))));
                    var_19 = (~-5054459428755075736);
                }
            }
        }
        var_20 = ((((arr_4 [10]) < (((1 && (arr_5 [i_1])))))));
        arr_13 [i_1] [i_1] = max(((((((arr_11 [i_1] [i_1] [i_1]) || (arr_7 [i_1] [i_1] [i_1]))) ? 8350 : (arr_11 [i_1] [i_1] [i_1])))), -1);
        var_21 = ((max(49, -8357)));
    }
    for (int i_4 = 3; i_4 < 9;i_4 += 1)
    {
        var_22 = ((max((arr_11 [i_4 - 3] [i_4] [i_4 - 3]), (arr_15 [i_4] [i_4 - 1]))));
        var_23 = (min(var_23, 134217727));
    }
    #pragma endscop
}

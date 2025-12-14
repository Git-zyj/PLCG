/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~var_1);

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_0] |= (((arr_1 [1]) ? ((max((arr_2 [i_0]), var_9))) : (arr_1 [i_0])));
                    arr_10 [i_0] [i_0] [i_1] [i_1] = ((-1050725512545010315 ? 217 : (((arr_5 [0] [i_1]) ? 0 : (arr_5 [i_2] [i_2])))));
                    var_11 |= (((((var_8 ? (((-7580543705641911392 ? (arr_5 [i_0] [i_2]) : 90758386627253238))) : (arr_4 [i_2] [i_0] [i_2])))) ? 3541381474 : (((!(var_5 && var_7))))));
                    var_12 -= (arr_7 [i_2] [i_1] [14] [3]);
                }
            }
        }
        var_13 ^= (arr_3 [i_0]);
        var_14 -= (((((~(arr_1 [i_0])))) ? ((((((198727391278003884 ? 18446744073709551611 : 14940))) ? ((-6 ? 0 : 1)) : (arr_0 [i_0])))) : (((((-6 ? 1050725512545010308 : 1393173941473716493))) ? 1050725512545010330 : var_4))));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_15 = (max(var_15, ((((arr_11 [i_3] [6]) <= ((((!(arr_11 [i_3] [1]))))))))));
        var_16 = ((((((!(arr_11 [i_3] [i_3]))))) > (arr_11 [i_3] [10])));
        var_17 = (arr_11 [1] [i_3]);
        var_18 = (-(((arr_12 [i_3]) ? 198727391278003884 : (arr_11 [i_3] [i_3]))));
    }
    var_19 = var_9;
    #pragma endscop
}

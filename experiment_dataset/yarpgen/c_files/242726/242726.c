/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((((min(((var_1 ? (arr_1 [i_0]) : var_9)), ((min(var_14, 8)))))) ? ((((min((arr_1 [i_0]), var_12))) ? (arr_0 [i_0]) : (arr_1 [i_0 - 1]))) : (arr_0 [i_0])));
        var_18 = (((arr_1 [i_0]) ? ((((var_9 | var_5) ? ((((arr_0 [i_0]) >= var_13))) : var_13))) : (arr_0 [i_0])));
        var_19 = (((((var_0 ? (arr_0 [i_0]) : (arr_1 [i_0 - 1])))) * ((((((arr_0 [i_0]) ? var_6 : -22))) ? ((((!(arr_1 [i_0]))))) : ((16 ? var_11 : var_9))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_20 += (((((var_11 ? (min((arr_3 [i_1]), var_12)) : (((max(52807, 0))))))) ? (((var_13 == 52820) * (var_0 & 0))) : 150));
        var_21 = ((~((var_8 ? (arr_3 [i_1]) : (arr_3 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_7 [i_2] = 0;
        arr_8 [i_2] = ((~((var_10 ? var_7 : ((var_17 << (var_2 - 23697)))))));
        var_22 = (((2703047580 - 1670797989) > var_4));
        arr_9 [i_2] [i_2] = ((((max(var_17, (arr_6 [i_2]))))) < var_1);
        var_23 = ((1549519358788011816 ? ((min((((arr_5 [i_2] [i_2]) ? var_2 : var_10)), (max(var_15, (arr_1 [i_2])))))) : (((var_13 ? 4294967278 : var_5)))));
    }
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            {
                arr_14 [9] [7] [i_4] = 240;
                var_24 = var_4;
            }
        }
    }
    var_25 = (min(var_2, var_9));
    #pragma endscop
}

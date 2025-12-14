/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 = ((max((arr_0 [i_0]), var_2)));
        var_19 = (((((var_5 ? (arr_1 [i_0]) : 0))) ? (min(var_10, (arr_1 [i_0]))) : var_17));
        var_20 &= ((3443491857 ? (((var_8 ? (arr_3 [i_0]) : (arr_3 [i_0])))) : 3618466910));
        arr_4 [i_0] = min((min(0, ((55091 ? (arr_3 [i_0]) : (arr_2 [i_0]))))), (((-1624757194 ? var_8 : 47))));
        var_21 = -var_7;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_22 = (!0);
        arr_8 [i_1] = 15844554606051370762;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    arr_13 [i_3] [i_1] [i_1] = 9311816633371485626;
                    var_23 = (arr_10 [i_3] [i_1]);
                }
            }
        }
        var_24 = 3261185810;
        arr_14 [i_1] = arr_9 [i_1] [i_1];
    }
    for (int i_4 = 2; i_4 < 18;i_4 += 1)
    {
        var_25 = (max(var_25, (((-var_0 ? (arr_7 [i_4]) : (((!(arr_15 [i_4] [i_4 + 1])))))))));
        var_26 = (min((arr_9 [i_4 + 2] [i_4 + 1]), (((arr_5 [i_4]) ? (arr_5 [i_4]) : (arr_5 [i_4])))));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_27 -= 10445;
        arr_20 [i_5] [i_5] = (arr_3 [i_5]);
    }
    var_28 = var_12;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((var_0 ^ 97) ? (8709685723453059956 ^ var_14) : var_12)));

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        var_20 = (arr_1 [i_0] [i_0]);
        var_21 = (max(var_21, ((min((min((arr_2 [i_0 - 3]), (var_16 && 12629))), ((((!52907) || 65535))))))));
        arr_3 [i_0] = (max(((((arr_2 [i_0 + 1]) >= (arr_2 [i_0 + 1])))), (((arr_2 [i_0 - 2]) ? var_5 : (arr_2 [i_0 - 2])))));
        arr_4 [i_0] = ((((max(255, 58719))) > (arr_2 [i_0])));
        var_22 = ((((((var_3 / (arr_1 [i_0] [i_0])))) ? (arr_2 [i_0]) : (((arr_1 [i_0] [i_0]) + (arr_2 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_23 = (-503340463 < 157);
                    var_24 = 127;
                    var_25 = ((~(((arr_5 [i_2]) * (((arr_0 [i_3]) - var_5))))));
                }
            }
        }
        arr_12 [i_1] [i_1] = (arr_7 [i_1] [i_1] [i_1]);
        arr_13 [i_1] = (((min((arr_11 [i_1] [i_1] [i_1]), var_16)) ^ (arr_11 [i_1] [i_1] [i_1])));
        var_26 = ((((((arr_9 [i_1] [i_1] [i_1] [i_1]) ? (arr_10 [5] [i_1] [i_1] [1]) : (arr_5 [i_1])))) ? (((arr_2 [i_1]) * ((var_16 ? 12629 : 27677)))) : ((max(1, (arr_9 [i_1] [i_1] [i_1] [i_1]))))));
    }
    for (int i_4 = 1; i_4 < 23;i_4 += 1)
    {
        var_27 = var_11;
        var_28 |= (max(((144 ? ((-(arr_1 [i_4] [18]))) : 31749)), (arr_0 [9])));
    }
    var_29 |= ((~((~(max(var_15, 1462911458))))));
    var_30 = (((((((-2147483647 - 1) + 2147483647)) + 2147483647)) >> (-9612 + 9618)));
    var_31 = (((((6659 ? 4294967295 : 49152))) ? var_8 : ((var_9 ? (var_1 != 12) : (~var_3)))));
    #pragma endscop
}

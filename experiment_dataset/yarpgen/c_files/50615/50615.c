/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_5;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 = (min(var_13, (((((arr_0 [4]) ? (((arr_0 [8]) ? (arr_1 [8] [i_0]) : (arr_1 [i_0] [i_0]))) : ((-(arr_1 [13] [i_0])))))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_5 [i_0] = (arr_3 [i_0]);
            var_14 = (~6775);
            var_15 = ((-var_4 ? 58773 : var_3));
        }
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_16 = (((~var_11) < (((-1424342132 >= (arr_6 [i_2]))))));
        var_17 |= (((arr_6 [i_2]) ? ((58755 ? var_10 : (1424342102 - 1424342102))) : (((-(arr_6 [9]))))));
        arr_8 [i_2] = (arr_7 [i_2] [i_2]);
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_18 |= var_10;

        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_19 |= arr_4 [8] [i_4] [6];
            var_20 = (((max(58773, var_9))) ? (arr_3 [i_3]) : (6775 && 1424342102));
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            arr_17 [i_3] [i_5] = (min(((max(1424342131, 6775))), (50628 / 4289808548)));
            arr_18 [16] [9] [9] = (((arr_14 [i_3] [i_3]) ? 87773040 : (~-1424342103)));
        }
    }
    for (int i_6 = 4; i_6 < 13;i_6 += 1)
    {
        var_21 = (((((var_7 - (arr_11 [i_6 + 2] [i_6 - 3] [i_6])))) ? (((127 ? (var_11 == var_11) : (arr_11 [i_6 - 4] [i_6 - 4] [i_6 - 2])))) : (32756 | -81)));
        arr_23 [i_6] [i_6] = (((((~(arr_21 [i_6 - 3])))) ? (((arr_10 [i_6 + 3]) / var_1)) : var_2));

        for (int i_7 = 1; i_7 < 16;i_7 += 1)
        {
            arr_27 [i_6] [i_6] = (~var_5);
            var_22 = (min(var_22, (((-1424342102 >= ((~(arr_12 [i_6] [i_6]))))))));
        }
        arr_28 [i_6] [i_6] = (min(1785690210, 2531348585083298882));
    }
    var_23 = (min(var_23, (((((((max(var_6, -75))) ? (max(var_1, var_2)) : -var_3)) << (-1116501339 + 1116501350))))));
    var_24 |= var_8;
    #pragma endscop
}

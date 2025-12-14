/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_4 == 1) + ((max(1, var_2)))));
    var_14 *= (~849867492225056824);

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = var_6;
        var_15 = (max(var_15, (((+((((arr_0 [i_0]) != var_1))))))));
        arr_3 [i_0] = ((~(max(var_11, (~1)))));
        arr_4 [i_0] [i_0] = -1330464624;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_10 [i_2] [i_2] [i_1] = (0 + 14);
            var_16 = (arr_7 [i_1]);
            arr_11 [i_1] = var_6;
        }
        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            var_17 = (max(var_17, ((((((165 - ((var_9 / (arr_0 [0])))))) ? (arr_13 [i_3 - 2]) : (min(-248, ((-(arr_1 [i_1]))))))))));
            var_18 = ((1 < (((!(((~(arr_8 [i_3] [i_1])))))))));
        }
        arr_14 [i_1] [i_1] = ((min((-17 && -1910008193), 1)));
    }
    for (int i_4 = 3; i_4 < 16;i_4 += 1)
    {
        var_19 = ((~(((arr_15 [i_4 - 3] [i_4 + 2]) << (((arr_15 [i_4 - 1] [i_4 + 2]) - 243))))));
        var_20 = (max(var_20, 1));
    }
    var_21 = (min(var_21, var_12));
    #pragma endscop
}

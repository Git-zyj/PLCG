/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((6680261474033147490 / 153) + (var_3 ^ 207))) | (((((var_10 < var_2) > (var_5 || var_5)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            var_15 += (((var_1 == var_10) != (0 || 0)));
                            arr_13 [i_0] [i_0] [i_2] [9] [i_2] [i_2] = ((((((arr_12 [i_1] [7] [i_4]) < (arr_11 [i_4] [4] [i_0] [i_1] [i_0])))) < ((((arr_1 [i_2]) < (arr_7 [i_0] [i_0] [21] [22] [2] [i_0]))))));
                        }
                        var_16 = (((((9303742851662728753 + -9) % (-1035393584 / var_7))) * (((((27 >> (var_2 - 38918226))) | (var_8 ^ var_8))))));
                    }
                }
            }
        }
        var_17 = ((((((var_5 >> (var_1 - 84))) >> (((236 ^ 0) - 213)))) ^ (((((arr_4 [i_0] [i_0]) << (209 - 209))) | (var_7 ^ var_9)))));
        arr_14 [i_0] = (((5451 > 162) == (1 && 225)));
        var_18 = ((((((var_12 > 22448) || ((((arr_12 [i_0] [i_0] [i_0]) & 44)))))) < (((((var_5 / (arr_3 [i_0] [i_0]))) > ((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) == var_1))))))));
        var_19 += (((((((arr_10 [i_0] [i_0]) >> (var_2 - 38918228))) * (((arr_4 [i_0] [i_0]) >> (((arr_7 [i_0] [i_0] [i_0] [i_0] [1] [i_0]) - 6687073708058195422)))))) - ((((var_6 % var_1) > (1 > var_12))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            arr_22 [i_5] = (1 < 5817370741865875204);
            arr_23 [i_5] [i_5] [i_6] = (((1 >> 1) >> (((((arr_11 [i_5] [i_5] [i_5] [i_5] [i_6]) % (arr_3 [i_5] [i_5]))) + 46))));
        }
        var_20 = ((1 ^ (18014398509481983 == 225)));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        var_21 = (min(var_21, ((((var_1 & var_4) && (((-64 ^ (arr_15 [21])))))))));
        var_22 = (min(var_22, ((((((-108 + 2147483647) >> (((arr_2 [4]) - 5836525027832533431))))) < (((arr_17 [i_7]) / (arr_10 [i_7] [i_7])))))));
    }
    var_23 += (((((((var_9 >> (-1 + 9))) < (var_1 < var_9)))) - ((((var_12 / var_3) > (var_11 > var_6))))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (!759551121237526721)));
    var_16 &= var_9;
    var_17 = var_12;
    var_18 ^= var_11;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 = (arr_0 [i_0]);
        var_20 = var_12;

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                var_21 = (max(var_21, var_7));
                var_22 = (((max(var_8, var_12))) ? (((var_12 ? (var_2 + 4294967277) : var_3))) : (((((min(0, 20123)))) % (arr_1 [i_0] [i_1]))));
            }
            var_23 = (-(min((((~(arr_2 [i_0] [i_0] [i_0])))), -6331981134987789687)));
        }
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        arr_8 [i_3] = ((!((min(((var_7 ? 6331981134987789709 : var_7)), (max(6331981134987789687, (arr_6 [i_3]))))))));
        var_24 += 16202;
    }
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        var_25 = (min(((-1391142671992186679 + (min(2113561140, -6331981134987789709)))), var_2));
        arr_12 [i_4] [i_4] = (arr_10 [i_4]);
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    {
                        var_26 = (-((~(arr_1 [i_6] [i_6]))));

                        for (int i_8 = 1; i_8 < 8;i_8 += 1)
                        {
                            arr_22 [i_4] [i_8] = ((-(arr_4 [i_8])));
                            arr_23 [i_4] [i_4] [i_4] [2] = (i_4 % 2 == zero) ? ((((562949953421311 >> (((arr_21 [7] [7] [i_6] [i_5] [i_8 + 2] [i_4]) - 332943177)))) - (((((arr_19 [i_4] [i_4] [i_6] [i_8] [i_8 - 1] [i_4]) <= (arr_19 [9] [i_7] [i_6] [i_5] [i_8 - 1] [i_4]))))))) : ((((562949953421311 >> (((((arr_21 [7] [7] [i_6] [i_5] [i_8 + 2] [i_4]) - 332943177)) - 1699391082)))) - (((((arr_19 [i_4] [i_4] [i_6] [i_8] [i_8 - 1] [i_4]) <= (arr_19 [9] [i_7] [i_6] [i_5] [i_8 - 1] [i_4])))))));
                            arr_24 [i_4] [i_4] [i_4] [i_4] [i_4] = 49336;
                            arr_25 [i_4] [i_4] [i_6] [i_4] [i_8 - 1] = var_1;
                        }
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            var_27 ^= ((+(((arr_20 [i_7]) - 3148349974))));
                            var_28 = (arr_21 [i_4] [9] [i_6] [i_5] [i_4] [i_4]);
                        }
                    }
                }
            }
        }
    }
    for (int i_10 = 4; i_10 < 21;i_10 += 1)
    {
        var_29 = (max(var_29, var_14));
        arr_32 [i_10] = (max((max((arr_3 [i_10 - 1]), var_9)), (((-(16223 >= 2113561140))))));
        arr_33 [i_10] = ((min((arr_5 [i_10 - 1] [i_10 + 1] [i_10] [i_10 + 1]), (arr_3 [i_10 - 2]))) | ((((arr_3 [i_10 + 1]) ? var_10 : var_4))));
    }
    #pragma endscop
}

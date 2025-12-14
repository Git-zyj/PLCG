/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~var_4);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (max((((((((arr_1 [i_0] [i_0]) <= (arr_0 [i_0] [i_0])))) * ((-(arr_2 [i_0])))))), (min((arr_2 [7]), (max((arr_2 [i_0]), (arr_0 [i_0] [i_0])))))));
        var_17 = ((~(arr_0 [i_0] [i_0])));
        var_18 = (arr_2 [i_0]);
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_19 ^= (!0);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_20 += (!1);
                        var_21 += (!14894561709616676180);
                        var_22 = (arr_10 [i_1]);
                    }
                }
            }
            var_23 = (((arr_12 [9] [i_1 + 1] [i_1] [i_2]) + (arr_6 [i_1 - 1] [i_1 + 1])));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 18;i_6 += 1)
                {
                    {
                        arr_20 [i_1 + 2] [14] [i_5] [i_1] = (arr_15 [i_1] [i_2] [i_1]);
                        var_24 = (max(91, (min(1071959301, 0))));
                        var_25 = (min((min((arr_19 [i_1 - 1] [i_2] [i_5] [i_1]), (arr_6 [i_1 + 2] [i_6 + 2]))), (197 || -903928844)));
                        var_26 -= (min((((((arr_8 [14] [i_1 + 1] [i_1]) ? (arr_5 [14]) : var_1)) ^ ((min((arr_15 [12] [i_2] [12]), (arr_18 [i_1 - 1] [i_1 - 1] [i_1 + 2] [3] [i_1])))))), (arr_16 [i_1 + 2] [i_1 + 2] [i_5] [i_1 + 2])));
                        var_27 &= ((!((max((arr_16 [i_6 + 2] [i_5] [12] [i_1 + 1]), (arr_7 [i_6 + 1] [i_6 + 2] [i_1 - 1]))))));
                    }
                }
            }
            var_28 *= (((~var_3) * (min(4194303, -28223))));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    {
                        var_29 |= var_13;
                        var_30 = (((arr_17 [i_9] [i_8 - 1] [i_7] [i_1 - 1] [i_1]) < (arr_19 [i_1] [i_1] [i_1 - 1] [i_1])));
                        arr_29 [10] &= (arr_25 [16]);

                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            var_31 = ((-var_3 / (((arr_26 [4] [i_8] [i_9] [i_10]) ? (arr_19 [i_1] [i_9] [i_8] [i_1]) : (arr_23 [i_1] [i_1] [i_8] [i_1])))));
                            var_32 = ((var_11 != (arr_27 [i_1 + 1] [i_1] [i_8 - 1] [i_8 - 1] [i_8 + 4] [i_8 + 4])));
                            var_33 = ((var_0 != ((~(arr_17 [i_1] [i_9] [i_8] [i_7] [i_1])))));
                            var_34 ^= (arr_16 [i_1] [i_8] [i_9] [i_10]);
                            var_35 = (((arr_33 [i_1] [i_7] [i_8 + 4] [i_10]) ? (arr_22 [i_8 - 2] [i_1]) : var_1));
                        }
                    }
                }
            }
            var_36 &= ((arr_31 [i_1] [i_7] [0]) ? (arr_5 [18]) : (arr_6 [i_1] [15]));
            var_37 = (var_4 % var_2);
        }
        var_38 &= (max((min(((-14954 ? (arr_5 [2]) : 14948)), (arr_15 [i_1] [i_1] [4]))), ((max((arr_25 [6]), (arr_16 [i_1 - 1] [i_1] [11] [11]))))));
        var_39 |= ((((((((~(arr_32 [10] [i_1 + 2] [i_1] [12] [16] [i_1 + 1])))) ^ ((~(arr_9 [i_1 + 1] [i_1] [i_1])))))) ? (((~((~(arr_18 [1] [1] [i_1 - 1] [i_1] [i_1])))))) : (~30)));
    }
    for (int i_11 = 2; i_11 < 6;i_11 += 1)
    {
        arr_36 [i_11] = (min((min(862461982839688732, ((max((arr_4 [17] [5]), -91))))), (arr_1 [i_11 + 3] [i_11 + 2])));
        var_40 = (min((((arr_6 [i_11] [1]) != (arr_6 [i_11] [i_11 - 2]))), (!0)));
    }
    var_41 = var_0;
    var_42 = (~127);
    #pragma endscop
}

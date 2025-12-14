/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] &= ((((var_4 + (arr_0 [i_0 + 3] [i_0 - 2])))) ? (!795203179) : var_4);
        var_10 = (max(var_10, ((((((arr_1 [i_0 - 2]) ^ (arr_1 [i_0 - 1]))) >> (16777200 - 16777174))))));
        var_11 = (arr_2 [i_0] [i_0 - 2]);
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_12 &= (((((~(arr_0 [i_1 - 1] [i_1 - 3])))) ? (arr_0 [i_1 + 1] [i_1 + 1]) : (3499764128 || 795203179)));
        var_13 = ((!(arr_0 [i_1] [i_1])));
        var_14 ^= 404241707;
        var_15 += (arr_1 [i_1]);
        var_16 *= (((((arr_5 [18]) & (arr_1 [i_1 + 3]))) + ((((((((arr_1 [i_1 - 3]) >= 1406186155))) < (((arr_0 [i_1 + 3] [i_1]) ? (arr_2 [i_1] [i_1]) : (arr_4 [4])))))))));
    }

    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        var_17 = (max(var_17, (arr_6 [i_2])));
        var_18 = (min(var_18, (arr_0 [i_2] [i_2])));
        arr_10 [i_2] = 3499764095;
        var_19 = (max(var_19, var_2));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_20 = (min(var_20, -892334780));

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 4; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    {
                        arr_22 [0] [i_4] [i_6] |= (((arr_11 [i_4]) ? (((arr_13 [i_5 - 2]) << (var_5 + 99))) : (((((arr_20 [i_6] [i_3] [i_4] [i_6]) == var_1))))));
                        arr_23 [i_4] [i_4] [i_4] = (var_2 ^ 400764827);
                        var_21 ^= var_3;
                        var_22 = ((-(arr_20 [i_5 - 1] [i_5] [i_5] [i_6])));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        {
                            var_23 *= ((((!((min(17876104446439479453, (arr_18 [i_4] [i_4] [6] [i_8 - 1]))))))));
                            var_24 = (max(var_24, var_8));
                            var_25 = (arr_20 [i_3] [i_4] [i_7] [i_4]);
                            var_26 = (max(var_26, (((((((arr_21 [i_8 + 1] [i_8 + 1] [0] [0] [i_8] [i_8 + 1]) | (arr_21 [i_8 - 2] [i_8] [2] [2] [i_8 - 2] [i_8 - 2])))) && (arr_21 [i_8 + 1] [i_8] [1] [1] [i_8] [i_7]))))));
                        }
                    }
                }
            }
        }
        for (int i_10 = 3; i_10 < 16;i_10 += 1)
        {
            var_27 -= (arr_12 [i_3]);
            var_28 = ((((var_6 && (arr_17 [i_3] [12] [2] [i_10 + 4])))));
            arr_34 [i_10] [i_3] [i_3] = arr_17 [i_3] [0] [4] [i_10 + 1];
            /* LoopNest 3 */
            for (int i_11 = 1; i_11 < 16;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 18;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        {
                            arr_43 [i_3] [i_12] = 18446744073709551611;
                            var_29 *= (+(((((arr_32 [i_3] [i_3]) - 0)) & (arr_42 [i_13] [i_13] [i_13]))));
                        }
                    }
                }
            }
        }
        for (int i_14 = 3; i_14 < 19;i_14 += 1)
        {
            var_30 = -5707396025418023010;
            var_31 ^= ((-570639627270072162 != ((((((var_1 >= (arr_37 [i_3] [i_3] [i_3] [i_3] [i_14] [8]))) || 1993603495))))));
            arr_47 [i_3] [i_14] [i_14] = (arr_0 [i_3] [i_3]);
            var_32 ^= ((var_9 > ((((((((arr_15 [i_14] [i_14] [i_3]) && (arr_21 [i_14] [i_14] [i_3] [10] [i_3] [i_3]))))) % var_6)))));
            var_33 |= (arr_31 [i_14 - 2] [i_14] [i_14 - 2] [i_3] [i_3] [4]);
        }
        for (int i_15 = 1; i_15 < 16;i_15 += 1)
        {
            var_34 = (max(var_34, (((((((((!(arr_5 [18]))) || (arr_5 [6]))))) == (min(((((arr_39 [i_3] [i_3] [i_3] [i_15] [i_15 + 3] [i_15]) >= (arr_11 [i_15])))), 1406186155)))))));
            var_35 ^= (var_5 >= 2888781158);
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 20;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 18;i_17 += 1)
                {
                    {
                        var_36 = (min(var_36, (arr_25 [i_15 + 3] [i_15 + 1] [i_15 + 4])));
                        var_37 = 1406186135;
                        var_38 = (max(var_38, ((((var_2 / 8429796853995780437) * ((((var_5 == (arr_17 [i_3] [i_15] [i_16] [i_17]))))))))));
                        var_39 = var_2;
                    }
                }
            }
            var_40 -= (min((arr_26 [8] [i_15 + 3] [8]), (!var_6)));
        }
    }
    #pragma endscop
}

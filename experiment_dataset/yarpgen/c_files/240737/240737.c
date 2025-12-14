/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= min(((var_1 ? var_6 : var_7)), var_9);
    var_12 = (((((~var_4) >= ((max(var_8, var_2))))) ? var_0 : ((var_1 - (-193002124090109885 / 8409617417162396463)))));
    var_13 = var_4;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [4] |= ((var_10 ? 8409617417162396463 : (min(-8409617417162396470, -4857))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_14 *= -2894989252560304053;
                        arr_11 [i_0] [i_1] [i_0] [i_1] = (arr_9 [i_0] [i_0] [2] [2]);
                    }
                }
            }
        }
        arr_12 [i_0] = (min((8409617417162396455 != 2894989252560304053), (arr_3 [12] [i_0] [12])));
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        arr_16 [8] [i_4] &= ((-((var_5 ? 1 : var_10))));
        arr_17 [i_4] = ((!(!2894989252560304040)));
        arr_18 [i_4] = arr_0 [i_4];
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        arr_21 [i_5] [i_5] = var_6;

        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_15 = var_6;
            var_16 = ((((min((arr_23 [i_6]), (arr_23 [i_6])))) ? (arr_24 [i_6]) : ((((var_1 <= var_2) != 0)))));
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 21;i_8 += 1)
                {
                    {
                        arr_32 [i_5] |= ((62 ? ((((-10654 + 2147483647) << (((-30008 + 30037) - 29))))) : (!var_10)));
                        arr_33 [i_5] [i_6] [i_5] [i_5] &= (max((((((!(arr_22 [i_8 - 1]))) ? (!73) : var_2))), (arr_27 [i_7 + 1] [i_7 + 1] [i_8 + 1])));
                    }
                }
            }
            var_17 = ((!var_3) ? ((min((arr_23 [i_5]), (max(8409617417162396454, -8409617417162396480))))) : (max(2279189885921066593, 93113277332285284)));
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            arr_37 [i_5] = (5714260481960979324 ? (max(-16167554187788485020, (((0 ? 1 : 0))))) : (!3703373207));
            var_18 *= ((((((((14449834553934430881 + (arr_36 [i_5] [i_5] [11])))) ? var_5 : ((((arr_24 [i_5]) ? 0 : -71)))))) ? ((var_3 ? (arr_20 [i_9] [i_5]) : 5718552470541967207)) : (var_7 / var_5)));
            var_19 = (min(var_19, (min(9147, (max(11, (arr_26 [i_5] [i_9])))))));
            var_20 = var_8;
        }
        /* vectorizable */
        for (int i_10 = 2; i_10 < 18;i_10 += 1)
        {
            arr_40 [i_10 + 4] [i_10] [17] &= var_8;
            var_21 *= (-13397 > 77);
        }
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 20;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    {
                        arr_49 [i_5] [i_5] [i_5] [i_5] [i_5] [1] = (~32169);
                        arr_50 [i_5] [i_11] [8] [i_13] [i_12] [i_11] |= -var_7;
                        var_22 *= var_3;
                    }
                }
            }
        }
        var_23 &= (max(-2560782035313085345, (((!((((arr_41 [i_5]) ^ 2796777385))))))));
    }
    #pragma endscop
}

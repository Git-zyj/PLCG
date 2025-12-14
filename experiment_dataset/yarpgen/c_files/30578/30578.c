/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = max(((min(24345, var_8))), (((max(46405, 1)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 = 2339270278;
        arr_2 [i_0] = (1239005054 == (max((var_7 >= 1), (((arr_0 [i_0] [i_0]) & (arr_0 [i_0] [i_0]))))));
        var_17 = (var_4 & 8201067958056824769);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_18 *= var_13;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                {
                    arr_9 [i_1] [i_2] [i_1] [i_3] = 1410;

                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_19 = (max(var_19, (arr_1 [i_4])));
                        arr_12 [i_1] = (1727568956 & 125);
                        var_20 = (!var_2);
                        var_21 *= ((((!(-2147483647 - 1))) ? (((arr_11 [i_1] [i_2] [i_2] [i_3 + 1] [i_4]) ? (-2147483647 - 1) : (arr_8 [4] [i_2] [i_3]))) : (!4194048)));
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_22 = ((((8605007038381832874 * (arr_11 [i_1] [i_2] [9] [0] [3]))) % (arr_4 [i_1] [1])));
                        var_23 *= (343960852 | 1);
                    }
                    arr_15 [i_1] = (((arr_8 [i_3] [i_3] [i_3]) ? (-2147483647 - 1) : (arr_8 [i_3] [i_2] [i_1])));
                }
            }
        }
        arr_16 [4] |= 2567398339;
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 13;i_6 += 1)
    {
        var_24 = ((!(arr_17 [i_6 - 1])));

        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            var_25 = (((arr_21 [i_6 - 2]) * 40060));
            var_26 = 32745;
            arr_22 [1] [10] [i_7] = var_2;
        }
        for (int i_8 = 1; i_8 < 10;i_8 += 1) /* same iter space */
        {
            var_27 = (min(var_27, var_4));
            var_28 = (arr_19 [i_6 - 1] [i_6 - 2]);
            arr_26 [i_6] [i_8] &= (!8605007038381832874);
        }
        for (int i_9 = 1; i_9 < 10;i_9 += 1) /* same iter space */
        {
            var_29 -= (((!(arr_29 [12]))));
            arr_30 [10] &= (arr_20 [12] [i_9]);
            var_30 &= (arr_29 [1]);
            arr_31 [i_9] = ((3951006432 ? 2567398339 : 3951006455));
        }
        for (int i_10 = 1; i_10 < 10;i_10 += 1) /* same iter space */
        {
            var_31 = var_13;
            var_32 = ((~(-32767 - 1)));
        }
    }
    var_33 &= ((~(((var_0 & -10858) | (753926156 & -20315)))));
    #pragma endscop
}

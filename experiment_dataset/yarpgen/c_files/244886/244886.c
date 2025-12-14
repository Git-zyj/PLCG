/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, 38));
                    var_20 = (max((((~1804187296205065174) % (arr_6 [4]))), (-95 < var_13)));
                }
            }
        }
        var_21 = (min(var_21, ((min(2692461160, var_0)))));
        var_22 = (min(var_22, (((((((!(arr_2 [i_0]))) ? var_12 : var_10)) <= 40)))));
        var_23 *= (9307 <= var_2);
        var_24 += ((-(-40 - var_6)));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        var_25 ^= (((var_5 && var_9) || (((0 ? 3292886749 : -9307)))));
        var_26 &= ((((max(((2325794518422991810 ? var_12 : (arr_10 [i_3]))), (((var_17 + 2147483647) << (6369796113847705850 - 6369796113847705850)))))) ? ((25794 ? 1002080547 : 2711304872580352967)) : (arr_0 [i_3])));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
    {
        var_27 += (((27541 + var_16) / (arr_12 [i_4])));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {
                        var_28 ^= ((((45 ? 2129545119 : var_18))) ? (var_6 - -13104) : ((((var_15 && 7180424) ? 511 : -6369796113847705855))));
                        var_29 &= ((((((-13075 <= ((6369796113847705867 ? 9304 : var_16)))))) + 4808157210236631011));
                        var_30 = arr_7 [i_6] [i_4];
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
    {
        var_31 = (max(var_31, (((!(arr_0 [i_8]))))));
        var_32 = (max(var_32, (((arr_19 [i_8] [i_8] [i_8]) ^ (arr_19 [i_8] [i_8] [i_8])))));

        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            var_33 = (max(var_33, (arr_8 [i_8] [i_8])));
            var_34 *= ((((var_18 != (arr_11 [i_9]))) ? -1 : var_1));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    {
                        var_35 ^= ((var_5 ? 2052921795209903819 : (!1)));
                        var_36 = (min(var_36, ((((arr_8 [i_8] [i_10]) << (((arr_6 [i_8]) - 17072955652331839899)))))));

                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            var_37 = (min(var_37, -var_6));
                            var_38 = (min(var_38, (((24900 ? 1002080539 : -35)))));
                        }
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            var_39 &= (arr_28 [i_8] [i_10] [i_10] [17]);
                            var_40 ^= (!-4830554031374631038);
                            arr_39 [i_13] [i_11] [i_10] [i_10] [2] [10] |= 7484221927923184517;
                        }
                        var_41 = (var_18 && var_12);
                        var_42 = (((arr_28 [i_8] [i_9] [i_10] [i_11]) ? (arr_5 [i_8] [i_8] [i_8]) : (arr_5 [i_8] [i_9] [i_10])));
                    }
                }
            }
            var_43 = (min(var_43, (arr_28 [i_8] [i_8] [i_8] [i_8])));
            var_44 *= ((!(15863541959200549313 ^ 18014398509481952)));
        }
    }
    var_45 = (max(var_45, var_12));
    #pragma endscop
}

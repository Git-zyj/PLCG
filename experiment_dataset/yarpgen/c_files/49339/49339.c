/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
        {
            var_17 = (arr_4 [i_0] [i_1]);
            var_18 = ((~(max(var_5, -13700))));
            var_19 *= (((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_1])))) ? (arr_0 [i_1]) : (((arr_0 [i_0]) + var_8)));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            arr_7 [i_0] = (((max((((arr_5 [i_0] [i_0]) ? (arr_6 [i_0]) : var_3)), ((min(var_1, (arr_5 [9] [i_2])))))) >= (((~(arr_6 [i_0]))))));
            arr_8 [i_0] [i_0] = ((((35472 >> (-22472 + 22499))) ^ (((!(arr_2 [i_0] [i_0]))))));
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 4; i_4 < 10;i_4 += 1)
            {
                var_20 = (min((((var_4 != (max(-5434449509515134386, -1))))), (arr_10 [i_0])));
                var_21 = (arr_0 [i_0]);
            }
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                arr_15 [5] [i_5] = (max(1386179525132534006, ((var_9 | (var_6 > 9223372036854775807)))));
                var_22 |= ((!(6 && 1000358469855954141)));
                var_23 = (min(var_23, (((-(((5936796471058455834 | 46841) & -3464656553333439045)))))));
            }
            arr_16 [5] = ((((((((max(32767, var_7)))) & (min(3844994842743896101, (arr_5 [i_3] [i_3])))))) ? 0 : (!-17946)));
            var_24 = (max(var_24, (((-(min((arr_1 [i_0]), 351)))))));
        }
        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
        {
            arr_19 [i_0] [i_0] [i_0] = (31999 / -7247124705480319803);
            var_25 ^= (arr_17 [i_6]);
            var_26 = ((((((arr_11 [i_0] [i_0] [i_0]) ? var_9 : -9207705157788070920)) & (arr_18 [i_0] [i_0] [i_6]))));
        }

        for (int i_7 = 2; i_7 < 10;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 10;i_10 += 1)
                    {
                        {
                            arr_31 [i_0] [i_8] [i_0] [i_9 - 2] [i_10] = 27112;
                            var_27 ^= (min(10791, ((25561 ? (-918833372 != 26659) : -27633))));
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_8] = (((var_1 - 30742) ? ((min(0, -255))) : (-2005984726881526086 - 255)));
                            var_28 = ((-58 ? 63370 : 244));
                        }
                    }
                }
            }
            var_29 = (min(21754, (min(((~(arr_14 [i_7] [i_7 - 1] [i_7] [i_7 - 1]))), ((min(-12308, 28672)))))));
        }
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            var_30 = (arr_24 [i_0] [i_11] [i_11] [i_11]);
            var_31 = var_1;
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 12;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        {
                            var_32 = ((((min((arr_2 [i_13 - 2] [i_13]), var_7))) + (((!(arr_1 [i_13 - 2]))))));
                            var_33 ^= 65532;
                            arr_41 [i_11] [i_11] [i_14] = 15;
                        }
                    }
                }
            }
        }
        for (int i_15 = 2; i_15 < 9;i_15 += 1)
        {
            var_34 = ((!(((var_8 * (arr_2 [i_0] [i_15 - 2]))))));
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 13;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 13;i_17 += 1)
                {
                    {
                        arr_49 [i_15] = (arr_6 [i_15 + 1]);
                        var_35 = (max(var_35, (((-(min((max(32750, (arr_34 [i_17] [i_17]))), 15405)))))));
                        arr_50 [i_0] [i_15 - 1] [i_0] [i_17] [i_17] [i_15] = ((max(447582697, ((var_13 ? (arr_42 [i_15] [i_15]) : -18477)))));
                        arr_51 [i_0] [i_15] [i_15] [i_15] [11] = (min((arr_12 [i_0]), -32671));
                        var_36 = ((-(min(var_10, (!var_2)))));
                    }
                }
            }
            var_37 = arr_3 [i_15 + 2] [i_15] [i_15 + 2];
        }
    }
    for (int i_18 = 0; i_18 < 22;i_18 += 1)
    {
        var_38 = ((12 << (23430 - 23409)));
        var_39 = ((((-(-8075157519497426692 <= 15)))) ? ((((min(11, (arr_53 [i_18] [i_18])))))) : (21192 % 4257542644));
    }
    var_40 = 4854;
    var_41 = (min(var_6, (((min(-13, var_12))))));
    /* LoopNest 2 */
    for (int i_19 = 1; i_19 < 16;i_19 += 1)
    {
        for (int i_20 = 0; i_20 < 19;i_20 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 19;i_21 += 1)
                {
                    for (int i_22 = 1; i_22 < 18;i_22 += 1)
                    {
                        {

                            for (int i_23 = 1; i_23 < 16;i_23 += 1) /* same iter space */
                            {
                                var_42 = (arr_53 [i_23 + 3] [i_22 + 1]);
                                var_43 ^= ((-(((!(arr_63 [i_20] [i_20] [i_23 - 1] [i_20] [i_23 + 2] [i_23]))))));
                            }
                            for (int i_24 = 1; i_24 < 16;i_24 += 1) /* same iter space */
                            {
                                var_44 = 23414;
                                arr_72 [i_22] = (~var_14);
                            }
                            var_45 = (arr_59 [i_19 + 2] [i_19 - 1]);
                        }
                    }
                }
                arr_73 [i_20] [i_20] = (arr_64 [i_19] [i_19 - 1] [i_20]);
            }
        }
    }
    #pragma endscop
}

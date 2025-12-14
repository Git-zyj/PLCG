/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_19 = (max(var_19, (((var_9 + (~var_0))))));
            var_20 *= (min(((((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0])))), (min((((!(arr_6 [i_1] [i_0])))), (max(46667684, 18446744073709551605))))));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            arr_15 [i_5] [i_4] [i_2] [i_3] [i_2] [i_0] [i_0] = (arr_3 [i_5]);
                            var_21 ^= (max((((((((arr_6 [i_0] [i_2]) ? 1 : (arr_1 [i_2])))) > (min(2459954388646069683, var_17))))), (((var_6 ? var_1 : (arr_9 [i_0] [i_3] [i_5]))))));
                            var_22 = (((~1048448) != (min(((((arr_1 [i_5]) != var_10))), (~var_6)))));
                        }
                    }
                }
            }
            var_23 = (min((arr_8 [i_0] [i_0] [i_0]), (((var_0 ? (!6375384112338251011) : (12071359961371300613 >= -844806892))))));
            arr_16 [i_0] = (((max(var_18, (arr_1 [4])))));
            var_24 = (max(var_24, (arr_4 [i_2])));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        {
                            var_25 = (min((arr_18 [i_6] [i_6] [i_8]), ((((arr_10 [i_9] [i_9] [2]) ? (arr_23 [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1]) : ((var_14 << (214 - 211))))))));
                            var_26 = (arr_18 [i_0] [i_0] [i_0]);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_10 = 4; i_10 < 10;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    {
                        arr_31 [i_0] [i_6] [i_6] [i_11] = ((((min(18076282728037580076, (arr_10 [i_0] [i_0] [i_0])))) ? ((124 ? (arr_10 [i_0] [i_0] [i_0]) : (arr_10 [i_0] [i_10] [i_11]))) : (((arr_10 [i_11] [i_11] [i_11]) ? (arr_10 [i_11] [i_10 - 2] [i_6]) : (arr_10 [i_0] [i_6] [i_11])))));
                        var_27 += 1;
                    }
                }
            }
        }

        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            arr_35 [i_12] = var_6;
            var_28 = (((((arr_6 [i_0] [i_12]) ^ (arr_6 [i_0] [i_0]))) ^ (((arr_29 [i_0]) ? var_4 : (arr_6 [i_0] [i_12])))));
            arr_36 [i_0] = (arr_0 [i_0]);
        }
    }
    for (int i_13 = 0; i_13 < 24;i_13 += 1)
    {
        arr_40 [i_13] = (-15026 < 203);
        var_29 = (max(var_29, 1));
    }
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        arr_43 [i_14] [i_14] = ((3345444411404205567 ? ((max(1, 2676881453))) : 18446744073709551601));
        arr_44 [i_14] = (arr_4 [i_14]);
        arr_45 [i_14] = (((!225) / ((0 ? 49850 : 16262927646319191144))));
    }
    for (int i_15 = 0; i_15 < 20;i_15 += 1)
    {
        var_30 -= ((((!-1048465) ? (29075 == 1) : 240)));
        var_31 = (max(((((!(arr_37 [i_15]))))), ((-(arr_38 [i_15])))));
        arr_48 [i_15] [i_15] = arr_38 [i_15];
        var_32 = (!47886);
    }

    for (int i_16 = 0; i_16 < 12;i_16 += 1)
    {
        arr_51 [i_16] = (arr_39 [i_16]);
        var_33 = (min(var_33, (arr_39 [i_16])));
    }
    /* LoopNest 2 */
    for (int i_17 = 1; i_17 < 22;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 23;i_18 += 1)
        {
            {
                var_34 = (max(var_34, (((min(3905126642, 966376832761158410))))));
                arr_58 [i_17] [22] |= (((((6549211974130878940 ? -11 : 47882))) ? (arr_37 [i_17 - 1]) : -6453502736412139679));
                arr_59 [i_18] [i_18] = ((!(-127 - 1)));
                var_35 = (max(var_35, (((5066578449039625679 ? 2676881453 : 1)))));
            }
        }
    }
    #pragma endscop
}

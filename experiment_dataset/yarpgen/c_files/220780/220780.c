/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    var_17 = (arr_8 [i_0] [i_2]);
                    var_18 = var_11;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_19 ^= ((((((max(849192028, 849192047))) ? var_4 : (3445775271 | var_9)))) ? (var_1 + var_4) : var_9);
                                var_20 &= -0;
                                arr_15 [i_4] [i_4] [i_1] [14] [i_1] [i_0] [i_0] &= (min((max((arr_7 [i_2 - 3] [8] [i_2 + 1]), var_7)), (!849192047)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (max(var_21, ((min(var_15, 3445775261)))));
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 8;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            {

                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_22 *= (((var_7 ? (((849192044 ? 30207 : var_10)) : ((0 ? (arr_25 [i_5] [i_6] [i_7] [2] [i_9]) : var_8))))));
                                var_23 = (max(var_23, ((min((arr_13 [i_5 + 2]), (((!(3445775261 == var_7)))))))));
                                var_24 -= ((((max(((((-9223372036854775807 - 1) ? 14898 : 28801))), (arr_19 [i_5])))) ? (min((!2820), (-9223372036854775807 - 1))) : var_13));
                            }
                        }
                    }
                    var_25 = min(((min((!var_15), 176))), var_6);
                }
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    var_26 -= var_2;
                    var_27 *= ((+(min((arr_18 [8] [i_10]), (-9223372036854775807 - 1)))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 8;i_12 += 1)
                        {
                            {
                                var_28 = (218 ? (min(73, 1174007995)) : 0);
                                arr_39 [i_5] [i_6] [i_10] [2] [8] [i_12 - 1] &= (((((-((min(var_1, -11514)))))) ? ((~(((!(arr_22 [1] [i_10] [i_6] [i_5])))))) : ((var_1 ? var_9 : (arr_34 [6] [i_5 - 1] [i_12 + 3])))));
                            }
                        }
                    }
                }
                for (int i_13 = 0; i_13 < 0;i_13 += 1)
                {
                    var_29 = (max(var_29, (((((max((arr_35 [i_5] [i_13 + 1] [i_5 + 2]), var_4)))) < -3087680122597140279))));
                    var_30 = -10924;
                    var_31 = (max(var_31, ((((arr_0 [i_5 + 3]) ? ((((var_1 <= ((var_15 ? var_15 : 3445775273)))))) : (arr_7 [13] [i_6] [i_13 + 1]))))));
                    var_32 = (max(var_32, (((((max(var_1, var_11))) ? -var_3 : 62715)))));
                }
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    var_33 -= (min(var_4, ((((min((arr_43 [i_5] [2]), -11206))) ^ ((min(var_5, 12)))))));
                    var_34 &= ((-var_7 ? (max((44 << 1), (!var_2))) : ((min((min(38, -3039)), (var_11 == -2357580466842258608))))));
                    arr_46 [i_5] [i_5] = (max((((((2820 ? (arr_8 [i_5] [10]) : var_9))) ? ((min(37, (arr_34 [i_5] [i_6] [i_5])))) : (!849192039))), ((((min(var_12, var_8))) ? var_10 : -62733))));
                }
                var_35 = (min(var_35, (((15290951098774144615 ? (!var_11) : (min(-46, (!var_15))))))));
                arr_47 [i_5] = 1;
                var_36 = ((min(var_13, var_5)));
            }
        }
    }
    #pragma endscop
}

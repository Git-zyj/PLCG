/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((((min(var_2, var_5)) | 1)), var_13));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_21 = var_6;
        var_22 = ((min(((min(-69, 40107))), ((var_11 ? (arr_1 [i_0]) : 1679259686)))));

        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            var_23 &= (((-2147483647 - 1) ? 3110610463 : 134));
            arr_4 [i_0] [i_0] [i_0] = ((-(((!(((var_16 ? var_2 : 33523377335249318))))))));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_24 = 2253604784;
            var_25 ^= (max(1298628558, -30083));
        }
        for (int i_3 = 1; i_3 < 8;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                var_26 |= (var_11 + 2041362519);

                /* vectorizable */
                for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                {
                    var_27 += (((var_3 ? var_18 : (arr_11 [i_3] [i_3] [i_3] [11] [8]))));
                    var_28 = 34159;
                    var_29 ^= ((15550 ? 2041362511 : (arr_12 [8] [i_3] [i_4] [i_5] [11])));
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                {
                    var_30 *= var_8;
                    var_31 = ((((min(((var_11 ? (arr_7 [i_0] [i_3]) : var_11)), (var_19 - 31377)))) ? (23055 <= -876613084) : var_9));
                    var_32 = 9026335656377858134;
                    var_33 = (max(var_33, -5397772539331393372));
                }
                arr_15 [i_0] [i_0] [i_4] = ((-(((arr_2 [i_3 + 4]) ? (arr_2 [i_3 + 4]) : 60415))));
            }
            var_34 = ((((((arr_1 [i_3 + 3]) ? (arr_1 [i_3 + 4]) : (arr_1 [i_3 - 1])))) ? (((arr_1 [i_3 - 1]) ? (arr_1 [i_3 + 3]) : 2041362509)) : (((max((arr_1 [i_3 + 3]), var_6))))));

            for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
            {
                var_35 += ((((((((var_0 ? 31397 : 4354082056065857035))) ? (!var_10) : ((0 ? 1099511627775 : (arr_2 [i_7])))))) ? (min(var_0, 16707066061184591541)) : (((((arr_18 [i_3] [i_0] [i_0]) || (arr_7 [i_7] [i_7])))))));
                var_36 *= 30808;
                var_37 = (min(var_37, var_12));
            }
            for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
            {
                var_38 = 34728;
                var_39 = (min(var_39, ((((((var_18 ? var_2 : var_0))) ? (arr_7 [9] [i_3]) : (((1 >= (arr_5 [i_3] [i_3])))))))));
            }
        }
        for (int i_9 = 1; i_9 < 8;i_9 += 1) /* same iter space */
        {
            var_40 = (!1023);
            var_41 = 520093696;
            /* LoopNest 3 */
            for (int i_10 = 3; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        {
                            var_42 = 31393;
                            var_43 = (arr_12 [i_0] [i_10] [i_0] [i_11] [i_0]);
                        }
                    }
                }
            }
        }
        var_44 = (min(var_44, (((var_16 ? (((var_8 ? var_7 : (arr_13 [i_0] [i_0] [i_0])))) : ((min(var_15, var_0))))))));
    }
    for (int i_13 = 0; i_13 < 18;i_13 += 1)
    {
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 18;i_15 += 1)
            {
                {
                    var_45 = 126;
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 18;i_16 += 1)
                    {
                        for (int i_17 = 2; i_17 < 17;i_17 += 1)
                        {
                            {
                                arr_46 [i_13] [i_14] [i_15] [i_15] [i_15] [i_17] = ((var_2 ? var_18 : 1023));
                                var_46 = (max(58240, 47365));
                                arr_47 [i_13] [i_14] [i_15] [i_16] [i_13] [i_14] [i_17 - 1] = (((((66 ? 38288 : (arr_40 [17] [i_17] [i_17 - 2] [i_17] [i_17 - 2] [i_17 - 1])))) ? (min((arr_39 [i_17 - 1] [i_17 - 1]), var_13)) : (arr_32 [i_17 - 2])));
                                var_47 *= (((((var_10 ? (arr_34 [i_17 - 1] [i_17 - 1]) : (arr_34 [i_17 - 1] [i_17 + 1])))) % -var_4));
                            }
                        }
                    }
                }
            }
        }
        var_48 = (min((((arr_38 [i_13]) ? 133 : (arr_40 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]))), ((min(((min(-2045957295, var_1))), ((var_6 ? 3541778982 : (-32767 - 1))))))));
        var_49 = (max(-31175, 2870));
        arr_48 [i_13] = (!var_4);
    }
    #pragma endscop
}

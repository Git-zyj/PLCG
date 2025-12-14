/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;
    var_21 = (max(((var_7 ? (min(var_9, var_16)) : (((max(0, var_6)))))), var_17));
    var_22 = var_5;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [1] [7] = var_6;
        arr_3 [11] = (arr_1 [i_0] [i_0]);
        var_23 = (min(var_23, var_7));
        var_24 = ((!((min(var_0, ((min(var_12, var_2))))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_10 [i_1] [i_1] [i_2] = (min((arr_4 [2] [2]), (min((~32767), ((106 ? 32743 : 32743))))));
            arr_11 [i_2] = ((((+((var_1 << (((-1843 + 1861) - 17)))))) != var_17));
            var_25 = (min(((-1843 ? ((((arr_9 [1] [i_2]) ? var_5 : var_19))) : (min(23574, (arr_0 [i_1]))))), var_8));
        }

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            arr_15 [11] [11] [i_3] = (min((~var_17), ((((~var_19) && 118)))));
            var_26 = var_2;
            var_27 = (min((min((arr_9 [3] [i_3]), (arr_9 [i_1] [i_1]))), (((((max((arr_8 [i_3]), (arr_8 [7])))) <= ((max(-13104, (arr_13 [16])))))))));
            var_28 = ((-((-(arr_9 [i_3] [i_3])))));

            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                arr_18 [i_1] [i_3] [i_4] [i_3] = var_6;
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        {
                            arr_24 [i_1] [i_3] [i_6] [i_5] [i_3] [i_3] = ((((~((~(arr_6 [i_6] [i_4] [i_6 + 3]))))) % var_17));
                            arr_25 [i_6] [i_6] [i_1] [i_1] [15] [i_5 + 2] [5] = ((+(max(var_2, (((arr_14 [i_1]) << (var_17 - 58285)))))));
                            arr_26 [i_1] [i_5] [i_6] = ((((min((arr_7 [i_6 + 4] [i_6 + 4] [i_6 + 3]), (max((arr_23 [i_1] [i_4] [1] [1]), (arr_22 [i_1] [i_3] [i_3] [i_5] [i_6 + 3])))))) ? (min(0, -55755)) : ((((((-(arr_23 [i_3] [i_3] [i_4] [i_3])))) && ((((arr_13 [8]) ? (arr_13 [i_1]) : 1837))))))));
                        }
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            var_29 = ((var_2 ? (((((arr_9 [i_1] [14]) != (arr_21 [i_1] [i_7] [14]))))) : (arr_9 [i_1] [i_7])));
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    {
                        arr_34 [i_8] [i_7] [i_7] [16] = (((((((18446744073709551615 ? -1755153881 : -1453756049))) ? ((min(-1839, 32767))) : 151)) / var_6));
                        var_30 = -32741;
                    }
                }
            }
            arr_35 [i_7] [i_7] [i_7] = (min(((~(arr_32 [i_7] [i_7]))), var_18));
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_31 = ((var_7 % (arr_14 [15])));
            arr_40 [i_10] [i_10] = (min((max(var_12, (arr_16 [i_1] [i_10] [14] [i_1]))), (!var_15)));
            var_32 += (arr_13 [6]);
            var_33 ^= (((arr_14 [i_1]) ? (min(((((arr_8 [i_10]) != 104))), (arr_7 [i_10] [i_1] [12]))) : var_8));
        }
        for (int i_11 = 3; i_11 < 16;i_11 += 1)
        {
            arr_43 [3] = ((((~(min((arr_5 [16]), var_13)))) >> (((max(var_13, (arr_19 [i_11 - 2] [i_11 + 1]))) + 2029765212))));

            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                var_34 = (!var_16);
                arr_47 [i_1] [i_1] [i_11] [i_12] = (min(106, ((((((arr_5 [i_1]) & 55769))) ? ((var_4 ? (arr_27 [i_12]) : var_0)) : -var_12))));
                arr_48 [i_1] [i_1] [i_1] = 118;
                arr_49 [i_1] [i_1] [i_12] = (max((((!(((var_12 ? -8747 : (arr_12 [i_1] [i_1] [i_12]))))))), ((~((max((arr_28 [i_1] [i_11]), (arr_31 [1] [5]))))))));
            }
            for (int i_13 = 2; i_13 < 15;i_13 += 1)
            {
                arr_53 [i_13] [i_11 - 1] [i_13 + 1] = (max(((min((arr_32 [i_13] [i_13]), (!var_17)))), ((var_14 ? var_7 : (((arr_7 [7] [i_11 - 3] [i_11]) ? var_13 : (arr_52 [2])))))));
                var_35 = (arr_21 [i_13 + 1] [i_13 - 1] [i_13 + 2]);
            }
            for (int i_14 = 0; i_14 < 17;i_14 += 1)
            {
                var_36 = 47591;
                arr_58 [i_11] [13] = ((var_9 | (max((((arr_4 [i_11] [i_14]) ^ 9463733970276292769)), (~var_6)))));
            }
        }
        arr_59 [i_1] = var_10;
        arr_60 [i_1] = 180;
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 = (80 ? ((((!(~65523))))) : (((arr_2 [i_0]) << (((arr_2 [i_0]) - 4153952289)))));
        var_20 = (max(var_20, var_5));
        var_21 = (min(var_21, (~var_10)));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_22 = (((((((max(1512566048, 48))) * ((var_1 * (arr_5 [i_1])))))) ? 9223372036854775807 : ((((!(var_13 || 63488)))))));
        var_23 ^= (min((((65523 ? ((min(65523, 65503))) : 50094))), (arr_5 [i_1])));
        arr_6 [1] = 3916683424;
        arr_7 [i_1] = ((!((((!var_0) % -510088240)))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_24 = (((((((37 ? (arr_4 [i_2]) : -8510))) ? (((arr_2 [i_2]) ? (arr_8 [i_2]) : var_6)) : (~var_2))) % (2681955901 * 255)));

        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            var_25 = ((((!((min(143250934, 3275743025993464311))))) ? (~var_8) : ((11952647326717716053 ? 18 : 2907965916))));
            var_26 -= (((~var_3) >= (arr_5 [i_2])));
            arr_14 [i_2] = var_9;
        }
        /* vectorizable */
        for (int i_4 = 2; i_4 < 17;i_4 += 1)
        {
            var_27 -= 38583;

            for (int i_5 = 3; i_5 < 17;i_5 += 1)
            {
                var_28 = ((130 + ((26930 ? 24438 : (-9223372036854775807 - 1)))));

                for (int i_6 = 1; i_6 < 18;i_6 += 1)
                {
                    var_29 += arr_15 [i_4 + 1] [i_5 - 3];
                    var_30 = arr_13 [i_2] [12] [i_2];
                    var_31 = ((-4208011637 ? 1685574765402470611 : (!var_4)));
                }
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    var_32 = (((arr_8 [i_4 - 2]) ? (((1 ? 128 : 8510))) : ((14846514489628989346 & (arr_10 [16])))));
                    var_33 = (max(var_33, (((-23236994 ? (((arr_5 [i_4]) % var_4)) : ((var_6 ? (arr_11 [i_4]) : (arr_22 [i_2] [i_2] [18]))))))));
                }
                var_34 -= (~var_4);
            }
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                var_35 |= (~-var_17);
                arr_30 [i_2] = ((arr_13 [i_4 - 2] [i_4] [i_4]) * (arr_18 [i_2] [i_4 + 2] [i_4 + 1] [i_8]));
                var_36 &= (arr_27 [i_4 + 2] [i_4 - 2] [i_4 - 1] [i_4 - 2]);

                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    var_37 ^= ((2322778107 ? (arr_21 [i_9] [i_8] [i_4 - 2] [i_2]) : ((1 ? 38606 : -1041131746))));
                    var_38 = (((arr_28 [i_4] [i_4 + 2] [i_4 + 2] [i_4 - 2]) % (arr_13 [i_2] [16] [i_8])));
                    var_39 += var_17;
                    var_40 ^= (-3600229584080562269 / (((var_3 ? -85 : (arr_26 [i_9] [i_9])))));
                }
                var_41 = (arr_29 [i_4 + 1]);
            }
        }
    }
    var_42 = var_3;
    var_43 = var_5;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_10 = (((arr_0 [i_0 - 1]) <= (arr_4 [i_0 + 2] [i_0 - 1] [i_0 - 1])));
            var_11 = ((224 & ((18782 >> (-8216679865150856264 + 8216679865150856275)))));
        }

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_12 = ((-(arr_3 [i_2])));
            arr_8 [i_0] = (var_4 & var_6);
            arr_9 [i_0] [i_0] [i_2] = var_5;
            var_13 = (arr_6 [i_0 + 1] [i_0 + 2]);

            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                arr_13 [i_0] [2] [i_0] &= (arr_1 [i_0]);
                var_14 = var_6;
                var_15 = 117;
                var_16 *= (!8216679865150856263);

                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    arr_16 [i_0] [i_4] [i_4] = (+-8216679865150856264);
                    arr_17 [i_0] [i_4] [i_3] = (arr_4 [i_0] [i_0] [i_3]);
                    arr_18 [i_4] [i_2] [i_3] [i_4] = (39407 != -8512);
                    arr_19 [i_3] [i_3] [i_3] [i_4] |= (~(arr_7 [i_0 + 1]));
                }
            }
        }
        arr_20 [i_0] = ((!(arr_12 [i_0] [2] [i_0] [i_0 - 1])));
    }
    for (int i_5 = 3; i_5 < 11;i_5 += 1)
    {
        var_17 = (max(var_17, (arr_23 [8])));
        var_18 = (((((-(arr_15 [i_5] [i_5] [i_5] [10] [i_5 + 1])))) && (((((((arr_10 [15] [i_5] [i_5 - 2] [7]) ? (arr_22 [i_5] [i_5 - 2]) : var_7))) ? ((min((-127 - 1), (arr_1 [i_5])))) : 37218)))));
        arr_24 [i_5] [i_5] = (max((arr_2 [i_5 - 2]), ((((arr_3 [i_5]) ? ((~(arr_7 [i_5]))) : (64 & var_4))))));
    }
    for (int i_6 = 2; i_6 < 18;i_6 += 1) /* same iter space */
    {
        var_19 = (((min((((arr_26 [i_6] [13]) ? 56698 : 8216679865150856263)), ((min(40, (arr_3 [i_6])))))) | (((-(arr_1 [i_6 + 2]))))));

        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            arr_29 [i_6 + 1] = (min(((((arr_7 [i_6 - 2]) <= -8512))), (max((arr_2 [i_6 + 2]), (arr_2 [i_6 + 1])))));
            var_20 = var_5;
        }
    }
    for (int i_8 = 2; i_8 < 18;i_8 += 1) /* same iter space */
    {
        arr_33 [i_8] [i_8 + 1] = var_8;
        arr_34 [19] = (min((((!((max(-5551698156437711151, 15040)))))), ((((min(var_2, 8216679865150856241))) ? -65535 : ((max(var_0, (arr_12 [i_8] [i_8] [i_8] [i_8]))))))));
        var_21 *= -8512;
    }
    var_22 = ((min(var_9, -var_3)));
    #pragma endscop
}

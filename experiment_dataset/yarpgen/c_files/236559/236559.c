/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 = arr_0 [i_0];
        var_20 = (-127 - 1);
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_21 = (min(((min((!var_0), 114))), var_2));
        var_22 |= ((+((+((32767 ? (arr_2 [i_1 + 1]) : var_7))))));
        var_23 = ((((((((-8937414178643303654 & (arr_2 [i_1 + 1])))) ? -1 : ((((arr_2 [i_1 - 1]) >= 2113929216)))))) ? ((max((var_2 || var_4), (arr_4 [i_1 - 1])))) : var_11));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            var_24 = (52896 - var_7);

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                arr_14 [i_4] = -1;
                var_25 -= var_9;
                var_26 = (-127 - 1);
                arr_15 [i_4] [i_3] [i_4] = min(95, (arr_10 [i_3] [i_4] [i_3 - 1] [i_3 - 1]));

                /* vectorizable */
                for (int i_5 = 2; i_5 < 14;i_5 += 1)
                {
                    arr_18 [i_2] [i_3 - 1] [i_4] [i_4] [i_5 + 2] = (!var_16);
                    var_27 = -var_2;
                    arr_19 [i_5] [i_3 + 1] [i_3] [i_3 + 1] [i_3] &= ((((((arr_7 [i_2] [i_3 - 1]) + var_7))) ? -2527481267450161991 : -53526));
                    var_28 = (((arr_16 [1] [i_3 + 1] [i_3] [i_3] [i_3 - 1] [i_4]) ? (arr_16 [i_3] [i_3 - 1] [1] [i_3] [i_3] [i_4]) : (arr_16 [i_3 + 1] [i_3 - 1] [i_3] [i_3] [i_3] [i_4])));
                }
            }
        }
        arr_20 [8] [i_2] = ((~(((arr_11 [i_2] [6] [i_2]) & (arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))));
        arr_21 [i_2] = ((((((((var_8 | (arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [4])))) ? ((max((arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [14]), var_12))) : -123))) ? (~var_18) : var_3));
        var_29 = (max(var_29, var_15));
        arr_22 [i_2] = (min((arr_10 [i_2] [12] [i_2] [12]), (((arr_10 [i_2] [8] [i_2] [i_2]) - (arr_10 [i_2] [6] [6] [i_2])))));
    }
    var_30 = ((12640 ? -2235183484706310555 : 148));
    var_31 = var_17;
    var_32 = var_4;
    #pragma endscop
}

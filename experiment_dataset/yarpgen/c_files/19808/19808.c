/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_17 -= (arr_5 [i_0]);
                var_18 -= (max(5331830463926106473, -63817707));
                var_19 = ((947577680716184140 ? 0 : ((var_9 ? -947577680716184132 : 947577680716184140))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_20 = var_12;
        var_21 = (((((var_2 ? var_3 : var_12))) ? var_5 : (((((-947577680716184141 ? (arr_7 [i_2]) : (arr_8 [i_2])))) & (((arr_7 [i_2]) ? var_16 : (arr_8 [i_2])))))));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = (min((min(-947577680716184146, -947577680716184143)), ((-947577680716184146 ? 196732726 : -947577680716184141))));
        var_22 = (arr_8 [i_3]);
        arr_15 [i_3] = (arr_0 [i_3] [i_3]);
    }
    var_23 = var_9;
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            {

                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    arr_25 [i_4] [i_5] [i_6] [i_6] = ((((((max((arr_16 [i_4]), var_6))) * (15628 / -947577680716184146)))) ? (((((var_11 ? var_7 : var_1))) ? ((-20216 ? 947577680716184145 : 1599451398)) : (var_6 / var_12))) : ((((((var_5 ? var_4 : var_8))) ? var_13 : ((var_16 ? (arr_21 [i_4] [i_5] [i_6]) : var_10))))));
                    var_24 = ((!(-1439805210 | 199)));
                    var_25 = (arr_22 [i_4] [i_5]);
                    var_26 &= ((3898 ? var_8 : (((arr_9 [i_4 - 1]) ? var_12 : 4257737011048532766))));
                }
                for (int i_7 = 2; i_7 < 15;i_7 += 1)
                {
                    var_27 = (((((var_11 <= (arr_10 [i_4 - 1])))) > ((var_3 & (arr_7 [i_4 + 1])))));
                    var_28 = 1;
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_29 = (((var_16 <= (max(var_14, var_3)))));
                    var_30 = (!49907);
                }

                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    var_31 = (((-947577680716184146 + 9223372036854775807) << (((15289283 != -947577680716184146) - 1))));
                    var_32 = min((((!(((772347843 ? (arr_21 [i_4 + 1] [i_4 + 1] [i_9]) : 271455491)))))), ((1218395730811724065 ? (arr_26 [i_4]) : var_3)));
                    var_33 -= ((((((min(1218395730811724065, -3111))) && -947577680716184141)) ? (43023 ^ 772347843) : ((~(!36)))));
                }
            }
        }
    }
    #pragma endscop
}

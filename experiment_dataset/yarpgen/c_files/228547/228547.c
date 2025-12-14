/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;
    var_21 = var_18;
    var_22 = (0 && 210);

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [18] [18] = (min(var_10, ((var_18 ? 18446744073709551615 : 1))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
        {
            var_23 = (((((((arr_3 [i_1] [i_1]) ? (arr_5 [i_0] [i_0]) : var_6))) ? ((((arr_3 [i_0] [16]) != var_13))) : ((~(arr_1 [i_0]))))));
            arr_6 [i_0] [i_1] [i_0] = (max(((max(((min((arr_1 [i_1]), 255))), ((1 ? var_13 : 3))))), ((var_8 % (((arr_1 [i_0]) ? 18446744073709551590 : 1))))));
            arr_7 [i_0] = 1538407855;
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            var_24 = ((1 > ((max(27, 3)))));
            var_25 = (((max(85, (arr_1 [i_0])))));
            var_26 = (!1);
        }
        var_27 = -0;
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] = var_1;
        var_28 |= ((((max((max(var_14, (arr_10 [4] [i_3] [0]))), (((var_7 ? -9123193547484894969 : 1)))))) ? (!var_4) : ((-(arr_8 [i_3] [i_3])))));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
    {
        arr_19 [i_4] [7] = (max((arr_5 [i_4] [i_4]), (((arr_8 [i_4] [11]) ? (((var_17 ? var_9 : (arr_16 [i_4])))) : (((arr_3 [i_4] [17]) * (arr_11 [i_4] [6])))))));
        arr_20 [i_4] = 4194240;
    }
    var_29 |= ((var_13 ? (!79) : (((~119) | (-64 - -126)))));
    #pragma endscop
}

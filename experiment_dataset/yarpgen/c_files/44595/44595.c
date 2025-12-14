/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 = (max(var_17, ((max(3213547045483179095, (max(var_7, (arr_1 [i_0]))))))));
        var_18 = (min(var_18, 85));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_4 [i_1] = (var_8 && -4126);
        arr_5 [i_1] = ((4294967294 << ((((~(arr_3 [i_1]))) - 9651790637981856035))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_19 = var_5;
            arr_12 [i_2] [i_3] [i_3] |= ((4119 << (var_4 - 952)));
            arr_13 [4] [4] [i_2] = (((-32767 - 1) ? (arr_8 [i_2]) : 15233197028226372507));
            var_20 += 3213547045483179106;
            arr_14 [i_2] [i_3] [i_2] &= ((var_9 ? 4107 : var_2));
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_21 += -4113;
            var_22 = (max(var_22, -4138));
        }
        var_23 = var_7;
        var_24 = (((arr_1 [i_2]) ? (~16515072) : 1));
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            arr_22 [i_6] [i_6] = -16329;
            arr_23 [i_6] = 737531994;
        }
        var_25 = (max(var_9, var_14));
        var_26 = (max(var_26, var_6));
    }
    var_27 = var_2;
    #pragma endscop
}

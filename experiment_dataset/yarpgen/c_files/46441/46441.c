/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((max(var_5, var_1)))) < (max(((-1 ? 0 : var_10)), (1205430958 < 18054)))));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((max(-126144239, var_5)));
        var_13 &= (arr_1 [i_0]);
        arr_3 [i_0 - 1] = 13438325389538281323;
        var_14 = ((-((((!39279) >= ((1620495405 ? -126144239 : 11750783840116227079)))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_8 [i_1] = max((((((729691096814224368 < (arr_1 [i_1])))) >> ((((arr_4 [i_1] [13]) <= var_6))))), -126144239);
        var_15 ^= 26249;
        var_16 &= (max(39252, ((1729520852 ? var_10 : (arr_7 [i_1] [i_1])))));
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_17 = (((-31065 + 2147483647) << ((((((39312 ? -126144239 : (arr_1 [i_2 - 2]))) + 126144240)) - 1))));
                        var_18 = ((((((~10) ? -1821940362 : 2341))) ? (((max(39287, -2)))) : ((((max(var_0, 1))) / ((~(arr_7 [i_1] [i_2 - 2])))))));
                        arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] = (var_7 ? (!32764) : -2);
                        arr_21 [i_1] = 51867;

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            var_19 = (max(var_19, ((((!0) ? (var_4 == 44519) : ((var_5 ? var_4 : 19206)))))));
                            var_20 = ((!(arr_17 [i_1] [i_2] [i_2 - 2] [i_3] [i_3] [i_5])));
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                        {
                            arr_27 [i_1] [i_2 - 3] [i_2] [i_4] [i_6] [i_2] = (max(((19577 ? (((var_3 ? var_10 : -1808096193))) : (max(var_10, var_6)))), ((-(arr_25 [i_6] [i_2 + 2] [i_2 - 1] [7] [i_2])))));
                            var_21 = (arr_17 [13] [i_1] [i_3] [i_2] [i_1] [i_1]);
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 2; i_7 < 11;i_7 += 1)
    {
        var_22 = (max(var_22, (((!(127 ^ 5))))));
        arr_30 [i_7 - 1] = 39287;
    }
    #pragma endscop
}

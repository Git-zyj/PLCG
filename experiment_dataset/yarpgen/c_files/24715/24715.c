/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 4; i_4 < 14;i_4 += 1)
                        {
                            var_17 = (max(var_17, (arr_12 [i_3] [i_1] [i_3] [i_4] [i_4])));
                            arr_14 [i_4 + 2] = 65408;
                            var_18 = 202;
                            var_19 = (min(var_19, (((~(arr_10 [i_0 + 2]))))));
                        }
                        for (int i_5 = 2; i_5 < 12;i_5 += 1)
                        {
                            var_20 = (max(var_20, (arr_16 [i_0 + 1] [1] [i_1] [i_2] [7] [i_3] [i_5])));
                            var_21 = (max(((-1873115788 ? -1873115788 : (arr_1 [i_1] [i_5 + 1]))), (arr_1 [i_3] [i_1])));
                        }
                        arr_18 [i_0] [i_1] = (-127 - 1);
                        arr_19 [i_0] [i_0] [i_2] [i_3] = (((arr_6 [i_0 - 1] [i_0 + 2] [i_0 + 1]) ? (((arr_6 [i_0 - 1] [i_0 + 1] [i_0 + 1]) ? (arr_6 [i_0 - 1] [i_0 + 1] [i_0 - 1]) : (arr_6 [i_0 + 2] [i_0 - 1] [i_0 + 1]))) : (arr_6 [i_0 + 2] [i_0 - 1] [i_0 - 1])));
                        arr_20 [i_0 + 1] [i_0 + 2] [i_1] [i_2] [i_2] [i_3] = ((((32767 * 0) * ((36028797018962944 ? (arr_10 [i_1]) : (arr_6 [i_0 - 1] [i_1] [i_3]))))));
                    }
                    for (int i_6 = 4; i_6 < 15;i_6 += 1)
                    {
                        arr_24 [i_0] [i_2] = ((-1873115757 ? (((var_11 << ((((-1873115788 ? 1873115788 : var_11)) - 1873115771))))) : ((-(arr_3 [i_0 + 1])))));
                        arr_25 [i_1] [i_1] = ((!(253 & 0)));
                    }
                    arr_26 [i_0] = (((((~((var_11 ? var_10 : 223))))) && (~var_1)));
                    arr_27 [i_0] [i_1] = 4380866641920;
                    var_22 -= (arr_5 [i_0 + 1] [i_0 + 1]);
                    arr_28 [i_0] [i_0 + 1] [i_0] [i_0 + 1] = (((-((1 ? 1873115788 : 3)))));
                }
            }
        }
    }

    for (int i_7 = 1; i_7 < 21;i_7 += 1) /* same iter space */
    {
        var_23 = 0;
        var_24 = -6;
        var_25 -= ((~(((max(-9223372036854775800, 1873115802)) << ((((65521 ? var_11 : 253)) - 14847))))));
    }
    for (int i_8 = 1; i_8 < 21;i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    var_26 = ((((~(arr_35 [i_8 - 1] [i_8 + 1])))) ? -9223372036854775807 : (((~(arr_33 [i_9] [i_10])))));
                    arr_40 [i_10] = 65533;
                }
            }
        }
        var_27 = (min(var_27, ((max(60324702, -3)))));
    }
    for (int i_11 = 1; i_11 < 13;i_11 += 1)
    {
        arr_44 [i_11 + 1] = (arr_16 [i_11 + 1] [i_11 + 1] [i_11] [i_11 + 1] [5] [i_11] [i_11]);
        var_28 = (+-6);
        var_29 = ((((((-32767 - 1) ? 1 : (-1873115769 / 1873115769)))) && (((2077721734 ? (((3 ? 15360 : 1))) : var_10)))));
        var_30 = (~1873115785);
        var_31 = arr_16 [i_11] [3] [i_11] [i_11] [i_11 - 1] [i_11] [i_11 - 1];
    }
    var_32 = var_9;
    var_33 = var_10;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = arr_1 [i_0];
        arr_5 [i_0] = (max(((-72 ? var_9 : (arr_0 [i_0]))), (arr_3 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_14 = ((-82 * ((71 ? (arr_2 [i_1] [i_1]) : 3490031040))));
        arr_9 [i_1] = (arr_6 [i_1]);
    }

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_13 [i_2] [i_2] = ((~(arr_11 [i_2])));

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_15 *= (((((3490031040 | (~var_1)))) ? 69 : (+-18446744073709551591)));
            var_16 -= -var_3;
        }
        var_17 = (min(var_17, (((((var_7 > (arr_10 [i_2] [i_2]))) ? (min(((3393979419 ? var_11 : var_3)), (((79 == (arr_8 [8])))))) : (min(((var_12 ? (arr_2 [i_2] [i_2]) : 8887465506352111313)), (arr_6 [i_2]))))))));
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        arr_18 [i_4] [i_4] = (max(var_11, ((((((3393979419 ? var_1 : var_3))) && (((arr_17 [i_4] [i_4]) < 139)))))));
        var_18 = (min(var_18, -214));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_19 = ((~(arr_17 [i_5] [i_5])));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 8;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {
                    var_20 = (max(var_20, ((((arr_17 [i_5] [i_6]) ? ((((-(arr_16 [i_5] [i_6 + 3]))))) : ((max(145, -51))))))));
                    arr_26 [i_5] = ((((arr_16 [i_6 - 1] [i_6 + 2]) % var_7)));
                    arr_27 [i_5] [i_6 + 3] [i_6] = 9559278567357440302;

                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        var_21 = ((+((((arr_25 [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1]) < (arr_25 [i_8] [i_8 - 1] [i_8] [i_8 - 1]))))));
                        var_22 = var_2;
                        var_23 = ((12564 << (4096 - 4087)));
                        arr_31 [i_8] [i_5] [i_8] [i_7] [i_5] [i_5] = var_10;
                    }
                    for (int i_9 = 3; i_9 < 10;i_9 += 1)
                    {
                        var_24 = (arr_24 [i_9 - 1]);
                        arr_35 [i_5] [i_6 + 1] [i_7] [i_5] = ((((max(((~(arr_17 [i_9] [i_9 - 2]))), var_8))) == ((114 ? 1521523816016994162 : (75 >= 80)))));
                    }
                }
            }
        }
        var_25 = ((((((arr_2 [i_5] [i_5]) ? (arr_22 [i_5]) : (arr_11 [i_5])))) ? ((((max((arr_23 [i_5] [i_5] [i_5] [i_5]), var_2))) ? var_1 : ((3393979419 ? (arr_23 [i_5] [i_5] [i_5] [i_5]) : (arr_15 [i_5]))))) : ((~(~88313752)))));
        arr_36 [i_5] [i_5] = ((241 ? 3 : 127));
        arr_37 [i_5] = (var_1 * 43);
    }
    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {
        var_26 = (min(127, 20));
        var_27 = (min((arr_40 [i_10] [i_10]), ((((arr_40 [i_10] [i_10]) != (arr_40 [i_10] [i_10]))))));
    }
    #pragma endscop
}

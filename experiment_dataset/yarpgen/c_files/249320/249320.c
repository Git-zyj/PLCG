/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((((-(((var_11 + 2147483647) >> (var_10 - 33533)))))))));
    var_19 = ((var_16 || ((((min(var_4, var_15))) && -875766698939572143))));
    var_20 = (((((((((var_5 ? 0 : var_10))) > ((var_0 ? var_1 : var_12)))))) / (min(875766698939572149, ((var_6 ? var_13 : var_8))))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_0] = (((((~(var_17 ^ 29348)))) ? ((1 ? (~var_5) : (max(-32, -875766698939572156)))) : ((((arr_2 [i_0 + 1] [i_1 + 2]) & 81)))));
            var_21 = (((arr_3 [i_1 - 1]) ^ ((-21029 & (((arr_1 [i_0] [i_1]) ? (arr_2 [i_1] [i_0]) : var_3))))));
            arr_7 [i_1] = 1;
        }
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            var_22 = ((((max((arr_5 [i_2 + 2] [i_0 + 2]), var_0))) / ((89 ? (arr_5 [i_2 + 2] [i_0 + 2]) : var_15))));
            var_23 = (min(var_23, var_7));
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_24 = ((+(min((arr_10 [i_0 - 1] [i_0 - 1]), 3525473494))));
            arr_12 [i_0 + 1] = (arr_10 [i_0] [i_3]);
            var_25 |= ((2442 >> (15326913692738356285 - 15326913692738356274)));
            var_26 = ((~(arr_8 [i_3])));
            var_27 = (max(var_27, ((((!((max((arr_11 [i_0] [i_3]), var_2)))))))));
        }
        var_28 = (arr_10 [i_0 - 1] [i_0 - 1]);
        arr_13 [i_0] = (max(1, 43198));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 11;i_5 += 1)
            {
                {
                    var_29 = (((((var_3 % (arr_14 [4] [i_4] [i_5 + 1])))) && ((min(-13128, (((arr_11 [i_0] [i_0]) ? 21043 : 5026837191820256424)))))));
                    arr_20 [i_5 + 1] [i_4] [i_0 + 2] = max((-27 % 2442), (arr_2 [i_0] [i_5 - 2]));
                    var_30 = 1;
                    var_31 = (arr_15 [i_0]);
                }
            }
        }

        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            arr_24 [i_6 + 1] [i_0 + 1] [i_0] = arr_21 [i_6] [7];
            arr_25 [i_0 + 2] [i_0 + 2] [i_0] = (((max(var_15, (arr_4 [i_0 + 1])))));
            var_32 = (min(var_32, var_15));
        }
        for (int i_7 = 2; i_7 < 10;i_7 += 1)
        {
            var_33 = 0;
            var_34 = ((((((((4509127214042102891 ? 17533 : (arr_2 [i_0] [i_7 - 1])))) & (max(32, 18446744073709551613))))) ? ((((((((arr_21 [i_0] [i_0]) || 12399678335023527063)))) < (arr_15 [i_0])))) : (((arr_3 [i_0 + 1]) ? (arr_9 [i_0] [i_0 + 2]) : 130))));
        }
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        arr_36 [1] = ((arr_4 [i_10]) % ((~(arr_16 [i_0 - 1] [10] [i_9] [11]))));
                        var_35 = var_1;
                    }
                }
            }
            arr_37 [i_0] = ((!(arr_17 [i_0 + 1])));
        }
    }
    #pragma endscop
}

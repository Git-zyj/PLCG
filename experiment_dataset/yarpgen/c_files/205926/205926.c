/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!var_9);
    var_12 = var_4;

    for (int i_0 = 2; i_0 < 8;i_0 += 1) /* same iter space */
    {
        var_13 = 290372699208355303;
        var_14 = -71;
        arr_4 [i_0] = (min(((10915 ? 3 : 1860235994)), ((((arr_3 [i_0]) & 65535)))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 8;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1 + 1] [i_1] = (var_3 ? ((((arr_5 [3] [1]) && 16567227516718230799))) : ((1 ? 71 : 97)));
        arr_9 [i_1 - 2] [i_1] = 11050;
        arr_10 [9] [9] = (arr_0 [i_1 - 2]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_15 = 3697726331;
        var_16 = (max(var_16, 1));
        var_17 = (max(var_17, (-1111479468853193419 & 1104208317)));

        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_18 = (max(var_18, 16567227516718230803));
            var_19 = ((31 ? (arr_14 [i_3] [i_2]) : var_1));
            arr_15 [i_3] [i_3] [i_3] = (arr_12 [i_3]);
        }
        for (int i_4 = 3; i_4 < 11;i_4 += 1)
        {
            var_20 = (arr_13 [i_4 - 1] [i_4 - 2] [i_2]);
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 10;i_7 += 1)
                    {
                        {
                            var_21 = ((92 ? 63 : -61));
                            var_22 = (max(var_22, (((-555420773 + ((16567227516718230800 ? (arr_22 [i_7] [i_6] [i_4 - 1] [1] [i_4 - 1] [i_2]) : (arr_14 [10] [i_4]))))))));
                            var_23 = (((arr_18 [i_4 - 1] [i_7 - 2] [i_7 - 2]) - (arr_18 [i_4 - 3] [i_7 + 1] [i_7])));
                            arr_27 [i_7] [i_2] [i_6] [i_5] [i_5 + 2] [i_4] [i_2] = ((61 ? (arr_18 [i_7 - 1] [i_6] [2]) : -18));
                            var_24 = 1;
                        }
                    }
                }
            }
            var_25 = (max(var_25, (arr_25 [i_2] [i_4 - 2] [i_4 + 1] [i_4] [i_4 - 2] [i_4 - 2] [i_4])));
        }
    }
    var_26 = (max(101, 1));
    #pragma endscop
}

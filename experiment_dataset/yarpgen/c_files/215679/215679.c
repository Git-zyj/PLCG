/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_3 [1] |= -var_5;
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 14;i_3 += 1)
                {
                    {
                        var_15 = (max(var_15, (((((min(var_4, (arr_0 [i_0 - 1])))) ? ((~(arr_4 [13] [i_3]))) : 293890377)))));

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            arr_12 [i_0 + 2] [i_0 + 2] [i_1] [1] [i_0 + 2] [i_0 + 2] [i_4] |= (((var_11 != 188) ? ((((min(var_6, 174))) ? (arr_8 [i_1 - 3] [i_0 - 2]) : (((min(var_7, 174)))))) : 94));
                            var_16 = (2368711221497520505 ? 82 : 0);
                            arr_13 [i_1] [i_3 - 2] [i_1] [i_1] = ((+((+((16078032852212031111 ? (arr_9 [i_0] [3] [i_0]) : (arr_11 [i_3] [10] [i_3] [10] [i_3])))))));
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_17 *= (((((4294967295 & 68) >= 262143)) ? -11446 : 2047));
                        var_18 *= (max((((!((max(var_2, (arr_1 [11] [3]))))))), (min((arr_14 [i_0 + 2] [i_0 - 2]), (((var_3 > (arr_20 [i_7] [i_7] [i_7] [i_7]))))))));
                    }
                }
            }
        }
        arr_21 [i_0] = (max(var_8, (max(-1, (arr_6 [i_0 - 3])))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        arr_24 [i_8] = (((1511412610 == var_6) ? (arr_23 [i_8]) : var_12));
        var_19 = (max(var_19, (arr_22 [i_8] [i_8])));
        var_20 |= var_13;
    }
    var_21 = var_3;
    var_22 &= var_12;
    #pragma endscop
}

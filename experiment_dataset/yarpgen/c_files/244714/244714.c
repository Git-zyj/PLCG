/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, 65535));

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_14 = (max((arr_1 [i_0 - 1]), ((4294967295 + (~0)))));
        var_15 = (max(var_15, ((((((min(1829, (arr_0 [i_0]))))) ? (((-(arr_0 [i_0])))) : (max((min(-10798, var_10)), (min(63301, 0)))))))));
        var_16 = ((!(4294967295 - 6)));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 10;i_3 += 1)
                {
                    {
                        var_17 = (max(var_17, (((-20428 ? (4294967280 || var_9) : (((!(arr_8 [i_0] [8] [i_1] [i_2] [i_2] [i_3])))))))));
                        arr_11 [11] [i_0] [8] [i_0] [i_3] = ((-((-(arr_8 [i_3] [i_3] [i_3] [i_3] [i_0] [i_3])))));
                    }
                }
            }
        }
        var_18 = (((1 ? -21758 : 1809)));
    }
    var_19 = var_7;

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_20 *= ((((((min(655345941, var_4))) ? (((arr_12 [i_4] [i_4]) ? 41501 : var_8)) : (arr_12 [i_4] [i_4])))) ? ((~(arr_12 [i_4] [i_4]))) : (arr_13 [i_4]));
        var_21 += (((~(((!(arr_13 [i_4])))))));

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            var_22 = (((max(var_11, var_0))) ? (min((arr_13 [i_6 - 1]), 25178)) : (~var_2));
                            arr_24 [i_4] [i_5] [i_6] [i_4] [i_7] [i_8] = (~var_2);
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_23 = -var_11;
                            arr_27 [i_6] [i_4] [i_6] [i_4] [i_4] = var_3;
                            var_24 = (min(var_24, var_3));
                        }
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            arr_32 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [1] = ((((((~33008) & (((arr_16 [i_5]) ? (arr_22 [i_4] [i_5] [i_6] [i_6] [16]) : 32337))))) | ((~(((arr_25 [i_4] [i_5] [4] [i_6] [i_7] [i_7] [i_10]) ^ (arr_14 [i_4] [i_5] [i_4])))))));
                            arr_33 [i_4] [i_4] [i_6 + 1] [i_4] [i_4] [i_6] = 28111;
                        }
                        var_25 = ((!((((!var_1) ? (!-21759) : (arr_26 [i_6] [i_6] [i_6 - 1] [i_6] [1]))))));
                    }
                }
            }
            var_26 = ((~(arr_12 [i_4] [i_5])));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    {
                        arr_38 [i_4] [i_4] [i_4] [i_4] = ((((max((min(1, var_12)), var_6))) >> (arr_12 [i_12] [15])));
                        var_27 = (max(var_27, ((~(((24028 ? 48550 : 3045733583)))))));
                        var_28 = 2;
                        arr_39 [i_4] [i_4] [i_11] = min((arr_21 [i_12] [i_12]), 0);
                    }
                }
            }
        }
    }
    #pragma endscop
}

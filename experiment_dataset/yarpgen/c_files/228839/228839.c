/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_10 ? var_18 : (~var_0)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_21 = (arr_9 [17] [i_1] [i_2] [i_3]);
                        var_22 = ((((-1323557298 ? var_10 : var_13)) & 1323557298));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_23 = (min(var_23, var_0));
                        var_24 = var_6;
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        arr_15 [1] [i_1] = ((((min(((-1323557299 ? 12239 : 1)), 1323557300))) ? 1024 : 1));
                        var_25 = var_4;
                    }
                    var_26 = ((((((arr_8 [i_0] [9] [i_1] [i_2]) ? 4859748129925588106 : 1323557298))) ? (((-82 / var_10) ? -var_8 : 1323557315)) : ((((max(var_3, var_2))) ? var_12 : (var_18 < var_18)))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_22 [17] [7] [i_2] [i_1] [21] [i_0] = var_1;
                                arr_23 [7] [i_1] [i_2] [i_6] [i_7] = ((-((1 ? (arr_17 [i_1]) : var_6))));
                                var_27 = (min(var_27, (((-51 < ((-(arr_2 [i_0] [20]))))))));
                                var_28 = (max(var_28, (!-51)));
                                var_29 = ((-(~58493)));
                            }
                        }
                    }
                    var_30 = var_16;
                    var_31 = ((((arr_11 [i_1]) <= (((arr_19 [i_2] [i_2] [i_1] [i_1] [i_1] [i_0] [i_0]) ? var_7 : (arr_0 [i_1] [i_0]))))));
                }
            }
        }
    }
    var_32 = var_15;
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 22;i_8 += 1)
    {
        for (int i_9 = 3; i_9 < 23;i_9 += 1)
        {
            {
                arr_29 [i_8] [1] [i_8] = ((-(arr_27 [1] [i_8])));
                arr_30 [i_8] [i_8] = ((1738 < ((((((arr_24 [i_8] [i_8]) ? 1323557308 : 448))) ? 2329281455 : (var_19 / 8068612743948074271)))));
                var_33 += (max((min(((var_19 ? -2057366148 : (arr_27 [i_9] [10]))), 1876)), (((arr_28 [i_8] [i_9 + 1]) ? (arr_28 [i_8] [i_9 + 1]) : (arr_28 [14] [i_9 - 2])))));
                arr_31 [i_8] = ((((var_4 ? (((var_11 ? (arr_28 [i_8] [20]) : var_10))) : (((arr_25 [i_8 + 2]) ? (arr_25 [i_8 - 1]) : (-127 - 1))))) >= (((min((((7680 < (arr_28 [i_9] [23])))), var_5))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            {
                var_34 = (!var_0);
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        {
                            var_35 = (min(((var_2 ? (var_11 | -1876) : (((min(26801, 51)))))), (((var_19 & (arr_26 [i_12] [i_13]))))));
                            arr_44 [i_10] [16] [i_11] [i_12] [i_10] = (((arr_25 [13]) ? var_7 : ((~((-1875 ? -49 : (arr_2 [i_10] [4])))))));
                            var_36 = 536870912;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

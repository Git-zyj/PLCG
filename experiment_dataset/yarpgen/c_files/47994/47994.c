/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = (~1);
                    arr_9 [i_0] [i_1] = var_7;
                    var_17 = (((arr_0 [i_1 + 1] [i_2 - 1]) ? (arr_1 [i_1 - 2] [i_2 - 1]) : (~65535)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_18 = (arr_4 [i_2] [i_2] [i_2 - 1]);
                                var_19 ^= (((var_1 | var_14) * (((var_12 == 1863484455) ? (15332601289536806202 | var_12) : ((((!(arr_6 [i_2] [i_2])))))))));
                                arr_14 [i_4] [i_1] [i_2] [i_3] [i_4] = (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]);
                                var_20 += (min((((!((max(1, var_7)))))), ((((1347751048 ? 10 : var_8)) + (((!(arr_6 [i_0] [i_0]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        var_21 = (min(var_21, ((((arr_22 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6] [i_6 - 1]) ? var_4 : var_6)))));
                        arr_23 [i_5] [i_5] = (((((((var_5 < (arr_15 [i_5])))))) ? ((((-(arr_22 [i_8] [i_7] [i_6] [i_5] [i_5]))))) : (var_10 || -1)));
                    }
                    var_22 = (max(((((arr_22 [i_5] [i_6] [i_7] [i_6] [i_5]) >= (arr_22 [i_5] [i_5] [i_5] [i_7] [i_6])))), (max((arr_22 [i_5] [i_6] [i_7] [i_6 - 1] [i_5]), (arr_22 [i_5] [i_6 - 1] [i_6] [i_5] [i_7])))));
                    var_23 = 9223372036854775782;
                    arr_24 [i_5] = (min(((((min(var_11, (arr_17 [i_5])))) ? (min(4294967295, 2931024395)) : (((min((arr_21 [i_5] [i_6] [i_5] [i_5]), var_9)))))), (((+((min((arr_18 [i_5]), (arr_20 [i_5] [i_6] [i_7])))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 14;i_9 += 1)
    {
        for (int i_10 = 4; i_10 < 13;i_10 += 1)
        {
            {

                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        arr_37 [i_9] [i_10] [i_11] [i_12] [i_9] = (arr_21 [i_9] [i_10] [i_11] [i_12]);
                        var_24 = 21023;
                    }
                    arr_38 [i_9] = 1;
                    arr_39 [i_9] = ((var_13 ? 1 : var_2));
                }
                arr_40 [i_9] = (max((((arr_30 [i_9]) ? var_4 : (max(5566167868680042449, var_6)))), ((((((31334 ? var_14 : (arr_3 [i_9] [i_9])))) && (((var_5 ? 31334 : var_14))))))));
                var_25 = (min(var_25, var_10));
                arr_41 [i_9] [i_10] [i_9] = (((((35 <= (arr_20 [i_9] [i_10] [i_10 + 3])))) * (arr_7 [i_9 - 1] [i_10] [i_10 - 1])));
                var_26 = (!547700376);
            }
        }
    }
    #pragma endscop
}

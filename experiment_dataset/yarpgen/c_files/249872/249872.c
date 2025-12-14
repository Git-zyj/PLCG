/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_17 = (min((arr_6 [i_3 + 1] [i_2] [i_0] [i_0]), 4294967289));

                            for (int i_4 = 2; i_4 < 13;i_4 += 1)
                            {
                                var_18 = (arr_7 [i_1] [i_4] [i_2] [7]);
                                arr_13 [i_0] [i_3] [i_0] = ((-19065 <= ((((arr_4 [i_0] [i_3 - 2]) < (20 < 4294967289))))));
                                var_19 = (4294967289 < (~21));
                                var_20 = ((((12 < (-953901950 < 20))) ? (((arr_8 [i_4 - 1] [i_2 - 3] [i_2] [i_3] [i_3 + 1]) ^ (arr_8 [i_4 - 1] [i_2 - 3] [i_4 - 1] [i_3 + 1] [i_3 + 1]))) : (arr_2 [i_0] [i_0] [15])));
                            }

                            for (int i_5 = 0; i_5 < 17;i_5 += 1)
                            {
                                var_21 = (((((((max((arr_2 [i_0] [i_3 + 1] [i_5]), var_12))) % ((466289596 ? var_4 : 1))))) ? 4294967286 : (((((max(4294967295, 4294967295)) < -var_8))))));
                                var_22 += (max(117, ((((max((arr_3 [i_0] [i_5]), 0))) ? 1579899178 : ((var_6 ? (arr_0 [i_0]) : -32747))))));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 17;i_6 += 1)
                            {
                                arr_18 [i_0] [i_2] = (((arr_1 [i_2 - 4]) ? (arr_8 [i_2 - 3] [i_2] [i_2] [i_2 - 1] [i_2 - 3]) : (var_11 > var_11)));
                                var_23 = 15468;
                            }
                            for (int i_7 = 2; i_7 < 16;i_7 += 1)
                            {
                                var_24 = ((((((max(3, var_15))) ? -32746 : var_10)) + (((12 != -1470455704) ? ((max(4294967286, (arr_17 [i_0] [i_0] [i_7] [i_7] [i_7 + 1])))) : (min(-32747, 144115050636902400))))));
                                var_25 = (max(var_25, ((max((((1 & (arr_14 [i_7] [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 + 1])))), ((365517403 ? 1387096166 : (arr_14 [i_1] [i_1] [i_3 + 1] [i_7 + 1] [i_7 + 1]))))))));
                            }
                            arr_21 [i_0] [i_2] [i_1] [i_0] = ((-((~(arr_19 [i_0] [i_0] [i_2] [i_3 - 1])))));
                        }
                    }
                }
                var_26 -= (min(((((((var_16 ? var_16 : var_4))) * 2))), (arr_1 [i_0])));
                arr_22 [i_0] = (((((arr_2 [i_0] [i_1] [i_1]) ? 1 : (arr_6 [i_1] [i_1] [i_1] [i_0])))) - (((arr_19 [8] [i_0] [0] [i_1]) ? var_12 : (arr_1 [i_1]))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            {
                arr_28 [i_8] [i_9] [i_9] = (max(242, 4294967286));
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 10;i_11 += 1)
                    {
                        {

                            for (int i_12 = 0; i_12 < 12;i_12 += 1)
                            {
                                var_27 = (min(var_27, ((min((!-32746), (((arr_35 [i_8] [i_9] [i_10] [i_11] [i_12]) ? var_11 : 32750)))))));
                                var_28 *= ((-32737 ? ((((max(7837, -2456))) ? 1 : ((2053611747 ? (arr_6 [i_9] [i_10] [i_11] [i_11]) : 11283392108436727216)))) : (arr_29 [i_11 + 1] [i_8])));
                            }

                            for (int i_13 = 0; i_13 < 12;i_13 += 1)
                            {
                                var_29 += -106;
                                var_30 = (max(var_30, ((((9214364837600034816 < (arr_9 [i_8] [i_10 + 2] [i_11] [i_11 - 1] [i_11 + 1])))))));
                            }
                        }
                    }
                }
                var_31 = (min(var_31, 37519260));
            }
        }
    }
    var_32 = (max((((var_4 ^ (max(4294967289, var_4))))), ((var_14 ? (var_6 || var_9) : 9214364837600034816))));
    #pragma endscop
}

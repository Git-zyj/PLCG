/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_15 = (max(((max((max(13, 2)), 0))), var_10));
                        var_16 = (arr_6 [i_0] [i_1] [i_2] [i_1]);
                    }
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        var_17 += (min(1, (min((arr_12 [i_2] [i_4 - 1] [i_4 + 1] [i_2]), (arr_12 [i_0] [i_4 + 2] [i_4 - 1] [i_0])))));
                        arr_13 [i_4] = max((((arr_0 [i_0]) / ((min(-1156339140, (arr_8 [14] [i_0] [6] [9] [i_2] [i_4])))))), -9158);
                        var_18 = (min(-72022409665839104, ((max((arr_8 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 + 2]), (arr_8 [i_4 + 2] [i_4 + 1] [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_4 + 2]))))));
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_19 ^= var_6;
                        arr_16 [i_0] [i_1] [0] [16] = arr_5 [1];
                        arr_17 [i_0] [i_0] [i_1] [i_1] [i_2] [i_5] = -9158;
                    }
                    var_20 = (min(var_20, ((((arr_6 [i_0] [i_0] [i_1] [i_0]) ? (arr_12 [i_0] [i_1] [i_1] [i_2]) : (((arr_9 [i_0] [1] [i_1] [i_2] [i_2] [i_0]) << (221 && 17596017642955101387))))))));
                    var_21 = (((arr_6 [19] [i_2] [i_2] [i_2]) >= (!var_0)));

                    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                    {
                        var_22 = (max(var_22, (max(240, ((63 ? var_8 : ((((arr_18 [i_0] [i_0] [i_2]) >= var_1)))))))));
                        arr_21 [i_0] [i_1] [i_2] [i_6] = (arr_18 [0] [i_2] [i_2]);
                        arr_22 [i_0] [17] [i_0] [i_0] [17] [i_0] = (max(((((arr_20 [i_0] [i_0] [i_0] [i_0]) ? ((min(1, 4095))) : (var_11 && var_12)))), (((arr_2 [i_0]) ? (max(3201490593640763218, 0)) : (((-1032224156 ? 254 : var_8)))))));
                    }
                    for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                    {
                        arr_27 [i_2] [i_2] [i_7] [19] [i_2] [i_2] = ((max(1, -1156339117)) / -1156339152);
                        var_23 = (((arr_7 [i_1] [i_1] [i_7]) && var_5));
                    }
                    for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
                    {
                        arr_31 [i_0] [i_0] = (arr_23 [i_0] [i_8] [i_2] [i_8] [i_8] [i_1]);
                        var_24 = (max(((13013901444683505618 ? 1 : 1)), (max((((!(arr_2 [i_1])))), var_11))));
                        arr_32 [i_1] [i_2] [i_2] = min(((max((850726430754450228 <= var_8), (max(2147450880, 1))))), (((arr_1 [i_0]) ? (arr_20 [i_8] [i_2] [i_1] [i_0]) : 1)));
                    }
                    for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
                    {
                        var_25 = (((((var_0 ? (max(36028797018963960, var_4)) : 1))) ? (max(((17596017642955101387 ? var_10 : var_12)), (((1 ? var_5 : (arr_34 [i_0] [4] [i_2] [i_2] [i_9] [i_2])))))) : var_9));
                        arr_35 [i_1] [i_9] [i_0] = ((((17596017642955101387 ? -763933355 : (max(622756577967720337, 13013901444683505626))))) ? ((max((1156339121 / 128), var_7))) : (max(61, var_12)));
                        arr_36 [i_9] [i_9] [i_2] [i_1] [6] [i_9] = (max(17596017642955101388, 1882170634));
                    }
                    var_26 = min(((((!(arr_9 [i_0] [i_1] [0] [i_1] [i_1] [i_0]))) ? (((arr_3 [i_0] [i_1]) * 1)) : 31)), (((((18446744073709551605 ? (arr_11 [i_0]) : 30709)) << ((((13 ? 3940136299 : var_9)) - 3940136289))))));
                }
            }
        }
    }
    #pragma endscop
}

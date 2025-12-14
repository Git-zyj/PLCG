/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
                {
                    var_16 = arr_2 [i_2];
                    var_17 = (min(-var_8, ((min(var_5, (arr_1 [i_0]))))));
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
                {
                    var_18 += ((((((((arr_11 [i_1]) + 2147483647)) << (((((arr_3 [i_0]) ? var_3 : (arr_5 [i_0] [i_3]))) - 16907912563357028777))))) ? (arr_7 [i_0] [i_0] [i_3]) : (arr_4 [i_0])));
                    var_19 = (arr_5 [i_1] [i_1]);
                    var_20 = (arr_2 [i_0]);
                    var_21 = 65535;
                    var_22 = (min(((((((35996 || (arr_11 [i_0])))) >> var_12))), (max(0, 2693244788))));
                }
                arr_13 [i_0] |= (arr_6 [i_0]);

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        var_23 ^= ((-(arr_15 [i_5 + 4] [i_5 + 1] [i_5 + 4] [i_5 + 2])));
                        var_24 = (arr_16 [i_5]);
                        var_25 = (arr_15 [i_5 + 3] [i_5] [3] [i_5]);
                        arr_19 [i_1] = (((arr_18 [i_5 - 1] [i_1] [i_1] [i_5]) ? (arr_18 [i_5 - 1] [i_1] [i_1] [i_5 + 4]) : (arr_14 [i_5 - 1] [1] [i_4] [i_5])));
                        var_26 = (arr_15 [i_4] [i_5] [i_5 + 3] [i_5]);
                    }
                    for (int i_6 = 4; i_6 < 17;i_6 += 1)
                    {
                        var_27 -= 5;
                        arr_23 [i_0] [i_1] [i_4] [i_6] = (i_1 % 2 == 0) ? (((((-38 ? (((arr_5 [i_1] [i_1]) << (24449 - 24431))) : ((var_13 ? (arr_18 [i_6] [i_1] [i_1] [i_0]) : 35996)))) / ((var_15 | (arr_20 [i_4] [i_4])))))) : (((((-38 ? (((((arr_5 [i_1] [i_1]) + 2147483647)) << (((24449 - 24431) - 18)))) : ((var_13 ? (arr_18 [i_6] [i_1] [i_1] [i_0]) : 35996)))) / ((var_15 | (arr_20 [i_4] [i_4]))))));
                        arr_24 [i_1] [i_1] [i_1] [i_1] = (arr_20 [i_0] [1]);
                        arr_25 [i_1] = (((arr_11 [i_6 + 1]) % (arr_9 [i_4] [i_4] [i_1])));
                    }
                    var_28 = (max(var_28, 12));
                    var_29 = (arr_6 [i_4]);
                }
            }
        }
    }
    var_30 = var_12;
    var_31 |= var_2;
    #pragma endscop
}

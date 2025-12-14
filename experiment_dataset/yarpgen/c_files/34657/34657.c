/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((var_7 ? var_0 : ((max(var_6, -23644))))), 63592));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = ((!(((((-2147483629 ? 1 : 2147483629)) & -65535)))));

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            arr_8 [i_1] = ((((~((max((arr_5 [i_0] [i_1 - 1] [9]), -23236))))) & ((min((arr_1 [i_1 - 1] [i_1 - 1]), (arr_1 [i_1 - 1] [3]))))));
            var_11 = (((-var_3 ? 255 : (((max(1, 57)))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        {
                            arr_15 [i_1] = 1079235949;
                            arr_16 [i_0] [i_1] [i_0] [i_2] [i_3] [i_4] |= ((10319 && (((((arr_10 [i_0] [i_1 - 1] [i_2]) ? (arr_7 [i_0]) : 65519))))));
                            arr_17 [19] [12] [i_2] [i_3] [i_1] [i_1] [i_2] = -433544645;
                            var_12 = (~9);
                            arr_18 [i_1] = (((arr_13 [i_0] [i_1] [17] [i_3] [i_0] [i_1] [i_3 - 1]) ? (arr_0 [i_0]) : 41));
                        }
                    }
                }
            }
            var_13 = max(((var_8 - (arr_6 [i_0] [i_1 + 2]))), ((((24 ? 2147483629 : 119)))));
        }
        for (int i_5 = 4; i_5 < 23;i_5 += 1) /* same iter space */
        {
            arr_22 [i_0] [i_5] |= (arr_6 [i_0] [i_5 - 2]);
            arr_23 [i_5] [i_0] = ((((38897 << (65530 - 65524))) / (arr_4 [i_0] [i_5])));
            var_14 = var_9;
        }
        /* vectorizable */
        for (int i_6 = 4; i_6 < 23;i_6 += 1) /* same iter space */
        {
            arr_26 [i_6 - 4] = (arr_25 [i_0] [i_0] [1]);
            var_15 = ((var_8 || (arr_5 [i_0] [i_0] [14])));
            var_16 = ((65526 >= (arr_12 [i_0] [i_6 - 2] [0] [i_6])));
        }
        arr_27 [i_0] = (((min(-60438081, 1073741312)) << (-2305842871774740480 - 16140901201934811117)));
        arr_28 [i_0] = (((((~(arr_0 [i_0])))) ? (arr_0 [i_0]) : ((~(arr_0 [i_0])))));
    }
    #pragma endscop
}

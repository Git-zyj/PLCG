/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((((min(241, 5056119172207331015)) + (((arr_0 [i_1] [i_0]) * 7520341081701518590))))) ? -3093 : (((((((arr_0 [i_0] [i_1]) ^ 83887616)) >= ((max(32, (arr_2 [i_0])))))))));
                var_13 = (min(((((-(arr_1 [8]))) & (((var_8 ? var_4 : 26102))))), ((((~-530104054) <= -1839678204408624623)))));
                var_14 = (((!var_2) ? (max((arr_0 [i_0] [i_1]), 863142934)) : ((((arr_0 [i_1] [i_0]) ? (arr_0 [i_0] [i_1]) : (arr_0 [i_0] [i_1]))))));
                arr_5 [i_0] [i_1] = ((((arr_2 [i_1]) | var_5)));
            }
        }
    }
    var_15 = (max(var_2, 68803492));
    var_16 = var_10;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                var_17 = (max(((((3431824362 ? 9958 : var_10)) << (-23404 + 23413))), ((~(max((arr_7 [i_2 + 2] [i_2]), 47545))))));
                arr_13 [i_2] [i_3] [i_3] = ((((min((var_5 || var_9), var_6))) ? (var_5 & var_5) : var_8));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_23 [16] [i_2] [i_3] [i_4] [i_5] [i_3] = ((((arr_8 [i_6 + 3]) ? (((arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) & var_2)) : var_7)));
                                arr_24 [i_6] [i_3] [i_4] [i_4] [i_3] [i_3] [i_2] = ((((((0 + -107) ? (!3187649012) : 4094))) ? var_9 : (var_5 ^ var_5)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 22;i_8 += 1)
                    {
                        {

                            for (int i_9 = 0; i_9 < 1;i_9 += 1)
                            {
                                var_18 = 0;
                                arr_31 [i_3] [i_7] [14] = (arr_22 [i_2] [3] [i_2] [i_2 + 2] [i_9]);
                                var_19 = (arr_7 [i_8] [i_9]);
                                var_20 = (((var_6 ? (arr_20 [i_7 + 2] [i_7 - 2] [i_7] [18] [7]) : var_6)) >= (((arr_10 [i_3]) | (2147483647 - 229))));
                            }

                            for (int i_10 = 2; i_10 < 21;i_10 += 1) /* same iter space */
                            {
                                var_21 = var_9;
                                arr_35 [15] [i_3] [16] [i_3] [i_2] = var_7;
                                var_22 = ((((arr_26 [i_3] [i_2 + 1] [i_8 + 1] [i_10 - 2]) ? 3085 : (arr_10 [i_3]))));
                                var_23 = ((!((((((arr_7 [i_8] [i_3]) + 2147483647)) >> (((arr_14 [i_7 - 1]) - 3564448415)))))));
                                arr_36 [15] [i_3] [i_3] [i_3] [i_3] [i_3] [16] = ((((min(var_1, (arr_12 [i_3])))) ? (max((arr_12 [i_3]), var_2)) : (var_4 * var_11)));
                            }
                            for (int i_11 = 2; i_11 < 21;i_11 += 1) /* same iter space */
                            {
                                var_24 = ((var_7 ? (!var_4) : (max(var_8, ((var_4 % (arr_19 [22] [i_3] [22] [21] [i_11] [i_11])))))));
                                var_25 = ((6314159823282975817 != (arr_30 [15] [i_3] [i_7 - 1] [i_3] [i_2])));
                                var_26 = ((((((((var_5 || (arr_10 [i_3])))) >> (((arr_27 [i_3] [i_2] [i_7] [i_8] [i_7 - 1] [i_2]) / var_3))))) ? (arr_6 [i_11]) : (max(-659708692, 118))));
                                var_27 = var_6;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

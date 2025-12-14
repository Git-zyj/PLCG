/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_19 = (min((max(((min(var_17, 31))), (((arr_3 [i_1] [i_1] [i_1]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_1 + 3]))))), ((max(23545, (((arr_1 [i_0]) ^ (arr_2 [i_0] [i_0]))))))));
                arr_5 [i_1] = ((var_3 ? (max((max((-2147483647 - 1), 18813)), 32767)) : ((~(arr_3 [i_1] [10] [i_1 + 2])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_20 = (min(-969605944, -2051901769));
                            var_21 = (((arr_7 [i_0]) ? (((!((((-2147483647 - 1) ? 46722 : 0)))))) : ((((!(arr_0 [i_1 + 3] [i_0]))) ? ((0 ? var_6 : (arr_7 [i_2]))) : ((max(46722, var_1)))))));

                            for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                            {
                                var_22 = 1;
                                var_23 = (max(var_23, ((((((((!(arr_11 [i_0] [2]))) ? ((max((arr_3 [i_0] [i_3] [i_4]), 1))) : (arr_13 [i_0])))) ? (((((var_10 ? 0 : 31362))))) : (arr_0 [i_0] [i_0]))))));
                                arr_14 [i_0] [i_0] [i_1 + 4] [6] [i_2] [i_3] [i_1] = -48296631;
                                var_24 += max((arr_9 [i_3] [i_3] [i_1 + 3] [i_4]), -969605944);
                                arr_15 [i_1] [i_1] [i_1] [i_2] [i_3] [1] = (arr_1 [i_1]);
                            }
                            for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                            {
                                arr_18 [i_1] [i_1] = ((arr_11 [i_1] [i_1]) - (46722 - 1));
                                var_25 = 1524618657;
                                var_26 = (((arr_13 [i_1 - 1]) ? (((arr_13 [i_1 + 3]) ? 24 : var_14)) : (((!(arr_13 [i_1 + 4]))))));
                                var_27 = (((-968587956 ? (arr_12 [i_1] [i_1] [i_1] [i_1 - 1] [i_1] [i_1]) : 2147483647)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = (max(var_16, (min((min(var_3, 167)), 63))));
    var_29 += var_7;

    /* vectorizable */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        arr_22 [i_6] = 9845;
        arr_23 [11] = (arr_20 [i_6]);
        var_30 = (~var_16);
    }
    #pragma endscop
}

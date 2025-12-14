/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = ((((((((var_3 ? (arr_3 [i_0] [15] [0]) : var_8)) == ((((arr_4 [i_0] [i_1]) ? var_13 : var_9))))))) % ((((1583862723 > (arr_4 [21] [i_1]))) ? (min(1583862723, 1583862723)) : 88))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_20 = ((!(((var_3 ? (arr_12 [i_1 - 1] [i_2 - 4] [i_1 - 1]) : 47103)))));
                            var_21 = (var_7 | ((-var_8 ? 21 : (min((arr_0 [21]), (arr_10 [i_0] [i_1 - 1] [i_2] [i_2]))))));
                            arr_14 [i_0] [8] [i_0] [i_1 + 2] [i_0] = ((((max((~var_14), 2711104564))) ? (((~(arr_2 [i_0])))) : (((((var_11 ? (arr_10 [i_3] [21] [i_1 + 1] [10]) : 18432))) ? (var_14 & -1061628877) : (max(56213, var_13))))));
                            var_22 = (((max((arr_9 [i_2 + 1] [i_2 - 4] [i_0] [i_2]), (arr_9 [i_2 - 4] [i_2 + 2] [i_0] [i_2 - 4]))) * ((((((arr_8 [i_0] [i_1] [i_1]) ? var_2 : var_13)) != var_2)))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_23 = ((-102 ? 661216758 : (arr_13 [i_0] [i_1] [i_4] [i_1])));
                                var_24 |= var_12;
                                var_25 *= (min(var_15, 1794787806));
                                var_26 = (min(var_26, ((26 ? 26 : 18433))));
                                var_27 = ((4244758674 ? -27 : 65));
                            }
                        }
                    }
                }
                var_28 = (min(var_28, (((1061628861 ? (arr_22 [17] [i_1] [i_1 + 2] [i_0]) : (1583862719 > 0))))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 22;i_8 += 1)
                    {
                        {
                            var_29 = ((((((!(!var_16))))) == ((var_2 ? var_13 : (arr_11 [i_0] [i_0] [i_8 - 2] [22])))));
                            var_30 = ((!((min(var_15, ((var_8 ? var_9 : var_3)))))));
                            arr_30 [i_0] [11] [i_8] = (((max(11438750649139949535, -89))) ? 189 : ((-(arr_9 [i_1 + 2] [i_1 + 2] [i_0] [i_1]))));
                            var_31 = (((((((arr_10 [i_1] [i_1 - 1] [i_1 + 2] [i_1 + 2]) != (arr_22 [i_0] [i_1 - 1] [i_8 + 1] [i_0]))))) != (((var_3 == var_13) ? var_16 : (arr_23 [i_8 + 1] [i_8] [i_8] [i_0] [i_8] [i_8])))));
                            var_32 = (min((((var_13 != (arr_22 [i_0] [i_1 + 2] [10] [i_1])))), (max((arr_0 [i_1 + 1]), var_6))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

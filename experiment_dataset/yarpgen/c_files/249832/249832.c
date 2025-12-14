/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((var_2 ? var_7 : var_1))) ? (!var_5) : var_4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_1 + 1] [i_0] = (!var_4);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_12 += ((min(var_7, (arr_7 [i_0] [8] [i_2] [i_0]))));
                            var_13 = (min((!var_0), ((((var_6 ? (arr_13 [i_0] [i_1]) : -8)) < (min(-258645906, var_1))))));
                            arr_14 [i_0] [i_1] [i_1] [i_0] [i_2 - 1] [i_3] = var_3;
                            arr_15 [i_3 + 1] [i_2] [i_0] [i_0] [i_0] = (-42 || 42);
                            arr_16 [i_0] [8] [i_2 + 1] [i_0] [i_0] = 0;
                        }
                    }
                }

                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    var_14 = ((((((arr_13 [i_0] [i_0]) ? (arr_13 [i_0] [i_1 + 1]) : (arr_13 [i_1 - 1] [6])))) ? ((min((arr_13 [i_0] [i_0]), (arr_13 [i_0] [i_0])))) : ((-(arr_13 [i_1 + 1] [i_4 + 3])))));
                    var_15 = (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4 - 1]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_16 = (min(var_16, (((var_8 ? (((((max(var_2, var_9))) ? var_0 : (((var_5 < (arr_19 [i_4 - 1]))))))) : (((~(arr_18 [1])))))))));
                                var_17 = (((max(42, 18446744073709551615))) ? (35160 / 9) : var_5);
                                var_18 = (min(var_18, (((!((((arr_17 [i_4 - 1]) ? var_7 : (arr_11 [2] [i_6] [4] [i_1 + 1] [i_6] [i_1])))))))));
                                var_19 = (((((var_1 != var_3) ? var_2 : ((32766 ? var_7 : (arr_19 [3]))))) <= ((max((((arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_8 : var_7)), (~7))))));
                                var_20 = (max(var_20, (max(((min((arr_23 [i_0] [i_1] [i_4 - 1] [i_1] [i_6]), (arr_8 [i_5])))), (min((arr_4 [i_6]), (arr_23 [i_0] [i_0] [i_4] [13] [i_6])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = ((((((var_9 < var_8) / (min(var_5, var_7))))) ? ((-42 ? 249 : -19036)) : (153 || 238)));
    #pragma endscop
}

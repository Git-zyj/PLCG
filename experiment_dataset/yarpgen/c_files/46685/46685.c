/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_19 -= ((((((!1) ? ((40677 ? 24861 : var_9)) : (-32767 - 1)))) && (var_15 - var_5)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_20 = max((var_0 >= var_10), ((!((max((arr_1 [i_1]), (arr_5 [i_0] [i_4 - 1] [i_4 + 2] [i_4])))))));
                                var_21 = 32767;
                            }
                        }
                    }
                }
                arr_12 [i_0] = (((min(-46, 1062816803))));
                arr_13 [1] [i_1 - 1] [1] = var_7;
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 8;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_22 = ((-((((var_6 > (-32767 - 1))) ? var_6 : (arr_7 [i_1] [i_6 - 1] [i_7])))));
                                var_23 -= ((-(((!(arr_19 [i_0] [i_0] [7] [i_0] [i_0] [9]))))));
                                var_24 -= (min(((((((70 ? var_16 : var_16))) || (arr_3 [i_1] [i_1] [i_1])))), (max(1416343866, -1))));
                                var_25 = ((((-(arr_17 [i_0] [i_0] [i_7])))) && (~var_6));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (max((((min((-32767 - 1), var_13)) != 1)), (min(var_9, (14623 >= 1)))));
    var_27 = ((((((-70 ? var_7 : var_7))) ? 80 : ((var_5 ? var_3 : var_16)))));
    #pragma endscop
}

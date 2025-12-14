/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (-9223372036854775807 - 1);
    var_19 = (((((-694080181 ? 694080181 : (max(111978261, 1))))) ? (((((var_6 ? var_0 : 0))) ? ((var_14 ? 10 : var_6)) : var_7)) : ((var_4 ? var_3 : 127))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = var_16;
                arr_4 [i_1] = -1393037309;
                arr_5 [i_0] [i_0] &= (((694080181 % 44205) ? (((arr_3 [i_0] [i_1 - 3] [i_1 - 2]) ? (arr_3 [i_0] [i_1 - 3] [i_1 - 2]) : (arr_2 [i_1 + 1] [i_1 - 3]))) : ((((arr_3 [i_0] [i_1 - 3] [i_1 - 2]) ? 4182989027 : var_7)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    var_21 = (((arr_9 [i_2]) ? var_14 : -4182989035));

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_22 = (max(((((arr_8 [i_4]) ? -694080182 : (arr_12 [20] [20] [i_3] [i_2])))), (max((max(889977973, (arr_6 [i_5]))), (max(111978261, 15))))));
                        var_23 &= (max((min(78, (arr_7 [i_2 - 1]))), 520192));
                    }
                }
            }
        }
    }
    #pragma endscop
}

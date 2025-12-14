/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 += ((((max((4294967267 ^ 4294967267), (~var_1)))) ? (((!4294967258) ? (((2048 ? var_0 : 0))) : ((29 ? (arr_2 [i_0] [1]) : var_13)))) : ((((!(((-(arr_3 [i_1]))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_2] [i_0] [i_4 + 2] = (max((max(((min(-127590934, -738374951))), (38 & 1395274717))), ((((((-127 - 1) ? (-32767 - 1) : var_9))) ^ var_6))));
                                arr_13 [i_0] [8] = (((var_11 ? (((1391511984 ? 57180 : (arr_2 [i_0] [i_0])))) : (min(4503565267632128, var_2)))) | (((~(-127 - 1)))));
                                arr_14 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3] [i_4] = (i_0 % 2 == zero) ? ((((((9 / (((1 <= (arr_4 [i_0] [i_1] [i_2]))))))) ? ((63487 ? (-127 - 1) : -111)) : 3589147578))) : ((((((9 * (((1 <= (arr_4 [i_0] [i_1] [i_2]))))))) ? ((63487 ? (-127 - 1) : -111)) : 3589147578)));
                                arr_15 [i_0] [7] [0] [i_0] = ((-(max(((~(arr_7 [i_1] [i_3] [i_1] [i_0]))), ((12376064300121482733 ? var_9 : var_0))))));
                                var_19 = 1;
                            }
                        }
                    }
                    arr_16 [18] |= ((-36 ? (max(-615782547, 105)) : var_9));
                }
            }
        }
    }
    var_20 = var_12;
    #pragma endscop
}

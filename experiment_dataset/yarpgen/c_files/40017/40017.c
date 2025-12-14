/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_11 = ((((!(arr_1 [i_0 - 1])))));
        arr_3 [i_0] = 81;
    }

    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    var_12 = ((~((4234236566 ? ((-(arr_8 [i_3]))) : -var_8))));
                    var_13 = (~4902078925966798454);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_14 = 7349;
                                var_15 = ((((!(arr_5 [i_1 - 1] [i_5 + 2])))));
                            }
                        }
                    }
                }
            }
        }
        arr_16 [10] [10] = (max(((-(arr_4 [i_1 - 1] [i_1 - 1]))), ((-(!1)))));
        var_16 = (max(var_16, (((((((~251) ? (((arr_5 [i_1] [17]) << (((arr_11 [i_1] [15] [5]) - 684403205)))) : (~20)))) ? ((((~1785765102) ? (!511333650) : var_6))) : (arr_14 [9] [i_1 - 1] [9]))))));
        var_17 = (arr_6 [i_1] [6] [i_1 - 1]);
    }
    var_18 = (((60733 <= 7373) ? var_8 : var_8));
    var_19 = var_7;
    var_20 = ((((((13109323505443355505 ? 1 : var_5)))) ? 18446744073709551613 : ((min(var_10, (~511333672))))));
    #pragma endscop
}

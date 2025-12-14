/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_2] [i_2] = (((min(var_9, (60 + -60))) <= (3072 & 255)));
                    var_15 = (max(var_15, var_12));
                    arr_11 [i_0] [3] [i_2] = ((-61 - (-3081 == 1993646751)));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 11;i_5 += 1)
            {
                {
                    var_16 = (~111);
                    var_17 = (max((min((((var_9 <= (arr_6 [i_3])))), (3219422257 & var_14))), ((((arr_15 [i_5] [i_5 + 1] [i_5 - 1]) >> (var_0 + 1453475415))))));
                    var_18 = (min(var_18, ((((((~(!48)))) - (min((((arr_8 [i_3] [i_4] [i_5] [i_3]) ? var_8 : var_14)), (arr_7 [i_4] [i_5 + 1] [i_5]))))))));
                    var_19 = (((min(-1923865626, var_10))) ? ((((arr_8 [i_5 - 1] [i_5 - 1] [6] [i_5]) >= var_9))) : (66 && var_3));
                }
            }
        }
    }
    #pragma endscop
}

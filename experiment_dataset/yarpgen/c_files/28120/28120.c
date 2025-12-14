/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((((((((arr_3 [i_1] [i_0]) + var_11)) ^ (((!(arr_3 [i_1] [i_1]))))))) ? ((max(61993, (arr_4 [i_0] [i_0] [i_0])))) : (!var_6)));
                arr_6 [i_0] [i_0] [11] = var_14;
            }
        }
    }
    var_21 = (((var_14 / var_13) ? 61441 : (((5677 * 1600) + (0 * var_6)))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    arr_16 [i_3] = (59869 <= 47553);
                    var_22 = (max(((((arr_13 [i_2] [i_2]) >= var_17))), (arr_12 [i_4] [i_2] [i_2])));
                }
            }
        }
    }
    #pragma endscop
}

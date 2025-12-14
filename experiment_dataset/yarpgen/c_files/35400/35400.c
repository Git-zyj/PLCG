/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2] [i_2] = 124;
                    var_14 = ((arr_0 [i_1 - 1]) ? ((((~209) / (arr_5 [i_1] [i_1 - 1] [i_1 - 1])))) : (max(1, 1715664219)));
                    var_15 = (max(((-(((((arr_2 [i_0]) + 2147483647)) >> (arr_9 [i_0]))))), (arr_5 [i_0] [i_0] [15])));
                    arr_11 [13] = (max((!var_1), (arr_2 [i_0])));
                    arr_12 [i_0] [7] [7] = ((((23 ? 124 : 132))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            {
                arr_19 [i_3] [i_4] = (min(67, ((((arr_8 [i_3] [1] [i_4]) < (((1 | (arr_3 [i_4] [i_3])))))))));
                var_16 = max(((+((var_0 ? (arr_7 [i_3] [i_4] [13] [i_3]) : var_7)))), (arr_16 [i_4]));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;
    var_20 = var_16;
    var_21 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (arr_4 [i_0 + 1]);
                arr_6 [i_1] [1] [i_0] = (min((((!(arr_1 [i_0 + 1])))), (((((var_5 <= (arr_2 [i_0 - 2] [i_0 + 1])))) & 243))));
                arr_7 [i_1] [i_0] = (min((((243 ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 1])))), (arr_1 [i_1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 18;i_3 += 1)
        {
            {
                arr_13 [i_2] = ((13 ? -32741 : 8191));
                var_22 |= (((arr_10 [10] [i_3 - 2] [10]) ? ((var_2 % (arr_10 [4] [i_3 + 1] [4]))) : (min(var_2, (arr_10 [6] [i_3 - 1] [6])))));
                arr_14 [10] [10] &= (arr_9 [14]);
            }
        }
    }
    #pragma endscop
}

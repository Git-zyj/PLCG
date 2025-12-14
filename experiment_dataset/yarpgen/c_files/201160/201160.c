/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_18 = arr_5 [7];
                var_19 = ((-5232798444806850459 - (var_16 <= var_3)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 22;i_3 += 1)
        {
            {
                var_20 |= (arr_12 [i_2] [i_3 + 2] [i_2]);
                var_21 += (128 - 15);
                arr_13 [i_3] = ((var_3 ? ((((arr_10 [i_3 - 3] [i_3 - 2] [i_3 - 3]) ? (arr_10 [i_3 - 1] [i_3 - 1] [i_3 - 1]) : (arr_12 [i_3] [i_3 - 2] [i_3 - 4])))) : -1521651614620674994));
                arr_14 [18] [1] [i_3] = (arr_10 [8] [i_3 - 3] [i_3]);
            }
        }
    }
    #pragma endscop
}

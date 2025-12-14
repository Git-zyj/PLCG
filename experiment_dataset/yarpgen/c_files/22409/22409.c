/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_6 [i_0] [10] [10] [8] = -60;
                    arr_7 [i_0] [4] [i_0] = ((9 ? (arr_4 [5] [i_1] [i_0 + 3]) : 4874840612178717063));
                    arr_8 [6] [i_1] [i_2] &= (max(13571903461530834553, 9223372036854775807));
                }
                arr_9 [i_0] [i_0] = arr_0 [i_0] [i_1];

                /* vectorizable */
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    var_19 = (13571903461530834542 - 0);
                    var_20 = (arr_11 [i_0] [i_3]);
                    var_21 = (arr_1 [i_1]);
                }
            }
        }
    }
    var_22 |= (max(((var_14 ? 4874840612178717064 : var_6)), var_3));
    var_23 = var_7;
    #pragma endscop
}

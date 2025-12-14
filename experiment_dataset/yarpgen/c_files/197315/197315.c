/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    var_15 = (max(-var_3, var_11));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_1] [1] = ((~(((!1) & (1132904461 == 1132904446)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_16 = (max(((min((arr_10 [i_2] [i_1 + 1]), 9223372036854775805))), (((arr_10 [i_2] [i_2]) ? (arr_4 [i_0 - 1] [i_0 - 1] [i_2]) : (min(-26135, 12751742703438956483))))));
                            var_17 = (((arr_7 [i_0 - 1] [i_0 - 1] [i_1 + 2] [i_1 - 1]) ? (((arr_7 [i_0 - 1] [i_0 - 1] [i_1 - 3] [i_1 - 1]) ? (arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (arr_1 [i_0 - 1]))) : ((-(arr_4 [i_0] [i_0 - 1] [i_3])))));
                            var_18 = (max(9223372036854775805, 1));
                        }
                    }
                }
            }
        }
    }
    var_19 = var_8;
    #pragma endscop
}

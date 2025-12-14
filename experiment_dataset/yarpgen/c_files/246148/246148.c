/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -232165136;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_12 ^= (max(-24826, ((-24826 ? 24832 : 2945))));
                            arr_10 [i_0] [i_1] [i_1] [i_2] = 1152921504606842880;
                            arr_11 [i_3] [i_2] [i_2] [i_0] = (min((max(((((arr_4 [i_0] [i_1] [i_3]) - (arr_9 [i_1] [i_1 - 1] [7] [i_1] [i_1])))), ((5327048180649104958 / (arr_7 [i_2]))))), var_1));
                        }
                    }
                }
                var_13 = (max((max((3143683763 - var_10), (arr_8 [i_1 - 1] [i_0] [i_0 + 1] [i_1 - 1] [i_0]))), 2945));
                arr_12 [i_1] = (arr_0 [8]);
                arr_13 [i_0] = (((((arr_8 [i_0] [i_0] [i_0] [i_1] [i_1]) ? (arr_9 [i_0] [i_0] [i_0] [i_0] [11]) : (((arr_9 [i_0] [i_0] [i_0] [10] [i_1]) * var_8)))) == (((((max(var_1, (arr_1 [i_0])))) << (((min(31, (arr_6 [i_0] [12] [i_1]))) - 31)))))));
                var_14 = (((((((arr_9 [i_0] [i_0] [i_0] [i_0 + 2] [i_0]) ^ (arr_2 [i_1 - 1])))) ? (631851154343937967 && 1549376155) : var_3)) / (min((((arr_2 [i_0]) ? (arr_9 [i_0] [0] [7] [i_1 - 1] [i_1]) : (arr_9 [3] [3] [i_0] [i_0] [i_0 + 2]))), (arr_3 [6] [12] [i_0]))));
            }
        }
    }
    #pragma endscop
}

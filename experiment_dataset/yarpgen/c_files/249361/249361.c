/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [i_0] = (arr_4 [i_2] [i_3 + 4]);
                            var_19 = var_13;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        {
                            arr_15 [i_0] = var_16;
                            arr_16 [i_0] [1] [i_4] [i_1] [i_4] = (arr_7 [i_0] [i_1] [8] [i_5 - 1]);
                            arr_17 [10] [3] [8] [2] [i_5] |= (min(643718823237087728, ((+((var_2 ? (arr_11 [12] [i_4 + 3] [i_5]) : var_15))))));
                        }
                    }
                }
            }
        }
    }
    var_20 = (min(-643718823237087729, ((((var_7 < var_6) >> ((4279886942 ? var_12 : var_18)))))));
    #pragma endscop
}

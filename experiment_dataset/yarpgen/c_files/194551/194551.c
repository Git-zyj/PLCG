/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    var_16 = (max(var_16, var_9));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((~(arr_2 [i_0] [i_0])));
                var_17 ^= var_11;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_18 = -1589389489;
                            var_19 = (max(var_19, (((~(max((arr_2 [4] [4]), (((arr_10 [14]) & var_7)))))))));
                            var_20 = (min(1, var_12));
                            arr_11 [i_3 + 3] [i_3 + 2] [i_0] [i_0] [8] [i_0] = (((((~var_1) >= (((arr_7 [i_2] [i_2] [i_2]) ? var_7 : (arr_6 [i_1] [i_1] [i_3 + 3]))))) ? (max((arr_10 [i_0]), (max(var_4, 1589389489)))) : (arr_6 [i_3] [i_2] [17])));
                            var_21 |= ((~((var_6 >> (arr_10 [2])))));
                        }
                    }
                }
            }
        }
    }
    var_22 = ((((var_12 + var_8) ? (!var_14) : var_1)));
    #pragma endscop
}

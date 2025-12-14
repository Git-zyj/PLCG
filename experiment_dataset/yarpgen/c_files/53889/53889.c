/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_12 ^= (((((var_7 - (max((arr_6 [i_0] [i_0] [i_2 + 3]), (arr_0 [i_0])))))) ? (min((arr_5 [i_2 + 1] [i_0 - 1] [i_0 - 1]), (arr_3 [i_0 + 1]))) : (((((var_11 > (arr_0 [i_0 - 1]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_13 = ((!((min(((4090718548 ? 102 : var_9)), (arr_12 [i_0] [i_1] [i_2 + 3] [i_3] [i_3] [i_4]))))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = ((!((((-121 + 2147483647) << (667589018 - 667589018))))));
                                var_14 ^= (min(101, 22792));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = var_9;
    #pragma endscop
}

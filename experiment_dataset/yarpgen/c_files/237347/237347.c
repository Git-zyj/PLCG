/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((((41313 ? 9223372036854775807 : 9))) && (65533 && var_3)))) | (((((var_9 ? var_11 : -44)) <= var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_14 = ((((((arr_1 [i_0]) ? (~4) : (arr_7 [i_1 + 1] [i_1] [i_4])))) ? (arr_8 [i_0] [i_0] [i_1] [i_0] [i_0]) : ((-(arr_1 [i_0])))));
                                arr_12 [17] [i_1] [10] [i_1] [i_1] [12] = ((~(((((var_12 ? var_9 : (arr_8 [1] [11] [i_1] [i_3] [i_4])))) ? 36762 : (max((arr_1 [i_1]), (arr_9 [16] [i_1] [i_1] [12])))))));
                            }
                        }
                    }
                }
                arr_13 [i_1] = ((max((~805306368), (((1 | (arr_2 [i_1])))))));
                var_15 ^= (min(4, 3));
                arr_14 [i_1] [i_1] = (min(-72, 5375276955448343957));
            }
        }
    }
    #pragma endscop
}

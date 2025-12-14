/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((min((min(var_9, 1073725440)), (~7730286669164228146))) ^ (~var_0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_11 = max((max((arr_13 [i_0] [i_1] [i_2] [i_3] [i_0]), ((-(arr_10 [i_1]))))), (~3344978359515698944));
                                arr_15 [i_0] [i_1] [i_2] [i_1] [i_4 - 1] = 818451455;
                                arr_16 [i_0] [i_1] [i_2] [i_3 + 1] [i_2] [i_1] [i_3] = ((!(((((!(arr_3 [i_1] [i_3]))) ? var_1 : (((min(42, var_0)))))))));
                            }
                        }
                    }
                }
                var_12 ^= ((((arr_11 [i_1] [i_0] [i_0]) ? var_8 : (arr_8 [i_0]))));
            }
        }
    }
    #pragma endscop
}

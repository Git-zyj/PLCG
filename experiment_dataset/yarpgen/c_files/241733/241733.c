/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_11 = (min((((arr_6 [i_0] [i_1]) ? 137170518016 : var_2)), (arr_4 [i_2])));
                            arr_10 [i_0] [i_1] [i_2] [i_0] = ((((((arr_5 [i_0] [i_0] [i_0]) ? ((min(234357639, var_7))) : var_1))) == (min(((var_7 ? (arr_2 [i_3] [i_1]) : var_8)), (arr_8 [i_0])))));
                            var_12 = ((7801508331631317290 ^ ((((((arr_1 [i_0] [i_0]) << (var_8 - 13798497860531142436))))))));
                        }
                    }
                }
                var_13 -= (!234357631);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_14 = var_9;
                            arr_16 [i_0] [i_4] [i_1] [i_0] = (((((var_0 ? ((-(arr_13 [i_0] [i_1] [i_4]))) : ((12485 >> (2047 - 2039)))))) & -10931388797114534503));
                        }
                    }
                }
                var_15 ^= var_3;
            }
        }
    }
    var_16 &= (max(var_3, var_8));
    #pragma endscop
}

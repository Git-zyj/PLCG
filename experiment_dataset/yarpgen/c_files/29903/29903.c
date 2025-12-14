/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    var_17 = (((((~((max(0, 0)))))) % (min((var_9 & var_0), (min(var_6, var_6))))));
    var_18 = -3405445670638081729;
    var_19 = (min(((var_10 ? (min(537233837818924886, 1)) : var_6)), var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_9 [i_1] [i_1] [i_1] [i_1] [i_3] = var_13;
                            arr_10 [i_3] [i_3] [i_3] [i_3] [i_0] = (arr_8 [i_0]);
                            var_20 = ((((max((arr_1 [i_2 - 1]), ((511 * (arr_0 [1] [i_1])))))) ? (~-1077810370) : ((0 ? (arr_7 [i_2 + 1] [i_2 - 4] [i_2 + 2] [i_2 - 4]) : (arr_7 [i_2 + 2] [i_2] [i_2 - 2] [i_2 - 3])))));
                            var_21 = (arr_4 [i_0] [i_0] [9]);
                        }
                    }
                }
                var_22 = (arr_6 [i_0] [1] [10] [i_0] [16]);
            }
        }
    }
    #pragma endscop
}

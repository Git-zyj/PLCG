/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -18014398509481984;
    var_20 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [1] [i_1] [7] = ((((max((arr_3 [i_0] [i_1] [i_2]), (arr_3 [i_0] [i_0] [i_0])))) ? -11279468866348821555 : var_4));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 = (max(var_21, (arr_7 [i_0] [i_1] [i_2] [i_1])));
                                arr_15 [i_0] [i_0] [i_2] [i_1] [i_3] [i_0] = (max(((((arr_5 [i_0] [6] [i_2] [i_0]) > (arr_3 [i_0] [i_0] [i_0])))), (((arr_7 [i_0] [i_1] [i_3] [i_4]) ? 8 : 65535))));
                                arr_16 [i_0] [i_0] [4] [i_1] [i_4] [i_2] [i_2] = ((-1974462496 | (max((var_9 > -744328143702014826), (max(226, -744328143702014826))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

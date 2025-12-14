/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!0);
    var_12 &= var_1;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = ((((~(max((arr_2 [3] [i_0]), 767946615464936041)))) > (-1 + 268435455)));
                var_14 = min((((arr_3 [6] [i_0 + 1] [i_0]) ? 1 : (arr_2 [i_0 - 2] [i_0]))), (((var_4 != 500680923) ? (arr_2 [1] [i_0]) : (min((arr_4 [9] [2] [1]), (arr_0 [7]))))));
                var_15 = ((-(!var_2)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_16 = ((!-1) * (!4026531840));
                            arr_11 [9] [8] [0] [9] [0] [i_0] = ((((~((1 ? -23709 : -813605303)))) % 1));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

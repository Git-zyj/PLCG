/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= ((-((var_7 ? 154 : 869624968))));
    var_20 = -14558417803050127776;
    var_21 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_22 = (((((((arr_6 [i_1 + 1] [i_1 - 1] [i_1 + 1]) > (arr_6 [i_1 - 1] [0] [i_1 - 1]))))) & ((((arr_10 [i_0] [i_1 + 1] [i_1 + 1] [i_0]) > -3154769775278121977)))));
                    var_23 = (max(var_23, (((~(((var_13 != (arr_10 [6] [6] [8] [i_2])))))))));
                }
            }
        }
    }
    #pragma endscop
}

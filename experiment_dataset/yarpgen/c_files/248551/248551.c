/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((!31) < ((16383 ? -32 : 15))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [0] [1] = ((max((arr_0 [i_0]), (arr_2 [i_0]))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_2] = var_1;
                            var_13 += var_8;
                        }
                    }
                }
                arr_15 [i_1] [i_1] = 3749451782477371570;
                var_14 = -12901;
            }
        }
    }
    #pragma endscop
}

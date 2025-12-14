/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = (((((~(arr_2 [i_1 + 4] [i_1] [i_1])))) / -3959513248));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_18 = (!536870880);
                            var_19 = (((((-(((arr_9 [i_2]) ? var_7 : (arr_7 [i_0] [i_0] [i_2] [i_2])))))) ? ((+(max((arr_1 [i_0]), var_0)))) : ((((var_1 ? var_4 : (arr_4 [i_3] [i_0]))) & (arr_6 [i_0] [i_0] [i_2] [i_1])))));
                            var_20 = arr_7 [i_0] [4] [i_1 + 2] [i_3];
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

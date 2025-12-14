/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;
    var_17 &= var_6;
    var_18 = -1873509117;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_19 = (min(var_19, ((min((min(14291797457593269748, (arr_5 [i_0 + 3] [i_1 - 1] [i_1]))), (~123))))));
                arr_6 [i_0] = ((((!(arr_4 [i_0]))) ? ((~(arr_4 [i_0]))) : 33554368));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_20 = (!-1873509131);
                            arr_13 [i_0 + 3] [i_0] [i_0] [i_2] [i_3] = var_13;
                        }
                    }
                }
                var_21 = (min((!var_4), 8640943572200562457));
            }
        }
    }
    #pragma endscop
}

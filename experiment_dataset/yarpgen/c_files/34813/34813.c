/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_11 = (min(var_11, (((!(arr_0 [i_0 + 1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_12 = (max(var_12, (((~(((arr_6 [i_1] [i_3]) >> (((!(arr_8 [i_1])))))))))));
                            arr_11 [i_0] [i_0] [i_2] [10] = 8192;
                            var_13 |= (arr_2 [i_1] [i_2]);
                            var_14 *= (arr_7 [i_3] [i_2] [i_1] [i_1] [i_0]);
                        }
                    }
                }
            }
        }
    }
    var_15 &= 0;
    #pragma endscop
}

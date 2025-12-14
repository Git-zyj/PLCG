/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= (max(var_7, var_16));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [1] [i_0] [i_1] = min(-12, 43);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_19 = (arr_8 [i_0] [i_2] [i_1] [i_3]);
                            arr_9 [i_0] [7] [i_1] [7] = (((((arr_0 [i_2]) >> ((((min(-31900, 20))) + 31920)))) | (arr_8 [i_0] [i_1] [i_1] [i_1])));
                        }
                    }
                }
            }
        }
    }
    var_20 = (max(20, 6));
    var_21 -= var_11;
    var_22 = var_11;
    #pragma endscop
}

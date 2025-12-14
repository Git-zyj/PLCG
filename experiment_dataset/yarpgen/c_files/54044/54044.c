/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_15 = (max(14497, 1));
                var_16 *= ((((((min(-54, var_2))) ? ((1817662242 ? 127 : (arr_1 [i_0] [i_1]))) : 1)) == var_0));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_8 [i_2] = (((((var_7 ? var_10 : var_7))) ? (((15248 ? (arr_7 [i_3] [i_1] [i_2] [i_3]) : (arr_7 [i_0] [i_0] [i_2] [i_3])))) : var_2));
                            var_17 = (arr_2 [i_0] [i_0]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

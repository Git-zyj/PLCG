/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_18 += var_0;
                arr_4 [i_0] = (max((arr_0 [i_0 + 1]), var_1));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    arr_13 [i_3 + 1] = (max((arr_11 [i_3 + 1] [i_3 - 1] [i_2] [i_2 + 3]), ((min(31256, var_6)))));
                    var_19 *= ((!(((!var_15) <= (arr_6 [i_2])))));
                    var_20 = (((min(var_10, var_6))));
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min(((min(var_16, var_5))), var_15);
    var_19 = (max(var_4, var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 += (max((((arr_5 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1]) < (arr_5 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1]))), ((!(arr_5 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1])))));
                    var_21 = (((max((arr_3 [i_0] [i_1]), (max(18, (arr_2 [i_0]))))) ^ var_7));
                    var_22 += (arr_5 [i_0] [0] [i_2 - 1] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}

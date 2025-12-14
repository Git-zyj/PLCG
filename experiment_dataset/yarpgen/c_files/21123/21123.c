/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_8));
    var_21 = ((((max(var_2, var_10)) / var_1)) != ((min(59, 3192500324))));
    var_22 = (max(var_22, ((max(56, (max(((max(var_16, var_4))), var_11)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_23 &= ((var_12 ? ((((max(var_6, (arr_2 [i_1])))) ? (arr_6 [i_0 - 3]) : (((max(38852, var_15)))))) : ((((max(-1, 26702)))))));
                    arr_8 [i_0] [i_0] [12] = ((~(min((arr_1 [i_0 - 1]), var_6))));
                }
            }
        }
    }
    var_24 = var_7;
    #pragma endscop
}

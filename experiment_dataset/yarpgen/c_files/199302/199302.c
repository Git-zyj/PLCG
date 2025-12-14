/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = (max(((((max(2027251086867524365, 45605))) ? (arr_1 [i_1] [i_0]) : 247)), (arr_6 [i_0] [i_0])));
                var_13 = ((127 ? (((((516096 ? -2147483637 : (arr_2 [i_0])))) ? ((max(65535, (arr_5 [i_0] [i_0] [i_1])))) : 9841260871552197214)) : ((3097320355529924567 ? (((53052 ? (arr_2 [i_0]) : (arr_1 [i_0] [i_1])))) : (arr_2 [i_0])))));
            }
        }
    }
    var_14 = var_4;
    var_15 ^= var_4;
    #pragma endscop
}

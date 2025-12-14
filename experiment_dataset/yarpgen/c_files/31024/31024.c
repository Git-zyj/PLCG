/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_0] = ((((((arr_4 [i_1] [i_1 + 2] [i_0]) - (((!(arr_4 [i_1] [i_1] [i_0]))))))) ? var_12 : ((var_12 - (arr_0 [i_1])))));
                arr_7 [i_0] [i_0] [i_1 - 1] = (max(0, (arr_4 [i_0] [i_0] [i_0])));
            }
        }
    }
    var_20 = (4294967291 % 1);
    #pragma endscop
}

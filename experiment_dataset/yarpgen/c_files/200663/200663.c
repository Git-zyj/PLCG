/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!var_8);
    var_19 = (((((min(-1398710883, 4))) ? (max(var_16, 18446744073709551597)) : 48303)) >= var_1);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = var_13;
                arr_5 [i_1] [i_1] [i_0] = (arr_0 [i_0 - 2] [i_1]);
                arr_6 [i_1] = max(((!(arr_0 [i_0 - 4] [i_0 - 4]))), (!12799));
            }
        }
    }
    #pragma endscop
}

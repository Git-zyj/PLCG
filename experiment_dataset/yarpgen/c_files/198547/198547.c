/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_17 = (((var_0 * (arr_4 [i_0] [i_0 - 1]))) * (((arr_6 [i_0] [i_0 - 1]) / var_6)));
                    arr_8 [i_0] [i_2] = 11358476333854428627;
                    arr_9 [i_0] [i_0] [i_0] = ((((((6576904914010476554 ? (arr_0 [i_1] [i_2 - 1]) : var_6)) - (11140519870683580117 && -116))) > var_9));
                }
            }
        }
    }
    var_18 = (~var_5);
    #pragma endscop
}

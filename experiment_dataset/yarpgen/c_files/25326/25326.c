/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_13));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = 114;
                arr_6 [i_0] [i_0] = (arr_5 [i_0 - 1] [i_0 - 1]);
                arr_7 [i_0] [i_1] [i_0] = -7869901665472629296;
            }
        }
    }
    #pragma endscop
}

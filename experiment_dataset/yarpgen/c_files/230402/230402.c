/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = max(var_8, -var_10);
    var_17 = 3766959496101733331;
    var_18 = 31;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = (min(((((max((arr_8 [6]), -1868709625)) >= -var_6))), 562949953421311));
                    arr_10 [0] [i_1] = (min((max(var_13, var_1)), (arr_5 [i_2])));
                }
            }
        }
    }
    #pragma endscop
}

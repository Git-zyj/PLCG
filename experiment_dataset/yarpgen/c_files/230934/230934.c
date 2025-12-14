/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 33554431;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = 53117;
        var_21 = (((~((53143 + (arr_1 [i_0] [i_0]))))));
        var_22 = var_7;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                var_23 = (max(var_23, 12419));
                arr_8 [i_1] [i_2] = 29762;
            }
        }
    }
    var_24 = (~((((min(var_11, 32767))) % var_19)));
    var_25 = (min(((-(max(var_7, 475036397)))), var_10));
    #pragma endscop
}

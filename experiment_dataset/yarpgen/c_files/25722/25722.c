/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = ((+((var_6 ? (!var_5) : -var_4))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = (arr_0 [i_0]);
                var_13 = (~33387);
                var_14 = (min(var_14, (((-115 <= ((((min(2040, (arr_2 [i_0])))) ? (max(-2048, var_7)) : 15934534740186610809)))))));
                var_15 -= (30188 ? ((max(((max(819024900, 30900))), var_7))) : (arr_1 [i_0] [i_1]));
                var_16 = var_4;
            }
        }
    }
    var_17 = (max(var_17, var_1));
    var_18 = (1227480799760882240 % var_0);
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_15 |= ((min((max(31, var_12)), -90)));
                    var_16 = ((((min(-93, -7))) ? (arr_8 [i_0]) : 9117032422878854319));
                    var_17 = ((((((((arr_6 [i_0] [i_0] [i_2] [i_2]) | var_14))) ? (max(9214315676884078385, var_4)) : 67108864)) % ((min((((var_4 ? var_2 : (arr_5 [i_0])))), 15)))));
                    var_18 -= (65535 | -4514903827006768141);
                    var_19 = (min(var_19, var_8));
                }
            }
        }
    }
    var_20 = ((min(var_11, (min(var_7, 14479266824465568998)))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(1, -1));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_18 = (min(((min(1, (min(-34, 32))))), (min((min(11, 3941482015)), ((min(1, 1)))))));
                    var_19 = (min(var_19, ((min(32, 255)))));
                    var_20 = (max(var_20, ((min(((min(((min(38, 64))), 27080))), (min(397564192, 16)))))));
                    var_21 = (min((min(2689988372, 13514081196168275873)), ((min(10728, -38)))));
                }
            }
        }
    }
    var_22 = (min((min((min(1, 10719)), 1)), -27));
    #pragma endscop
}

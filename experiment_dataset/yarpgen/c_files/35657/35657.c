/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (-10 == ((32704 ? 4294934607 : (arr_1 [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (+-2036283126)));
                    var_17 = (min(var_17, (65508 - 0)));
                }
            }
        }
    }
    var_18 = var_10;
    var_19 = (min(((((4190999006 | var_7) <= (min(32658, 898113930718248228))))), ((36788 << (-1 - 65524)))));
    #pragma endscop
}

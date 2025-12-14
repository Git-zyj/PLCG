/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, 11221381216696441847));
                    arr_7 [i_0 - 2] [1] [1] = (((arr_3 [5] [i_1 + 2]) == ((((0 > 65519) > -8734291910459481302)))));
                }
            }
        }
    }
    var_20 = var_1;
    var_21 = (1 < 109246747);
    #pragma endscop
}

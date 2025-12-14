/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 = (arr_3 [11]);
                    var_15 = 510245732;
                    var_16 = (max(var_16, 7647179630473104100));
                }
            }
        }
    }
    var_17 = (max(var_17, ((((min(var_8, (min(1, 1)))))))));
    var_18 &= (--1);
    #pragma endscop
}

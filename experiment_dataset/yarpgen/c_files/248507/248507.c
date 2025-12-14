/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_10 [i_1] = 8127266218803409088;
                    var_10 &= (((arr_8 [i_0] [i_0 - 3] [i_2]) ? (arr_6 [i_0 - 3]) : var_4));
                }
            }
        }
    }
    var_11 = (min(var_11, var_2));
    #pragma endscop
}

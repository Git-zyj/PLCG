/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-((((max(27666, var_6))) ? var_2 : (min(83, 3))))));
    var_12 = ((1865453307936942661 ? ((~((111 ? -1865453307936942662 : var_0)))) : (((((max(1865453307936942661, -192416827))) ? var_3 : var_4)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [3] [i_0] [i_0] = (max((max(((var_5 ? var_9 : 7289100152395807106)), (~819449446))), var_0));
                    var_13 |= ((26623 ? ((~(arr_2 [i_1]))) : 0));
                }
            }
        }
    }
    var_14 = 26624;
    #pragma endscop
}

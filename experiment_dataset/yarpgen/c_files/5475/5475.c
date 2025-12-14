/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (((~(-6917766874439919153 & 2860519823))) != (min(var_0, var_1)));
    var_13 |= (1212196457 ? 6992633062028953576 : var_9);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (((((((((arr_1 [i_0]) | -7352)) ^ var_8)) + 2147483647)) >> (var_11 + 4769387411632482980)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = (((((arr_0 [i_0]) ? ((((arr_7 [i_2] [i_1]) < 133))) : var_9)) << ((((5109 - 23) && 1845524624221375589)))));
                    arr_8 [i_0] [i_0] [i_2] = var_0;
                }
            }
        }
        var_16 -= (min(((~((6917766874439919152 ? var_9 : (arr_6 [18] [18]))))), var_8));
    }
    #pragma endscop
}

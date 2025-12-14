/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (max((-32767 - 1), -3051));
    var_11 += var_7;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 24;i_3 += 1)
                    {
                        arr_11 [i_0] [i_2] [i_0] [i_0] [i_0] [1] = ((0 | 4611650834055299072) << ((((-15842 ? 16897 : 1437530285)) - 16896)));
                        var_12 -= (63 & 3051);
                        arr_12 [i_0] [i_1] = -6424057112535194530;
                    }
                    arr_13 [i_0] [5] [i_1] [i_0] = (max((((22427 && ((((arr_2 [i_2]) | -64)))))), -64));
                }
            }
        }
    }
    #pragma endscop
}

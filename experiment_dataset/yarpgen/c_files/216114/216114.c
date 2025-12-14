/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 ^= ((-((-(377282692 & 377282692)))));
        arr_3 [i_0] = ((1 & (min((1707479011 & 7), (~4204299464454956602)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = -257574682;
                    var_20 = (min(var_20, ((((min((18446744073709551608 - 32430), -257574682)) & 1)))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = (min((min((18446744073709551615 & 32763), (1243261487 & -838349442))), (32763 & 18446744073709551613)));
                    var_21 = ((((min(1, 14242444609254595014))) & (6 & 2147483647)));
                }
            }
        }
    }
    var_22 += 62567;
    var_23 = (((min((~27), -1)) & (1 & 0)));
    #pragma endscop
}

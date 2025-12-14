/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1 - 1] [i_2] |= (((max((max(27592, -2147483643)), (30332 & 2147483643))) >> ((((2147483647 / 27592) == (0 ^ 18446744073709551615))))));
                    var_11 *= 274988700;
                    var_12 = ((-93 > (((~-72) ^ -1))));
                    var_13 *= -1;
                }
            }
        }
    }
    var_14 += ((((((((-72 ? 255 : 27592))) / var_6))) ? 1 : var_9));
    #pragma endscop
}

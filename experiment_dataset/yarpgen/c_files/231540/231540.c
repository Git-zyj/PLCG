/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_7 ^ (((((15780308918483149647 ? var_3 : 15780308918483149630)) >= var_6)))));
    var_11 = ((-69 / (max(15780308918483149666, 104))));
    var_12 = (1 <= 8008088424132935391);

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 = (min(var_13, (-69 - 105)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 = -69;
                    arr_9 [i_0] [i_0] [7] [i_0] = (((((min(-67, var_2)))) * 165));
                }
            }
        }
        var_15 = (arr_4 [i_0] [i_0] [i_0]);
        var_16 |= -6;
    }
    var_17 = ((var_0 | (min(var_0, var_1))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_13));

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = 448339770;
        var_17 = (~62);

        for (int i_1 = 1; i_1 < 19;i_1 += 1) /* same iter space */
        {
            var_18 = ((10 ? 3765701890 : -1356681243));
            var_19 = (((arr_2 [i_0]) << (25594 - 245)));
            var_20 -= ((var_7 ? (max((((var_3 ? var_9 : (arr_2 [i_0])))), (max(3213890599058093830, 16331880095656861344)))) : ((min(-2085047888608014800, 3528142304)))));
        }
        for (int i_2 = 1; i_2 < 19;i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] [i_0] [i_2 - 1] = ((1845950956 ? (min(-var_7, 197)) : 56));
            arr_11 [i_0] = (min((!3846627526), (max((~204), ((135 ? 3031701686350640476 : (arr_7 [i_0] [i_2 + 1])))))));
            arr_12 [i_0] [i_0] [i_2] = (arr_9 [i_0] [i_2] [i_0]);
        }
        var_21 = ((101 ? -21 : 3573995933));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {
                    arr_21 [i_4] [i_4 + 1] = (((arr_17 [i_4] [i_4 - 2] [i_4 - 1]) / 115));
                    var_22 = 4294967293;
                }
            }
        }
        arr_22 [i_3] &= 14;
    }
    #pragma endscop
}

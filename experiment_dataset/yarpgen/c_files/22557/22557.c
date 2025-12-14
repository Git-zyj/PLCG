/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((8793 >> (56743 - 56727)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = ((8793 ? 4294967295 : 17848221360615290043));
                var_20 = (min(var_2, (1 / 2306665326)));
                var_21 += (((((3790786596 ? 62665 : var_6))) && ((((((~56731) + 2147483647)) >> (var_14 - 2551113685))))));
                arr_5 [i_0] [i_1] [i_0] = ((((((max(var_11, 1135372963))) < (min(var_7, var_12)))) ? (((var_15 | -99) ? (-2147483647 - 1) : ((var_2 >> (-1057653660 + 1057653679))))) : (min((~1), var_0))));
            }
        }
    }
    #pragma endscop
}

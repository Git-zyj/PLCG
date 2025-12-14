/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= ((~((var_14 ? -var_5 : (((var_9 ? var_3 : 89)))))));
    var_16 = ((~((~((79 ? -972487975 : var_6))))));
    var_17 *= (~var_9);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_18 -= ((-820456437 ? (arr_0 [19] [i_1]) : var_13));
                var_19 *= (min((arr_0 [i_0 - 3] [i_0 - 3]), (1 != 12952037398661425147)));
                var_20 = var_2;
                var_21 = ((!(arr_4 [i_0])));
                var_22 = (arr_2 [i_0 - 1]);
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = max(((((((var_9 ? var_5 : var_6))) ? (!206) : var_10))), ((-907976377660255896 ? ((var_3 ? var_2 : 12)) : var_0)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_13 &= var_7;
                    var_14 = (max((max((arr_0 [i_2]), 0)), (((((105 ? 2475947913 : var_5))) ? ((6016 ? var_3 : 255)) : 1153))));
                }
            }
        }
    }
    var_15 = ((~(((((min(-92132871432431163, 49624)) + 9223372036854775807)) >> ((((var_11 ? var_8 : var_5)) + 14583))))));
    var_16 = (((52625 <= 25974) * (!19)));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_12 = (arr_3 [i_0] [i_1]);
                var_13 ^= var_1;
                arr_8 [i_0] [i_0] [i_0] = ((arr_7 [i_1 + 2] [5] [i_0]) ? (!var_3) : ((16879025070206951182 * (arr_7 [i_1 + 2] [i_1 + 2] [i_0]))));
                var_14 = (min(var_14, (arr_7 [i_1] [i_1] [i_1])));
            }
        }
    }
    var_15 = (min(1, -846885069));
    var_16 = (max(var_3, (((-38106 < (min(2788554040, 32767)))))));
    #pragma endscop
}

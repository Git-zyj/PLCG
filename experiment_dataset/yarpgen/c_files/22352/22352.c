/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((min(((0 ? 1 : 25165824)), ((var_15 ? var_3 : var_13)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((3959 ? 4269801446 : 4269801459));
                var_21 = 39;
                var_22 -= (!51);
                arr_6 [i_1] [i_0 - 3] [i_0] = (((((arr_3 [i_0] [i_0] [i_1]) ? -112 : (arr_2 [i_1 + 1] [i_0 - 1])))) * 3315911368);
                var_23 = (((arr_4 [i_0 - 3]) > var_19));
            }
        }
    }
    var_24 = ((-(~var_12)));
    var_25 |= var_1;
    #pragma endscop
}

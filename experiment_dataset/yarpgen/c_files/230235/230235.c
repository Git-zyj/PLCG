/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((~var_7) ^ var_13))) ? ((((~1753982728426954743) ? 0 : var_0))) : 4088615729));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1 - 1] = ((var_8 ? ((-(arr_1 [i_1 - 2] [i_1 - 4]))) : (((min((arr_3 [i_1] [i_1 - 3] [i_0]), (arr_3 [i_1] [i_1 - 4] [i_0])))))));
                arr_5 [i_0] [i_0] [i_0] = ((-2484916960 ? -1 : (((((228 ? var_15 : 1442398876))) ? 206351580 : (253 / 2852568420)))));
            }
        }
    }
    var_18 = var_6;
    var_19 = 3234508379;
    #pragma endscop
}

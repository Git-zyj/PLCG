/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_1] = var_9;
                arr_6 [i_1] [i_1] = var_17;
                arr_7 [i_1] = ((54078 << (var_17 - 13320)));
                arr_8 [i_1] [11] = ((!((((arr_4 [i_1 - 1] [i_1 - 1]) ? (arr_4 [i_1 + 1] [i_1 + 1]) : var_17)))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_11 [i_2] = var_17;
        arr_12 [i_2] [i_2] = ((((~var_17) > 4294967295)) ? ((((var_16 ? 54078 : var_5)))) : (arr_0 [22]));
    }
    var_19 = var_10;
    #pragma endscop
}

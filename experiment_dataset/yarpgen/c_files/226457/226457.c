/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;
    var_19 = (min(var_19, ((45873 ? 48 : ((((((var_8 ? 48 : var_10))) ? ((max(var_7, var_8))) : ((var_11 ? 45873 : 19659)))))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 = 1400602501257849088;
                    arr_8 [i_0] [i_1] = (!-1);
                }
            }
        }
        var_21 = ((+((423496478 ? (arr_5 [0] [i_0]) : 48))));
    }
    for (int i_3 = 2; i_3 < 13;i_3 += 1) /* same iter space */
    {
        var_22 = (var_13 ? (min((var_8 && var_9), 62)) : (!1));
        var_23 = (max(((min(63439, 51556))), ((-((-(arr_7 [i_3] [i_3] [i_3 - 1] [i_3 - 1])))))));
    }
    #pragma endscop
}

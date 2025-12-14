/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-(var_10 / var_6)));
    var_18 -= var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 = 2783363449;
                    arr_7 [i_0] [i_0] [i_2 - 3] = var_1;
                }
            }
        }
        arr_8 [i_0] = (arr_0 [i_0] [i_0]);
        var_20 &= ((var_4 ? var_3 : 1588194204));
        arr_9 [i_0] = ((((((arr_0 [i_0] [i_0]) / (arr_0 [i_0] [i_0])))) ? (arr_1 [i_0]) : (arr_1 [i_0])));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {
        var_21 = var_0;
        var_22 = (!var_13);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        arr_15 [i_4] = (arr_5 [i_4] [i_4]);
        var_23 = (((var_6 < var_10) <= ((((arr_4 [i_4] [i_4] [i_4] [i_4]) != (arr_14 [i_4]))))));
    }
    var_24 = (max((2706773091 != var_4), var_10));
    var_25 |= (((((691862110 ? 2706773102 : 2356659576))) ? (~691862110) : (min((max(11102, 7906179689911007812)), ((max(var_7, 691862110)))))));
    #pragma endscop
}

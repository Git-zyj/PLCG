/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_19 ^= (arr_2 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {
                    {
                        var_20 = (max(var_20, (((-(arr_5 [i_0 + 1] [i_1] [i_2] [i_3 - 1]))))));
                        arr_11 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] = 603466279;
                    }
                }
            }
        }
        var_21 = var_14;
        var_22 = ((!(~var_12)));
        var_23 = 603466279;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    {
                        var_24 = (arr_13 [i_5]);
                        var_25 = (arr_19 [i_4] [i_5]);
                    }
                }
            }
            var_26 = (((((arr_16 [i_5] [i_5]) ? var_16 : (arr_17 [i_5] [i_5] [i_4]))) | ((-603466282 ? (arr_16 [i_4] [i_5]) : 603466298))));
            arr_23 [i_4] [i_4] [i_4] = (((arr_21 [i_4] [i_4] [i_5] [i_4]) ? (arr_19 [i_4] [i_5]) : -603466295));
        }
        var_27 = (!var_13);
        var_28 = var_10;
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 7;i_8 += 1)
    {
        var_29 = (max(var_29, (((!(!var_17))))));
        arr_27 [i_8] [i_8] = -35;
    }
    var_30 = ((((((var_9 ^ var_8) < var_18))) << (((min((~var_2), var_5)) + 127))));
    #pragma endscop
}

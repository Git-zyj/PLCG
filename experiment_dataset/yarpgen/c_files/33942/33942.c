/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((-((-(~var_6))))))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_12 = ((-(~-285978576338026496)));
        var_13 |= ((-(~9044399286509233738)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_11 [4] &= ((~(--9044399286509233709)));
                        var_14 = (max(var_14, ((!(~-9044399286509233738)))));
                    }
                }
            }
        }
        var_15 = ((!(((~(~var_2))))));
        arr_12 [i_0] = ((-((~(~var_6)))));
    }
    var_16 |= ((~(((!(~var_1))))));
    var_17 = (~var_2);
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    arr_19 [i_4] [i_4] [i_4] = ((-(((!(!9044399286509233725))))));
                    var_18 = (~((-((-(arr_13 [i_4]))))));
                }
            }
        }
    }
    #pragma endscop
}

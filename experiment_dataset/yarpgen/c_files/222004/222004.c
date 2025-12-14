/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((144 ? (1046278535 && 76) : -63))) ? var_6 : (!4063232)));
        var_20 = (arr_1 [i_0]);
        var_21 = (((max((arr_2 [i_0] [i_0]), (((var_8 ? var_0 : var_14))))) * 1));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        arr_7 [i_1] = ((1 ? (((1 > 1) ? 1 : (1 * 1))) : 1));
        var_22 = (~7899);
    }
    for (int i_2 = 4; i_2 < 18;i_2 += 1)
    {
        var_23 = (arr_9 [i_2 + 2]);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_24 &= (min((arr_8 [i_2 - 1]), 40));
                    var_25 = (min(var_25, (--78)));
                }
            }
        }
    }
    var_26 = ((((((var_1 >= var_0) ? 0 : (max(var_15, var_13))))) != var_19));
    var_27 = ((1 ? (((7590053446130395375 ? 65535 : 57639))) : var_19));
    var_28 = (((((var_8 ? var_0 : (((17207405679167076681 ? var_5 : 4290904073)))))) ? ((((!((min(7906, 50))))))) : var_10));
    #pragma endscop
}

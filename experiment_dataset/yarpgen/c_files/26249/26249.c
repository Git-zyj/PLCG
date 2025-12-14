/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_10 = (max(var_10, ((max(((((arr_1 [i_0 + 2] [i_0 + 1]) << (13988301533724607738 - 13988301533724607719)))), ((var_6 ? 63299 : -4458442539984943901)))))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_8 [i_1] [i_0] [0] = ((-(~8829705693361460165)));
                        arr_9 [i_0] [i_0] [i_0] [i_0] = -9;
                        arr_10 [i_1] [i_0] [i_3] = ((var_1 ? ((var_7 & (arr_0 [i_0 - 2]))) : (((!((max(-1713017565, 32767))))))));
                    }
                }
            }
        }
        arr_11 [i_0] = (min(((18446744073709551605 ? (arr_5 [i_0 + 2] [i_0] [i_0] [i_0 + 1]) : ((((arr_0 [i_0]) > var_7))))), var_3));
    }
    var_11 = ((((max(125, 8829705693361460165))) ? 4 : -var_3));
    #pragma endscop
}

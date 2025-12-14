/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_15 = ((!((!(arr_3 [i_1 - 1] [i_2])))));
                    var_16 = (arr_8 [i_0] [i_1] [13] [15]);
                    var_17 = (((-(!-237402961))));
                    var_18 = ((-(!0)));
                }
            }
        }
    }
    var_19 = ((((((!var_9) != (0 | var_5)))) << (((((53969 | -1) * (26748 & 43730))) + 10336))));
    var_20 = (var_13 && 65529);
    var_21 = (max((((!var_6) ? ((var_4 ? -4458017635004324522 : 4294967273)) : (1225377886 || 53980))), -16777215));
    #pragma endscop
}

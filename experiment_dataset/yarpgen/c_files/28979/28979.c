/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((156 | (arr_5 [i_0 - 1])));
                var_18 = (((~((2600 ? (arr_3 [i_0] [i_0]) : 7812424385679202395)))));
                arr_7 [i_0] [i_0] [i_1] = ((576460752303161344 ? 0 : 18446744073709551615));
                arr_8 [i_0] [i_1] [i_0] = ((-7738689032435137756 ? 171 : 1539544099));
                var_19 = (((((7738689032435137755 ? -1539544100 : 1))) && ((var_7 > (arr_4 [i_0])))));
            }
        }
    }
    var_20 &= (((-(!var_5))));
    #pragma endscop
}

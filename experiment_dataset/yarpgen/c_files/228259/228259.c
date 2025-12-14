/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_0] [8] &= (arr_0 [2]);
                var_10 = ((((min(var_2, (arr_4 [i_1 - 3] [i_1 - 2] [i_0 - 3])))) ? ((var_3 ? 336561489397431847 : (arr_0 [4]))) : 336561489397431858));
            }
        }
    }
    var_11 = (((!var_3) ? var_3 : var_4));
    var_12 = (min(var_12, var_7));
    var_13 = ((var_7 ? var_1 : -18446744073709551613));
    #pragma endscop
}

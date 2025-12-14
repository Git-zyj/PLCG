/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_12 &= ((((11359243788489700600 > 13323428275861672075) == ((-7575 ? 7561 : (arr_3 [i_1]))))) ? ((11496383754055672676 ? (arr_1 [i_0] [i_0 - 1]) : (((arr_5 [i_0] [i_0] [19]) & -7342)))) : 195510328);
                var_13 |= (arr_1 [i_1] [i_0]);
                var_14 = (min(195510328, (arr_4 [i_0] [i_0])));
                arr_6 [i_1] [i_0] = 195510328;
            }
        }
    }
    var_15 = ((((((min(25, 344))))) ? var_5 : var_1));
    #pragma endscop
}

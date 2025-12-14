/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_11 = ((~((((70 > 3781911961) <= (4636081845486237048 != var_9))))));
                var_12 = (max(var_12, (((((max(var_7, var_10) & (13810662228223314575 > var_6))))))));
                var_13 = (max(var_13, 13810662228223314560));
                arr_6 [i_0 - 3] [i_0] [i_1 - 1] = ((((((var_7 >> (var_3 - 1602914199118656053))) <= (var_4 && var_10))) ? ((((max(-361186990, var_10))) ? ((1353 ? 3241661776543019070 : var_8)) : (arr_2 [i_0]))) : (((1155249651 ? 31230 : -2038746774)))));
                var_14 = (max(var_14, ((((arr_0 [i_1]) ? (max(var_6, (max(var_5, var_0)))) : (((517749936 & ((((arr_5 [i_0] [i_1]) > var_2)))))))))));
            }
        }
    }
    var_15 = (min(((((max(var_9, var_3))) ? (!19604) : var_2)), var_7));
    #pragma endscop
}

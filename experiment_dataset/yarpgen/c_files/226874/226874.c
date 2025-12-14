/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    var_12 = (((((5076461053419886856 ? 942301375820365754 : 942301375820365741))) > (((((var_0 ? var_7 : var_1))) & ((var_8 ? var_2 : 10489059591714331907))))));
    var_13 = var_9;
    var_14 = ((var_10 ? ((max((max(var_7, var_5)), var_0))) : (((((var_3 ? var_3 : var_1))) ? ((var_6 ? 8338506259618429605 : var_9)) : ((8338506259618429605 ? 10108237814091122011 : 8338506259618429605))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (arr_1 [i_0] [i_0]);
                var_15 = ((((((min((arr_2 [i_0] [i_1] [i_1]), (arr_2 [i_0] [i_0] [2]))) * var_10))) ? ((1151029458 ? 942301375820365751 : (arr_2 [i_0] [i_0] [i_0]))) : (max(16368, 18446744073709551605))));
                var_16 = max(7583597888395812616, (arr_3 [i_0] [i_1]));
                var_17 = (-1151029455 ? (max((max((arr_2 [i_0] [i_0] [i_0]), var_8)), ((((arr_0 [i_0]) >= (arr_0 [i_0])))))) : ((+(((arr_3 [i_0] [i_0]) ? (arr_1 [i_0] [i_1]) : (arr_1 [i_0] [i_0]))))));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = (min((arr_3 [i_0]), ((~(((arr_0 [i_0]) ? 14109 : (arr_1 [i_0])))))));
                var_15 = (~-1055618669);
                var_16 = ((~(max(((114 ? 8687482541297670417 : (arr_1 [1]))), (arr_3 [i_1 - 1])))));
                var_17 = ((((((((arr_1 [i_1]) >> (((arr_3 [i_0]) - 1129894716))))) / (((arr_0 [i_0]) ? (arr_2 [i_1 - 2]) : var_8)))) == (((max((arr_0 [i_1 + 2]), (arr_0 [i_1 - 2])))))));
            }
        }
    }
    var_18 = ((var_2 ? var_0 : (min((((-2147483647 - 1) ? var_5 : var_2)), var_5))));
    var_19 = ((((7188590130129229351 ? 7188590130129229361 : var_9)) ^ ((1904385267 / (11258153943580322255 ^ 63254)))));
    var_20 = (max(var_20, var_7));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_17;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_21 = (min(var_21, ((((!var_7) && ((((arr_1 [i_1] [i_0]) ? 111 : (arr_4 [i_0] [i_1])))))))));
            arr_6 [i_0] = ((((2961558564 ? var_10 : 1)) >= (arr_2 [i_0] [i_0])));
        }
        arr_7 [i_0] [i_0] = ((-111 ? (((((((arr_4 [i_0] [i_0]) ? var_19 : var_12))) ? ((-118 ? 111 : -2041603288)) : (!var_1)))) : (((((arr_2 [i_0] [i_0]) ? -1 : var_10)) >> ((((min(var_14, (arr_5 [i_0])))) + 38))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    var_22 = (arr_10 [i_2]);
                    arr_14 [i_0] = ((arr_2 [i_0] [i_0]) ? ((~(((arr_13 [i_0] [i_2] [i_3]) ? var_0 : (arr_5 [i_2]))))) : (((var_7 + var_9) ? (var_12 + 0) : 118)));
                }
            }
        }
        var_23 = (max(var_23, -1));
    }
    var_24 += ((+(max((3562641579 * var_0), var_15))));
    var_25 = var_14;
    #pragma endscop
}

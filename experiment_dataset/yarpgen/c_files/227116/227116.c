/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((min(-var_14, (max(-79, 3843707884)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = (max(((~(arr_3 [i_0]))), ((max((min(-2006985524, var_1)), (var_4 >= var_9))))));
                var_22 ^= (((arr_0 [i_0]) + (min(((max(var_19, 8796093022207))), var_17))));
                var_23 = var_2;
                var_24 = (~-var_14);
            }
        }
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_9 [i_2] = ((((min(var_17, (arr_7 [i_2])))) ? (((arr_7 [i_2]) ^ (arr_7 [i_2]))) : var_0));
        arr_10 [i_2] [i_2] = (min(((((!var_19) ? var_12 : var_3))), ((((min(var_2, -76))) ? (max(var_12, var_9)) : var_10))));
        var_25 *= (~1584411574990961982);
    }
    for (int i_3 = 4; i_3 < 20;i_3 += 1)
    {
        var_26 = ((-(((!(arr_12 [i_3 - 4]))))));
        arr_14 [i_3 - 2] [4] = ((((min(((max(-87, (arr_13 [i_3])))), (~var_13)))) ? ((((!((max(8796093022207, (arr_7 [i_3])))))))) : (~-8796093022217)));
    }
    var_27 = var_11;
    #pragma endscop
}

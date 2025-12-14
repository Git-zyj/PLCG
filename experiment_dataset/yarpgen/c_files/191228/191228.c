/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;

    for (int i_0 = 1; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_12 = (((((66846720 ? (((arr_0 [i_0] [i_0]) ? 0 : var_10)) : (arr_0 [i_0] [i_0])))) ? -4316051212755039416 : ((min(var_2, 1979971495)))));
        arr_2 [i_0] = (((arr_0 [i_0] [i_0]) & 1));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_13 = ((!(var_2 || 1979971514)));

        for (int i_2 = 3; i_2 < 12;i_2 += 1)
        {
            var_14 = ((((8638132124777376382 * 0) ? (((1979971504 > (arr_6 [i_2] [i_1])))) : (~var_5))));
            arr_7 [5] [i_2] [i_1 + 2] = ((!((((arr_3 [i_2 + 3] [i_1 + 2]) ? var_5 : (arr_3 [i_2 + 3] [i_1 + 3]))))));
        }
        arr_8 [i_1 + 3] = (~1469922801);
        var_15 = ((-(236 < 241)));
    }
    var_16 = var_5;
    var_17 = var_7;
    var_18 = ((1979971491 ? 0 : 131056));
    #pragma endscop
}

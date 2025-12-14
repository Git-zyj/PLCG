/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 18144909998228614042;
    var_19 = var_15;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {
            var_20 = (min(((~(arr_3 [i_0]))), (((!(arr_3 [i_1]))))));

            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                arr_7 [i_0] [i_1] = ((((((arr_4 [i_1] [i_1]) ? var_9 : (-1033566804 | -1306)))) ? ((((!(arr_5 [i_0]))))) : (max((arr_0 [i_2 + 3]), (arr_1 [i_2])))));
                arr_8 [i_0] [i_0] [i_1] [i_2] = ((((((1033566804 + 0) ? (28475 != 1) : 1))) < (~2375971994)));
            }
            arr_9 [i_0] = ((-(((arr_5 [i_0]) ? -3395246992016833668 : 1))));
            arr_10 [i_0] [i_0] [i_1] = ((~(((arr_4 [i_1] [i_1]) & (arr_4 [i_0] [i_0])))));
            var_21 = (((max(((var_5 ? (arr_5 [i_1]) : (arr_4 [i_0] [10]))), ((var_13 ? 12599636322061140725 : var_9)))) > (((arr_3 [i_0]) ? (arr_3 [i_1]) : var_4))));
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
        {
            arr_13 [i_0] [i_3] [i_3] = -3076955510173872250;
            var_22 = (((((var_17 / (arr_12 [i_0] [i_0] [i_0])))) ? (arr_12 [i_0] [i_3] [i_3]) : (arr_12 [i_0] [i_0] [i_3])));
            arr_14 [i_3] |= (((min((arr_3 [i_3]), 235)) | ((min(-var_17, (var_14 + var_15))))));
        }
        var_23 = 1;
    }
    #pragma endscop
}

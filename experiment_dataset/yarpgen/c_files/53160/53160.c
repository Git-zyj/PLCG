/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((min((min(-7522, 127)), var_11)))));
    var_18 = var_11;
    var_19 = (((~var_16) & ((((0 ? var_11 : 1)) - 1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_20 = (((((-(arr_3 [i_1 - 4] [i_1 - 4])))) ? ((((arr_3 [i_1 - 2] [i_1 + 2]) ? (arr_7 [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1]) : var_3))) : (var_11 * var_1)));
                    var_21 = ((+((((arr_7 [i_0] [i_0] [i_0] [i_0]) && (arr_7 [i_0] [i_0] [i_1 + 1] [i_1 + 1]))))));
                }
                var_22 = (min(var_22, (min((((arr_6 [1] [1] [i_1]) ? (arr_3 [i_1 - 1] [i_1 - 3]) : (((!(arr_6 [i_0] [11] [i_0])))))), (arr_3 [i_1] [i_1])))));
                var_23 = (((((((arr_6 [11] [4] [i_0]) >= -655896291)) ? var_3 : (arr_7 [i_0] [i_1 - 4] [i_1 - 4] [i_1 + 2]))) & (arr_7 [i_1] [i_1 - 2] [i_1 - 2] [i_1])));
                arr_8 [i_0] = (min(89, (min(3, 55))));
            }
        }
    }
    #pragma endscop
}

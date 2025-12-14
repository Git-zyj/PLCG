/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((-29 + 2147483647) << ((((1 ? 63846 : 65)) - 63846)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_11 [i_0] [i_3] [i_0] [i_3] = ((arr_6 [i_1] [i_2] [i_0]) ? (arr_9 [i_3] [i_0] [i_0] [i_0]) : (min((((-13418 ? -101243124 : -13418))), var_8)));
                        var_16 = -7485812866122739894;
                        var_17 |= ((-(max(((var_10 ? (arr_1 [i_2]) : -1743756175)), 101243110))));
                        var_18 = (((1 ? ((101243130 >> (((-32767 - 1) + 32790)))) : 255)) << (((((-13418 ? -1743756175 : 10))) + 1743756196)));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_19 = (min(var_19, (((+(((arr_8 [i_2] [i_1] [i_0]) / ((-(arr_9 [i_0] [i_1] [i_0] [i_0]))))))))));
                        arr_14 [i_0] [i_0] [i_1] [i_2] [i_1] &= 101243117;
                    }
                    var_20 = ((+((((arr_4 [i_0] [i_0] [i_0]) < (((arr_9 [i_0] [i_0] [i_1] [i_2]) ? 16 : (arr_5 [i_2] [i_0]))))))));
                    var_21 = var_10;
                    var_22 = (max(var_22, ((((max(var_1, -var_8)) >= (((((((arr_12 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2]) ? var_14 : var_1))) ? ((46 ? 22 : 234)) : var_11))))))));
                }
            }
        }
    }
    var_23 = (((-var_9 - 18446744073709551615) ? var_0 : (max(var_0, (min(-101243124, var_0))))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((((var_0 ? var_0 : var_8))) ? (var_6 != var_10) : (var_5 >= var_1)))) && (((3221225472 ? -58 : -176667364))));
    var_13 = (min(var_13, var_9));
    var_14 = (max(var_14, (((var_11 ? (((((var_8 ? var_9 : var_1))) ? ((-176667384 ? var_8 : var_7)) : -0)) : (((-((var_3 ? 57 : var_2))))))))));
    var_15 &= ((((((((var_1 ? -18 : var_9)) <= -var_9)))) > var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_16 = (((((-(((2 <= (arr_10 [i_1] [i_1] [i_1] [i_0]))))))) ? ((((176667364 == ((var_5 ? var_9 : 16)))))) : (-9223372036854775807 + -var_1)));
                                var_17 = (((((-((5990 ? -3281935088502235603 : (arr_12 [i_1] [i_2] [i_3] [1])))))) ? (((((-(arr_7 [i_4] [i_1 + 1] [i_0])))) ? ((-(arr_10 [i_0] [i_2] [i_1] [i_0]))) : -var_5)) : var_5));
                                var_18 ^= (((-var_6 - -1) ? (((((((arr_1 [i_0]) ? var_4 : (arr_12 [i_3] [1] [1] [i_0])))) ? -3074036586 : (arr_11 [i_4 - 2] [i_1 + 1] [i_1] [i_1 + 1])))) : ((-((var_11 ? var_9 : -3281935088502235603))))));
                                var_19 = ((+((+(((arr_3 [i_0]) / (arr_2 [i_0])))))));
                                var_20 = ((((((((-2074087653 ? (arr_12 [i_0] [i_0] [14] [i_3]) : var_11))) ? (!8603) : (((var_9 || (arr_0 [i_0]))))))) && ((!(!127)))));
                            }
                        }
                    }
                }
                var_21 = ((-((-((var_0 ? var_2 : 16))))));
                var_22 = ((-(((((1757857254107024850 ? var_3 : var_10))) ? (var_9 * var_9) : -176667383))));
                var_23 = ((((((-5809 ? 1 : -3281935088502235609)) + (arr_1 [i_1 + 1]))) <= ((-(((arr_12 [i_0] [i_0] [i_0] [1]) ? -3281935088502235617 : -176667364))))));
            }
        }
    }
    #pragma endscop
}

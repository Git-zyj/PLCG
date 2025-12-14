/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-(0 & 0)));
        arr_3 [i_0] |= (((arr_0 [i_0 + 2]) >= 4294967295));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    var_18 = (max(var_18, 17071));
                    var_19 &= (max(((-(arr_4 [i_2]))), var_5));
                    var_20 = (max(var_20, -3255780921348787305));
                    var_21 = var_14;
                }
            }
        }
        var_22 &= (((((var_15 % var_17) > var_4)) || ((((max(var_0, 1)) & var_14)))));
        var_23 = (max(var_23, (((var_3 ? (((arr_4 [i_1]) ? (arr_4 [i_1]) : var_8)) : ((0 ? 2147483639 : (arr_4 [i_1]))))))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 7;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_24 = (min((!15923), (!2147483639)));
                                arr_24 [i_1] [i_1] [i_7] [i_1] [i_7] [i_1] [i_1] = ((2147483639 + ((var_9 - (arr_7 [i_5 + 2] [i_4 + 1] [i_1])))));
                                var_25 ^= (min((((1 == (max(2199023255551, 19))))), ((32767 * (var_1 < 32242)))));
                                arr_25 [i_1] [i_1] [i_7] = -32;
                            }
                        }
                    }
                    var_26 = (max(var_26, (((((((max((-2147483647 - 1), (arr_18 [i_4] [i_4]))) / ((4096 ? var_5 : (arr_18 [i_1] [i_4])))))) ? ((min((arr_15 [i_4 + 1] [i_4 - 1]), var_13))) : (max((max((arr_17 [i_1] [i_1] [i_1]), var_0)), (((var_1 ? -87 : 2147483614))))))))));
                    var_27 = (max(var_27, ((((((arr_7 [i_5 + 3] [i_5 + 3] [i_5 + 1]) | 82))) - (max(183279050, 1))))));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        var_28 = (max((!var_15), (max(var_12, (arr_26 [i_8] [i_8])))));
        arr_29 [i_8] = 1;
    }
    var_29 = (min(var_29, (!var_3)));
    #pragma endscop
}

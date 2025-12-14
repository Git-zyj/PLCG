/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= var_9;
    var_11 = (((((min(220, var_8))) <= var_3)) ? ((min(((var_3 ? var_0 : var_5)), var_1))) : (min((var_4 + var_7), var_4)));
    var_12 = (((min(var_5, (max(var_2, 761360783474244404)))) & (-18834 ^ 72057594037796864)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 = (~var_4);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                    {
                        var_14 -= (arr_0 [i_0 - 1] [i_0]);
                        var_15 = ((240 * ((var_0 >> (var_6 + 4258723857293529289)))));
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                    {
                        var_16 = (min(7680, (max((max(var_1, var_0)), (244754244980938749 || 22116)))));
                        var_17 = ((min(var_3, (arr_2 [i_0 + 1]))));
                        var_18 = ((~(max(((var_9 ? var_9 : var_7)), ((((arr_10 [i_0] [9] [i_4]) && 224)))))));
                        var_19 = (max((arr_10 [i_0] [i_0 + 2] [i_0]), ((var_0 & (arr_10 [14] [i_0 + 2] [i_0 + 2])))));
                        var_20 = (((((238 << (-244754244980938735 + 244754244980938752))) > var_1)) ? (((244754244980938758 || var_1) ? (arr_4 [i_0 - 1] [i_0 + 1] [i_0]) : var_8)) : (((~((var_0 | (arr_2 [i_1])))))));
                    }
                    var_21 = (((((1124800395214848 ? 4294967295 : (arr_11 [i_2] [i_1] [i_1] [i_0] [9])))) > (((min(var_9, (arr_5 [i_0 + 2] [i_0 - 1] [i_0 + 1])))))));
                    var_22 = ((241 | (((arr_8 [16] [6] [i_1] [12]) ^ var_1))));
                }
            }
        }
    }
    #pragma endscop
}

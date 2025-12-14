/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = (((((min(4142686738003106623, 155)))) ? (~15) : -63));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_9 [i_2] = ((1 ? 217 : var_14));
                        var_21 = ((-106 ? (arr_7 [i_0] [i_0] [i_2] [i_2] [i_2]) : var_9));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_22 *= (~21);
                        arr_13 [i_0] [i_2] [i_2] [i_2] [i_4] = (!var_6);
                        var_23 = ((14257467070435509546 ? (~-1) : ((var_12 - (arr_1 [i_0] [i_4])))));
                        arr_14 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (var_5 && var_11);
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_24 ^= (!12071021920068462287);
                                var_25 ^= (-4588124160383911100 > var_17);
                                arr_21 [i_2] [i_1] [i_2] = -120;
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    arr_24 [i_0] [i_0] [i_0] [i_1] = var_17;
                    var_26 *= (max((((((7597796447972963400 ? var_3 : -123))) ? 5781130237595624946 : (min(25, var_4)))), (((!(((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]) > var_3)))))));
                    arr_25 [i_0] [i_0] [i_0] = (min(((((arr_11 [i_0] [i_0]) + (max(-41, 2199023255551))))), (((var_4 + 8514854310472194521) >> (9691149495798820483 - 9691149495798820422)))));
                    var_27 = (11293143055115345426 ? ((var_6 ? ((9223372036854775807 ? 18010018924654215293 : (arr_20 [i_0] [i_0] [i_0] [i_0]))) : (((var_3 + (arr_23 [i_1] [i_1] [i_7])))))) : (min(((max(-1, 15))), ((~(arr_16 [i_7] [i_1] [i_7] [i_1]))))));
                }
            }
        }
    }
    var_28 = (min(var_28, ((min(var_15, (max(var_0, (var_12 <= var_1))))))));
    var_29 = var_13;
    var_30 = var_1;
    #pragma endscop
}

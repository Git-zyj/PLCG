/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = 3372549317456209265;
                var_13 = (max((arr_2 [i_0] [i_1] [i_1]), (arr_2 [i_1 + 1] [9] [i_0])));
                arr_5 [i_1] [i_1] [9] = ((((max((arr_2 [i_1] [i_1 + 1] [i_1]), (arr_1 [i_0])))) ? ((((((var_4 ? 15074194756253342322 : 65535))) ? ((13468485163866264229 ? var_0 : var_2)) : -var_6))) : (arr_0 [i_0])));

                for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
                {
                    var_14 = (max((((((arr_0 [i_1]) ? var_4 : var_1)) / 11)), (((arr_9 [i_1] [i_1] [i_0] [i_1]) - 1))));
                    arr_10 [i_1] [i_1] [i_1] [i_0] = arr_1 [i_2];
                    arr_11 [i_1] [i_1] = ((~(((!(arr_8 [i_1] [i_1] [i_1] [i_0]))))));
                    var_15 = (((((1 ? var_11 : 0))) ? ((((4212266434 != ((((!(arr_6 [i_1]))))))))) : 131071));
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                {
                    var_16 &= min((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))), var_9);
                    var_17 = (min(var_17, (~3372549317456209292)));
                    arr_15 [9] [i_1] [i_3] = ((+(((arr_8 [i_1 + 1] [i_1] [i_1] [i_1]) ? ((3503 ? var_3 : var_3)) : var_4))));
                }
                for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                {
                    arr_19 [i_1] [i_1] [i_1] [0] = ((-180148880 ? (arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]) : var_3));

                    for (int i_5 = 3; i_5 < 14;i_5 += 1)
                    {
                        arr_24 [i_5] [i_1] [i_0] = 0;
                        var_18 = (max(var_18, ((-(arr_2 [i_1 + 1] [i_1 + 1] [i_1 + 1])))));
                        arr_25 [i_0] [i_1] [10] = (arr_18 [11] [i_1] [i_5]);
                        var_19 = (max((((arr_9 [i_5 - 1] [i_1 + 1] [i_4] [i_1]) ? (arr_14 [i_1 + 1] [i_5] [i_5 + 2] [i_5]) : (arr_14 [i_1 + 1] [i_1 + 1] [i_5 + 2] [i_1 + 1]))), ((((arr_9 [i_5 - 1] [i_1 + 1] [i_4] [i_1]) - (arr_9 [i_5 - 2] [i_1 + 1] [i_5 - 2] [i_1]))))));
                    }
                }
                var_20 = (min(var_20, ((min(((max((arr_17 [i_1 + 1] [i_1] [1]), (arr_17 [i_1 + 1] [i_1] [i_1 + 1])))), (max((arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1]), (arr_17 [i_1 + 1] [i_1 + 1] [2]))))))));
            }
        }
    }
    var_21 |= (!((((((var_7 ? var_5 : var_6))) ? var_8 : ((var_5 ? var_8 : var_8))))));
    var_22 = ((var_8 ? var_8 : var_8));
    var_23 ^= ((((min(var_9, ((max(var_3, var_5)))))) ? 13468485163866264227 : -var_12));
    var_24 = (var_4 ? (((((var_12 ? var_8 : var_7))) ? 0 : (var_8 > var_7))) : var_0);
    #pragma endscop
}

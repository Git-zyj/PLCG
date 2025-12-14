/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_8 ^ (var_11 >> var_1))));
    var_15 = ((var_7 ? var_2 : 29924));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_1] = var_5;
                arr_5 [i_1] [i_1] [i_1] = ((((max((arr_0 [i_1 + 1]), var_11))) * var_11));
                var_16 &= (arr_3 [i_1] [i_0] [i_0]);

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_8 [i_2] &= 47724;
                    var_17 = (max((((((~(arr_0 [i_0])))) ? ((var_12 ? -4466 : 43)) : (arr_2 [i_1] [i_2]))), (((((13772 ? 0 : 1188692446)) > ((((arr_2 [i_1] [i_1]) >= (arr_2 [i_1] [i_1])))))))));
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 22;i_5 += 1)
                        {
                            {
                                var_18 = ((!((!(((arr_11 [i_0] [i_0]) && -6815466964003858399))))));
                                var_19 = var_11;
                                var_20 += (min(((min((arr_1 [i_1 - 1]), (!11)))), ((20 ? 3615320618 : 5772))));
                                var_21 = ((max(((((((-127 - 1) + 2147483647)) >> (15749 - 15738)))), (min((arr_14 [i_0] [i_1 + 2] [i_0] [i_0] [i_0] [i_4] [i_1 + 2]), 9983615253323852526)))) < (((-((6319983206077983159 ? 3615320636 : (arr_13 [i_0] [i_0] [i_3] [i_0] [i_5])))))));
                            }
                        }
                    }
                    arr_16 [i_1] = (((arr_9 [i_1 + 2] [i_1 - 1] [i_1 - 1]) > (~12126760867631568471)));
                    arr_17 [i_1] = (arr_3 [i_0] [i_1] [i_3]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 3; i_6 < 11;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 11;i_7 += 1)
        {
            {
                arr_26 [i_6] = (63 % 49792);
                var_22 = (((((((((arr_21 [i_7] [i_6]) ? -1188692446 : -53))) ? var_12 : (max(var_2, (arr_0 [i_7])))))) ? ((((-32767 == (arr_20 [i_7 + 1]))))) : ((-(arr_7 [i_6 + 1])))));
                var_23 &= ((((max(1188692443, (arr_11 [i_6] [i_6]))) & (arr_15 [i_7 + 1] [i_6 + 1] [i_6 - 2] [i_6 + 1] [i_6 - 2]))) * 56);
                var_24 = ((0 ? ((((arr_18 [i_7 + 2]) ? var_11 : (arr_14 [i_6] [i_6] [i_7] [i_7 + 2] [i_7] [i_7] [i_7])))) : (min(var_10, (max((arr_3 [i_6] [i_6] [i_6]), (arr_12 [i_6] [i_6] [i_6] [i_7] [i_6])))))));
            }
        }
    }
    var_25 = ((((((((var_7 ? var_4 : var_6))) < var_2))) == var_4));
    #pragma endscop
}

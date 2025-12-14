/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= ((16489 ? 16508 : -28));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                var_18 ^= var_16;
                var_19 ^= (arr_0 [i_1] [i_1]);
                arr_5 [i_1] = -28;
                var_20 = (min(var_20, (((((max(var_5, -var_3))) ? (min(-65, 4362862139015168)) : (((min(16487, -28)))))))));
            }
        }
    }
    var_21 = (min((max(((41463 ? var_9 : 2414288297038542053)), (((var_6 ? var_16 : var_16))))), (((var_5 ? var_14 : (var_12 || var_14))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            {
                var_22 = (max(var_8, (((((16490 ? (arr_1 [i_2]) : -16491)) < 21)))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_23 &= (min(((0 ? 1217174406700888261 : (min(var_15, var_8)))), (((var_11 ? -6343 : 32723)))));
                            var_24 ^= (arr_7 [i_2] [i_5]);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_25 &= ((14049929013357276387 ? var_15 : ((var_6 ? -27929 : (arr_17 [i_8 + 3] [i_3 + 4] [i_3 + 4] [i_3 + 4] [i_2])))));
                                var_26 = ((var_3 ? (((((14049929013357276368 ^ (arr_9 [i_3 + 2] [i_3 + 2] [i_3])))) ? var_2 : (arr_8 [i_3 + 3]))) : (((max(var_9, 1))))));
                                arr_26 [i_2] &= (((var_13 ? 116 : 96)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = (max(var_27, ((((-((var_0 ? var_13 : var_16))))))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, 1));
    var_21 = ((var_6 & ((((max(1, var_17))) | var_10))));
    var_22 *= (max((((((var_8 ? 1 : var_19))) || (!1))), (max(var_2, (!38383)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_23 = (max(1, ((((((arr_3 [i_1] [i_1] [i_0]) ? var_18 : var_9))) ? (!var_12) : (!-17)))));
                var_24 = (min(var_24, (((-956649813 ? var_16 : (!var_6))))));
                arr_4 [i_0] = (!var_8);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                var_25 = (((--1390391750) ? (((5 || (arr_1 [i_0] [i_0])))) : 27170));
                                var_26 ^= ((307923672 != ((max((min(var_12, (arr_6 [i_0] [i_1] [i_4]))), ((58 ? -1 : 65522)))))));
                                arr_13 [i_0] [i_3] [i_2] [i_0] [i_0] = -1836908454;
                                arr_14 [2] [i_0] [1] [1] [i_0] [i_0] = (((((arr_1 [i_0] [i_0]) != (arr_1 [i_3] [i_4]))) ? -66381675 : (min(var_13, 3845258686))));
                                var_27 ^= ((((((!3647278716) ? (!10258669635751774692) : (((!(arr_2 [i_3]))))))) || 8897080233440930744));
                            }
                            arr_15 [i_0] [i_0] [i_1] [i_0] = (8388607 ? var_16 : (~2984468557));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_8 [i_0] [i_0 - 2] [8] [i_0] = (((~var_12) ? var_2 : (arr_0 [i_0 - 2])));
                    arr_9 [i_0 + 2] [i_0 + 2] [i_1] [7] |= (((arr_3 [i_0 + 1] [i_0 - 1]) & var_0));
                }

                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    arr_14 [i_0] [i_0] [i_3] = (arr_3 [i_0] [i_1]);
                    var_13 = ((+((var_0 ? (var_5 <= var_11) : (arr_5 [i_3])))));
                    var_14 = (max(var_14, (((((-90 ? 4107771191429044667 : 1190369329)) | (arr_0 [i_0 + 1]))))));
                }
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] = ((4107771191429044667 ? 32767 : -32763));
                                var_15 = ((((((3468675586 ? 255 : 1)) <= ((var_8 << (((arr_19 [i_0 + 1] [i_0 + 1]) - 1086200967)))))) ? (((arr_10 [i_0 + 2] [i_5 + 1]) ? ((max(32762, var_4))) : ((var_12 ? var_7 : var_3)))) : (arr_4 [i_6] [i_5 + 1] [1])));
                                var_16 = (max(var_16, (((+(((35060 == ((max((arr_0 [7]), var_3)))))))))));
                                arr_23 [6] [i_4] [5] = ((~(((arr_19 [1] [1]) - var_3))));
                                var_17 += var_4;
                            }
                        }
                    }
                    arr_24 [i_4] [i_4] [1] [i_4] &= (arr_20 [i_0] [i_0] [2] [2]);
                    var_18 &= (max(((~(arr_18 [i_0 - 1] [i_0 - 1]))), (((var_6 ? ((var_5 + (arr_13 [i_4] [5] [i_0] [5]))) : ((384 << (var_1 - 3924841169))))))));
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        {
                            var_19 ^= (min(((((((32765 ? (arr_20 [i_0 + 1] [i_8] [i_1] [i_8]) : var_7))) ? var_0 : var_5))), ((var_6 ? var_10 : var_1))));

                            for (int i_9 = 2; i_9 < 10;i_9 += 1)
                            {
                                var_20 ^= (min((max((~var_3), (((arr_20 [3] [i_1] [i_1] [i_1]) ? (arr_13 [3] [i_7] [7] [i_9 - 1]) : (arr_20 [i_0] [i_0] [i_0 + 3] [8]))))), ((var_1 % (((-67 ? var_5 : 32765)))))));
                                var_21 = var_3;
                                var_22 = (min(((((((arr_29 [i_1] [i_7]) ? var_12 : var_12))) ? ((var_9 ? var_1 : 32765)) : (var_9 == var_0))), (((((var_0 ? (arr_21 [4] [6] [10] [6] [4] [6] [6]) : (arr_26 [i_0 + 2] [i_1] [i_8] [i_0 + 2])))) ? var_1 : (arr_27 [i_1] [i_1] [1])))));
                                var_23 = (max(var_23, ((((((~17847283541343125684) ? (~-32766) : (~var_4))) ^ (~var_4))))));
                                var_24 = var_0;
                            }
                            var_25 = (max(var_25, (((+(((var_12 ? (arr_25 [i_7] [i_1] [i_1]) : var_1))))))));
                        }
                    }
                }
            }
        }
    }
    var_26 |= 1;
    var_27 = var_8;
    #pragma endscop
}

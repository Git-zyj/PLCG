/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        arr_14 [i_0] [i_0] [i_1] [i_2] [i_3] [i_0] = (var_6 == (min((min(-1558571825, 18446744073709551615)), (arr_9 [i_0 + 3] [i_0] [6]))));
                        arr_15 [i_0] [i_1] = ((-(min(((min(var_4, var_4))), ((175 ? -1920255955 : 122))))));
                        var_13 = (min(var_13, (((((min((((var_9 ? var_2 : -32764))), 2097151))) ? -1 : (!-1783669107))))));
                        arr_16 [i_0] = min((((arr_5 [i_2] [i_0]) ? (((var_10 ? -2000111274 : 2147483647))) : ((3 ? -32744 : 2097165)))), (arr_12 [i_0] [i_3 + 3] [i_3 + 3] [i_0]));

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_14 = ((~(~32767)));
                            arr_20 [i_2] [i_1] [i_0] [i_2] [i_4] = (min(((0 ? (arr_12 [i_0] [i_1] [i_3] [4]) : var_2)), (-1 >= 23987)));
                            var_15 = (var_2 / -9223372036854775792);
                            var_16 = (min((arr_17 [i_0 + 1] [i_2] [i_2] [i_3] [i_3] [i_3 - 1]), 51257));
                        }
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                    {
                        arr_25 [i_0] [i_2] [1] = (!((min(((-1 ? (arr_6 [i_0]) : var_8)), var_5))));
                        var_17 = (min(((min(var_11, var_12))), (arr_19 [i_0 - 1] [i_0] [i_2] [i_5] [i_5])));
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                    {
                        var_18 = (min(var_18, (arr_26 [i_0] [i_1] [i_2] [7])));
                        var_19 = (min(-1, 1));
                        var_20 = (min(((((min(23997, 65532))) ? ((var_9 ? -6718445011953863196 : 3789807320334356610)) : (arr_10 [i_1]))), var_10));
                        arr_29 [i_0 + 1] [i_0] [i_1] [11] [i_2] [0] = (+-57);
                        var_21 = (min(var_9, ((min(((((arr_7 [i_0] [i_0] [i_6]) >= var_12))), 163)))));
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                    {
                        var_22 = ((80 ? 36112 : -3789807320334356631));
                        var_23 = ((((~(arr_6 [i_0])))));
                        var_24 = (max(var_24, var_4));
                    }
                    arr_33 [8] [i_0] = ((((((min(-114, -1685418296))) == ((64680 ? 18446744073709551595 : 29427)))) ? ((-(arr_26 [i_0] [i_0] [i_1] [i_2]))) : (arr_8 [i_0] [i_0 - 1] [i_0])));
                    arr_34 [i_0] [0] &= -5080;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                arr_40 [i_0] [i_8] [i_0] [i_1] [i_0] = (arr_23 [i_0] [i_2] [i_2] [i_0]);
                                arr_41 [i_0] [i_1] [i_0] [i_8] [i_9] = var_6;
                                arr_42 [i_0] = (((min(var_9, (arr_24 [i_0] [i_0 + 1] [4] [i_0]))) >= 13731436463623932662));
                            }
                        }
                    }
                    var_25 = (arr_3 [i_0] [i_0]);
                }
            }
        }
    }
    var_26 = ((var_3 ? ((var_8 ? (((min(1, var_4)))) : 1295925474)) : ((((!(4294967295 || var_11)))))));
    #pragma endscop
}

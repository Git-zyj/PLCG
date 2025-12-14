/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((~var_12) + 2147483647)) << (var_9 - 1)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_18 = (max(((-(arr_7 [i_2] [i_1 - 1] [i_2 - 2] [i_3 + 2]))), ((min(var_8, ((var_16 | (arr_9 [i_4] [i_2]))))))));
                                arr_16 [i_0 - 1] [i_2] [i_2] [i_2] [i_3 + 1] [i_3] [1] = (min(((((arr_5 [i_2]) >= (arr_6 [i_2 - 1] [i_0] [i_0])))), (min((((arr_5 [i_4]) ? var_8 : var_0)), var_3))));
                                arr_17 [i_1 + 3] [i_1 + 3] [11] [i_2] = ((((((var_13 ? var_2 : (arr_4 [i_1]))) >> ((var_14 >> (((arr_9 [i_2] [i_1]) - 17231)))))) > ((((min(61528, 1))) ? (1389554028 >= 1) : (min((arr_11 [1] [i_1] [i_2] [7]), var_14))))));
                            }
                        }
                    }
                    arr_18 [i_2] [i_1] [i_2] = ((~(arr_1 [i_0] [i_2])));
                }
            }
        }
    }
    var_19 = ((!var_5) == var_14);

    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_20 = ((((21641 != ((~(arr_22 [i_5]))))) || ((min((arr_19 [i_5] [i_5]), (arr_22 [i_5]))))));
        arr_23 [1] [1] = arr_21 [i_5];
    }
    var_21 &= (-var_9 < var_14);
    #pragma endscop
}

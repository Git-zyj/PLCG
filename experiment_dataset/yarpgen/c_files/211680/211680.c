/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_13 = (((((((((arr_2 [13]) ? (arr_7 [7] [i_1] [7] [i_1] [i_1]) : (arr_5 [i_1 - 1] [i_1 - 1] [i_3])))) ? ((max((arr_1 [i_3]), (arr_6 [i_0] [3] [i_2] [16])))) : (((225000408019341224 != (arr_2 [0]))))))) ? (arr_3 [i_1]) : ((~((~(arr_8 [i_0] [i_0] [13] [9] [i_0] [7])))))));
                        var_14 = ((~((~((-3189728061875606208 ? var_7 : (arr_5 [11] [11] [i_2])))))));
                        var_15 -= 26978;
                        var_16 = (min(var_16, (~-4507899612757222191)));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [15] [i_2] [i_2] [i_4] [i_0] = ((~(((16383 == ((var_1 ? (arr_15 [i_0] [3] [i_2] [i_4] [i_5]) : var_9)))))));
                                arr_17 [i_2] [6] [12] = (((arr_9 [i_4 + 1] [14] [i_5 - 1] [6]) != ((((max(var_11, 0))) ? (~var_6) : (((arr_6 [i_0] [10] [i_4] [i_0]) ? var_10 : (arr_12 [5] [5] [5] [i_4 - 2] [i_4 - 2])))))));
                            }
                        }
                    }
                    arr_18 [i_0] [16] [i_1] [i_2] = (((((!3189728061875606217) >> (587 - 574)))) ? (((((var_8 ? var_9 : -1538820402))) ? var_11 : var_6)) : var_0);
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_17 -= 32767;
                                var_18 = (min((~-32758), ((~(arr_3 [8])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (max((((!-26774) >> (var_11 >= var_7))), var_3));
    #pragma endscop
}

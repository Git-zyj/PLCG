/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 31160;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_0] = ((-10758 ? ((((1 > (arr_6 [i_1] [i_1] [i_2 - 1]))))) : ((1 ? (arr_4 [i_2] [i_2 - 1] [i_2]) : ((3863577481 ? 9223372036854775788 : (arr_3 [i_2 - 1] [i_1] [i_0])))))));
                    var_12 = arr_5 [i_1];
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_13 = 216;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_17 [i_3] [i_3] [i_4] [i_4] [i_4] = arr_9 [i_3] [i_3];
                                var_14 = ((-(((arr_5 [i_4]) ? 67 : (arr_0 [i_4] [i_0])))));
                            }
                        }
                    }
                    var_15 *= ((((((((-(arr_1 [i_3])))) ? ((2147483647 / (arr_2 [i_3] [i_0]))) : (min(2147483641, (arr_11 [i_0] [i_0] [i_0])))))) ? 43 : (!var_4)));
                    var_16 = (min((((-((127 ? (arr_4 [i_4] [i_3] [i_0]) : (arr_11 [i_0] [i_3] [i_0])))))), (((((-1 + (arr_11 [i_0] [i_3] [i_3])))) ? (arr_1 [i_0]) : (arr_9 [i_0] [i_0])))));
                    arr_18 [i_3] [i_3] [i_3] [i_4] = ((47249443 ? ((((arr_9 [i_3] [i_3]) + (arr_9 [i_0] [i_3])))) : ((((2147483647 >= (arr_4 [i_0] [i_3] [i_4]))) ? ((-2147483641 % (arr_4 [i_0] [i_3] [i_4]))) : 1488388414))));
                }
            }
        }
        arr_19 [i_0] = 127;
    }
    var_17 = ((((((var_3 || var_7) ? (min(2147483641, var_8)) : (((0 ? -1108924822 : 2200891945)))))) ? ((var_1 ? ((1 ? -29 : var_2)) : (716704967 || -16266))) : var_9));
    var_18 = 169;
    #pragma endscop
}

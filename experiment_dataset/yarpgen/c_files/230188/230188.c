/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_0;
    var_11 = (max((!-1), var_8));
    var_12 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = (((var_3 >= (arr_3 [i_0]))));

                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    var_14 = 0;
                    arr_8 [i_0] [i_0] = ((((1 && (arr_6 [i_2 - 2] [i_2] [i_2 - 2] [i_2 + 1]))) ? ((~(arr_6 [i_2 - 2] [i_2 - 2] [i_2 + 1] [i_2 + 1]))) : var_6));
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {

                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        var_15 |= (((min((((arr_12 [i_3] [i_1] [i_3] [i_4] [4]) <= var_0)), (-32760 || var_1))) ? var_9 : (min((max(0, (arr_2 [2]))), (((var_7 ? (arr_6 [i_4] [i_0] [i_3] [i_1]) : (arr_6 [i_0] [i_1] [i_3] [i_4]))))))));
                        arr_14 [i_3] [i_3] [i_3] [i_4] = 65534;
                    }
                    var_16 &= ((((min(1, var_0))) != (33 && var_9)));
                    var_17 = (i_3 % 2 == zero) ? (((var_7 >> (((arr_10 [i_3] [i_3] [i_3] [i_0]) - 6149))))) : (((var_7 >> (((((arr_10 [i_3] [i_3] [i_3] [i_0]) - 6149)) + 15757)))));
                }
            }
        }
    }
    #pragma endscop
}

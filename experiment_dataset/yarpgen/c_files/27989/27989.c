/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = (arr_5 [i_0 + 1] [i_1 - 1]);
                    var_15 = var_3;
                    var_16 = ((((((var_3 || 230) | (1 - 15)))) || var_3));

                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        var_17 = ((((((188 + 1) % var_1))) >= (min(((4095 ? 2885544502 : 128)), (arr_2 [i_0])))));
                        arr_13 [i_0 + 3] [i_1] [i_2] [i_2] [i_2] [i_3] = 6685643093137469774;
                        var_18 = (min(var_18, ((max((arr_0 [i_3 - 2]), (~-121))))));
                        arr_14 [i_3] [i_1] [i_2] [i_3] [i_3] = var_5;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        arr_19 [i_0] [i_1 - 2] [i_2] [i_4] |= (102 >= (var_14 * var_9));
                        var_19 = 1;
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_23 [i_0] [i_1] [i_5] [i_5] [i_5] [4] = (min((arr_15 [i_0 - 2] [i_1] [i_2] [i_1 - 1]), 228));
                        var_20 *= ((((((var_8 ? 1 : var_14)) ? (arr_12 [i_5] [i_1 - 2] [i_0 - 1] [i_0] [i_0] [i_0 + 2]) : ((var_3 ? var_11 : 488213781))))));
                        arr_24 [i_0] [i_0] [i_2] [i_5] = (arr_6 [i_0 - 2] [i_0 + 4] [i_0 + 3] [i_0 + 4]);
                        var_21 = (((((((-27245 ? var_1 : 1))) >= (min(30, 4189118917971163893)))) ? (((~4187230392371559998) ? ((var_10 ? var_14 : var_6)) : 4782618508404141641)) : (!var_9)));
                    }
                    var_22 = (min(var_22, -var_3));
                }
            }
        }
    }
    var_23 = (min(var_23, 1));
    #pragma endscop
}

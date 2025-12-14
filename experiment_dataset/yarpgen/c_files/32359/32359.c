/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (min(var_7, (((2031616 >> (10153416976001924691 - 10153416976001924689))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [10] [i_1] = (max((((4294967295 ? 1752073587 : 1))), (min(-1752073604, 72057525318451200))));
                    arr_8 [3] = (-((~(max(var_12, var_4)))));

                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {

                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            var_15 = (max((((!var_10) % (~var_7))), (((var_7 <= (((min(var_11, var_4)))))))));
                            arr_15 [i_0] [7] [i_1] [i_1] [i_3] [i_3] [1] = (max((!var_11), (max((!var_12), (!var_1)))));
                            arr_16 [1] [1] [i_2] [1] [1] [i_2] [1] = ((~(max(var_0, (max(var_7, var_10))))));
                            var_16 += ((!(!var_8)));
                            var_17 = (((!56849) ? (((!(var_4 != var_13)))) : ((~(~var_1)))));
                        }
                        for (int i_5 = 3; i_5 < 18;i_5 += 1)
                        {
                            var_18 = (max((max((!var_3), var_10)), (((-var_1 * (!var_3))))));
                            arr_19 [0] [6] [i_2] [i_3] = ((((((min(var_1, var_7)) > (var_0 || var_5)))) >> (-var_6 + 8060)));
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            arr_23 [13] [12] [12] [i_1] [i_0] = ((var_12 * ((-(max(var_7, var_9))))));
                            var_19 = (max(18374686548391100433, -1752073598));
                            var_20 = ((((max((var_13 & var_6), (max(var_8, var_13))))) ? ((13857112009596401193 | (~-2031607))) : ((((~var_8) | (var_0 | var_11))))));
                        }
                        var_21 = (max((~21267), (((-608563499 <= (~var_13))))));
                    }

                    for (int i_7 = 1; i_7 < 18;i_7 += 1)
                    {
                        arr_27 [i_7] [i_7] = max(-var_4, (var_12 + var_1));
                        var_22 = (max(-var_6, var_1));
                        arr_28 [i_7] [i_7] [i_1] [i_7] [i_0] = (((max(var_1, var_4))));
                    }
                }
            }
        }
    }
    var_23 = (((-8851139437547274078 > 4080) || var_4));
    var_24 = ((var_5 ? var_4 : ((-(!var_9)))));
    #pragma endscop
}

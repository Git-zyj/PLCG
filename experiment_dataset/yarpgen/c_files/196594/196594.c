/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_15 = ((9223372036854775807 != (~-1246525558)));
                                var_16 &= (((((((min(9, -7))) ? (~27453) : var_7))) ? ((min(-1246525558, 59))) : (((arr_13 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1] [i_1]) ? -6530 : (arr_13 [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_1])))));
                            }
                        }
                    }
                    var_17 = ((~(((((27876 ? 255 : 1048575))) ? (((arr_9 [i_2] [i_1] [i_0]) % 1265)) : (((max(109, var_8))))))));
                }
            }
        }
    }
    var_18 = ((255 ? -5528158237761750058 : 1246525548));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {
                var_19 = (min((((((arr_1 [i_5]) <= (arr_2 [i_6]))) ? ((((arr_17 [i_5] [i_5] [i_5]) ? var_4 : 11))) : (((arr_22 [i_6]) ? (arr_7 [i_6]) : var_8)))), ((max((39 == var_10), (~var_12))))));
                var_20 &= (var_14 != ((((max((arr_19 [i_5]), var_7))) ? (((!(arr_5 [i_6] [i_5] [i_5])))) : (max(var_4, 4190208)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 15;i_8 += 1)
        {
            {
                arr_27 [i_8] [i_8] = (min((max(((max((arr_3 [i_8 - 1]), var_2))), (min(17520498949008634772, (arr_6 [i_8]))))), (((((((arr_5 [1] [i_8] [i_7]) ? -2 : (arr_23 [i_7])))) ? ((max((arr_3 [i_7]), 1048562))) : ((~(arr_18 [i_7] [3] [i_7] [i_7] [i_7]))))))));
                var_21 &= 1;
            }
        }
    }
    var_22 = (((((3 ? 0 : -6499298344232106638))) ? 27869 : ((((max(-3225569591475667021, var_12))) ? 27876 : ((12 ? var_10 : 1))))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((max((~var_13), var_14))), ((((min(var_6, var_2))) ? -12 : var_3))));

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        var_16 = ((1371042524431112029 ? ((-(arr_0 [i_0 - 3]))) : (127 > 58907)));
        var_17 *= (min((((((((arr_1 [i_0 + 1]) < (-127 - 1)))) >> (var_2 - 11101)))), ((9223372036854775807 & (!var_0)))));
        var_18 = (max(var_18, ((-317156882599070327 ? -58 : -124))));
    }
    var_19 = ((var_12 ? var_1 : ((var_14 ? var_11 : var_12))));
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            {
                arr_6 [i_1] [i_2] = ((+(((var_14 || 82) ? (~var_13) : (arr_4 [i_1 - 1])))));

                for (int i_3 = 3; i_3 < 21;i_3 += 1)
                {
                    arr_10 [i_1] [i_1] = ((-652691968 ? -58 : 0));
                    var_20 &= (max((((!(arr_8 [i_1 + 3] [i_1 + 3] [i_1 + 4])))), var_4));
                }
                var_21 = ((((arr_2 [i_1 + 1]) ? var_4 : ((0 ? var_8 : var_4)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 4; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    var_22 = (~var_2);
                    var_23 = (((((6161360850111718169 && -1172617347) < (((arr_13 [i_5 - 2] [i_6]) ? var_5 : var_12)))) ? (((arr_2 [i_5 - 1]) % (arr_17 [i_4] [i_5 - 1]))) : var_6));
                    var_24 = (min(var_24, (((min(0, var_5))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 9;i_8 += 1)
                        {
                            {
                                var_25 = (max(var_25, ((((((var_1 ? (arr_21 [i_8 + 3]) : (arr_21 [i_8 - 2])))) ? (min(-1659332779, var_4)) : (((((arr_5 [i_5 - 1] [i_5 - 1] [i_8 - 1]) || (arr_21 [i_8 - 2]))))))))));
                                arr_27 [i_5 - 4] [i_5 - 4] [i_6] = ((((((arr_17 [i_5 - 3] [i_5 + 1]) ? var_6 : (arr_17 [i_5 - 3] [i_5])))) ? ((-99 ? -1 : -3465189249784335246)) : ((((8178246474010064201 ? var_6 : var_8)) ^ 208))));
                                var_26 = ((3465189249784335245 ? ((((-127 - 1) != 6830673827697436714))) : (((!((((arr_11 [i_5]) - var_14))))))));
                                arr_28 [i_4] [i_6] [i_6] [i_5 - 3] [i_5 - 3] = ((max((((arr_26 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) - 0)), (arr_14 [i_4]))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

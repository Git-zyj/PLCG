/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((((((~14609224623517448112) + var_4))) ? ((-(var_0 && 1))) : (max(((max(var_9, 39))), (max(198, var_5)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [19] [i_1] [i_1] |= (((var_0 ? (arr_6 [i_1] [i_0]) : (arr_2 [i_0] [i_1]))));
                    var_13 = (((((var_11 ? 120 : 123))) ? ((min(var_3, var_10))) : (!254)));
                }
            }
        }
    }
    var_14 = (min(var_14, (((-7 ? var_1 : ((-var_1 ? (var_11 + var_4) : var_5)))))));
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_15 = ((~var_0) | (min((arr_8 [i_3 - 1] [i_4 + 2] [i_6]), var_11)));
                            var_16 = ((((((arr_4 [i_4] [i_4]) ? (var_4 != var_7) : var_2))) ? (~var_5) : ((-(min(var_8, (arr_13 [i_3] [i_4] [9])))))));
                            arr_22 [i_4 - 1] [i_4 - 1] [i_3] = (((!((min(12555, (arr_20 [i_4] [i_4])))))));
                        }
                    }
                }
                var_17 = (((min((((var_7 ? var_2 : (arr_14 [i_3] [i_3] [0])))), (min((arr_16 [10] [i_4]), var_6)))) < var_7));

                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 0;i_9 += 1)
                        {
                            {
                                arr_31 [i_3 - 1] [i_4 + 1] [1] [i_8] [i_8] = ((-(((var_1 ? var_8 : var_5)))));
                                arr_32 [i_9] [i_3] [i_7] [i_8] [i_9] [i_8] = (((((var_2 * ((min(var_0, var_0)))))) ? ((((((arr_19 [i_9] [i_7] [i_3 - 1] [i_3 - 1]) ? (arr_21 [i_3]) : var_3)) == var_9))) : ((-var_11 ? ((max(1, 1))) : (arr_25 [i_4] [i_7] [1] [i_7])))));
                            }
                        }
                    }
                    var_18 = (((min((arr_7 [i_3] [i_3] [12] [i_3]), var_6)) / (var_6 - var_3)));
                    var_19 ^= (((min(-5375894557003973074, 123))) ? var_7 : ((var_2 ? ((-(arr_3 [i_4]))) : (((max(var_0, -123)))))));
                }
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    var_20 = var_4;
                    var_21 = ((~((((min(var_8, (arr_14 [i_4] [i_4] [i_4]))) < (254 + 38907))))));
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (((((var_5 ? (((~(arr_1 [i_0] [i_0])))) : var_0))) ? ((2241730335662836476 ? 5003982960765040804 : 3936657522)) : var_5));
        arr_2 [1] = ((((32 > (var_6 - 810668381))) ? var_7 : (1 | -810668380)));
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        var_14 = ((~(((arr_5 [i_1 + 2] [i_1 - 2]) ? (arr_5 [i_1 - 3] [i_1 + 3]) : (arr_6 [i_1 + 1])))));
        var_15 = (min((min(var_10, (arr_6 [i_1]))), (arr_4 [i_1 - 1])));
        var_16 = ((var_0 <= ((max(((((arr_4 [i_1]) ? (arr_4 [i_1]) : 7846))), 358309773)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    arr_12 [14] &= 31;

                    for (int i_4 = 3; i_4 < 18;i_4 += 1)
                    {
                        var_17 *= (((31 << (((-1 + 32) - 6)))));
                        var_18 = (min(var_18, var_0));

                        for (int i_5 = 1; i_5 < 16;i_5 += 1)
                        {
                            var_19 = (min(var_19, 358309773));
                            var_20 = (((var_5 - 3936657522) ? ((((min(-52, (arr_7 [1])))) ? ((4222563866 ? var_0 : var_11)) : (((0 ? 9223372036854775807 : var_8))))) : (arr_16 [i_2] [i_2] [i_2] [i_4] [i_5 - 1] [i_5 + 2] [i_2])));
                            arr_17 [i_1] [i_1] [i_3] [i_3] = ((var_2 <= ((var_11 ? (arr_14 [i_2]) : (arr_13 [i_1 - 3])))));
                            arr_18 [i_4] [i_4] [i_3] [i_4 - 3] [i_2] = 1206440350011815271;
                            arr_19 [10] [10] [i_3] [2] [16] &= -28305;
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            arr_24 [i_1] [i_2] [i_2] [i_4 + 1] [i_3] [i_2] [i_3] = ((~(arr_22 [16] [2] [i_1 - 3] [i_4] [i_4 - 1])));
                            arr_25 [i_1] [10] [i_3] [i_3] [i_4] [i_6] [10] |= ((-((((var_12 ? var_11 : var_11))))));
                            arr_26 [4] [i_2] [i_2] [i_3] [i_4] [i_6] = (((((8796093022208 ? (arr_16 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4] [i_4] [i_4 - 1] [i_4]) : var_5))) / (((arr_15 [i_4 - 1] [i_4] [i_4 - 2] [i_4] [i_4 - 3] [i_4]) ? (arr_16 [i_4 - 3] [1] [4] [i_4 + 1] [i_4] [i_4] [i_4 + 1]) : 1206440350011815271))));
                            arr_27 [i_6] [i_6] [i_3] [i_6] [i_2] [i_2] [5] = (-2241730335662836473 + -5346126082655374353);
                            var_21 += ((var_1 ? (arr_11 [4] [2] [4]) : -9223372036854775796));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_22 += (((min(-2241730335662836477, var_11)) / 1));
                            var_23 = (-127 - 1);
                            arr_30 [i_3] = var_7;
                        }
                    }
                }
            }
        }
    }
    var_24 = (((((var_6 < -52) <= -4655)) ? var_1 : var_11));
    var_25 += var_11;
    #pragma endscop
}

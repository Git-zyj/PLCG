/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = -74;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_15 -= var_4;
                            arr_13 [i_0] [i_1] [i_2] [i_0] = ((-(min(-11114, (arr_12 [i_0] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_0 + 1] [i_0] [1])))));
                            var_16 = var_2;
                        }
                        arr_14 [i_1] = (((((((var_6 + (arr_10 [i_0] [i_0] [i_2] [i_3])))) ? 17443 : ((7 ? var_14 : var_3))))) ? ((((42908 % 22628) << (((arr_4 [i_0 + 2] [i_0 - 2] [i_0 - 1]) - 46072))))) : (~0));
                        var_17 = ((var_8 & (((min(-64, (!var_4)))))));
                    }
                    arr_15 [12] [12] [i_1] = ((-(var_9 && 248)));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_18 = (min((12 < 17438), var_2));
                                arr_21 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1] = (!42892);
                                var_19 = ((568313954 ? (((24345 < ((1505757046 ? -4653496886959466425 : 195))))) : 11));
                                arr_22 [i_1] [i_2] [i_1] = (max((((arr_9 [i_0 - 2]) << (!var_8))), -0));
                                var_20 -= ((((-48092 ? (max(var_5, 17442)) : (((65341 ? -22 : var_7))))) % var_10));
                            }
                        }
                    }
                    var_21 = (min(var_21, ((((((var_0 <= (var_7 % var_10)))) + ((min((((22611 != (arr_18 [6] [6] [6] [5])))), 42930))))))));
                    var_22 = (max(var_22, (((((((max(var_1, var_12))) ? (((31274 ? var_11 : var_13))) : -var_5))) ? ((var_7 ? ((31 ? (arr_18 [i_0] [9] [1] [i_0]) : var_5)) : (var_9 < 65322))) : (((((min(var_2, (arr_4 [i_0] [i_0] [i_0])))) ? 213 : ((var_0 ? 4037 : var_11)))))))));
                }
            }
        }
        arr_23 [11] = (max((arr_7 [i_0] [i_0] [i_0]), (var_3 + 11)));
    }
    var_23 &= (((max((65341 >> 1), (17432 - 9223372036854775778))) > (((var_13 ? (var_7 / 60728) : 242)))));
    var_24 = ((((max(var_12, ((min(var_6, var_14)))))) ? (max(172, -var_11)) : ((((max(var_3, 64)) < var_13)))));
    var_25 += var_0;
    #pragma endscop
}

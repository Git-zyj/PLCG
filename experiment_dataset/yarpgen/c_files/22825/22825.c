/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (((max(var_10, ((max(4262400064, 32567231)))))) ? ((((var_1 ? var_1 : var_8)) | ((min(var_8, 1653866854))))) : (((((var_12 | 4262400066) != (var_1 | -7251470220140431517))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (((((max((max(12071, var_14)), ((max(var_13, 1653866865)))))) ? (((((max(var_0, 255)))) & 16596674666482371959)) : (-19 & -64))))));
                var_19 = (((((15 ? (arr_4 [5] [i_1 - 1]) : (arr_4 [i_1 + 1] [i_1 - 2])))) ? ((var_8 ? (arr_4 [i_1] [i_1 - 1]) : var_5)) : (((((arr_4 [i_1 - 1] [i_1 - 3]) + 9223372036854775807)) >> (-4 + 56)))));
                arr_5 [4] &= var_11;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_20 = (min((min(var_14, 28)), var_0));
                            arr_10 [i_2 - 2] [i_1] [i_2] [i_1] = (arr_0 [i_2]);
                            arr_11 [i_0] [i_1 - 2] [i_1] [i_3] = (min(((min(var_12, var_3))), (max(263, 117))));
                            var_21 = (min(var_21, (((((-(arr_4 [i_0] [8]))) >= (arr_8 [16] [i_1 - 3] [i_1 - 3] [i_1 - 3] [16]))))));
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 2; i_4 < 18;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            arr_16 [i_5 + 1] [i_5] [18] &= (max(((((max(var_4, 63))) | ((var_9 ? var_8 : var_10)))), (((min(var_7, 7145267961998816191))))));
            arr_17 [i_4] [i_5] = min((max((((arr_8 [i_5] [i_5] [i_5] [i_5] [i_5]) ? 255 : -8131639923132447418)), ((((arr_15 [i_4] [i_4 + 1] [i_5]) & var_12))))), var_13);
            var_22 *= var_1;
        }
        var_23 *= ((((~(var_15 & var_1))) >= (~87)));
        var_24 |= -1653866858;
    }
    /* vectorizable */
    for (int i_6 = 4; i_6 < 19;i_6 += 1)
    {
        var_25 *= var_7;
        var_26 -= (-var_3 >= (arr_19 [i_6] [i_6]));
        arr_20 [i_6] [i_6] |= (((1 * 37250) ? (arr_19 [i_6 + 1] [i_6 + 3]) : (((1 ? var_12 : 87)))));
        var_27 &= (((((var_10 ? var_4 : var_1))) ? 157 : (arr_18 [i_6 - 2] [i_6])));
    }
    #pragma endscop
}

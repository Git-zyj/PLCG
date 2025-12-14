/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((((var_10 ? (max(4294967295, 17)) : -22))), (((var_10 % var_0) % (~4239572443678228051)))));
    var_20 = ((var_10 ? (!0) : 1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_0] = var_17;
                    arr_8 [i_2] [i_2] [i_2] [i_1] = ((-((((((arr_1 [i_2] [i_1]) ? 1 : -11699))) ? (4239572443678228051 <= 43509) : (0 || 28223)))));
                }
            }
        }
    }
    var_21 = var_0;

    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        arr_11 [i_3] = ((!((((((0 ? 1 : (arr_10 [4])))) ? (~1) : (109 * 1868737321))))));
        arr_12 [i_3] = ((max(((1 ? var_15 : -4239572443678228051)), 7380)) | 24889);

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 9;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 9;i_7 += 1)
                    {
                        {
                            arr_24 [i_3] [i_3] [i_3] [i_4] [i_3] = ((arr_4 [i_3]) ? (((((var_7 ? var_12 : 507798660))) ? (max(var_15, 221319415)) : (!1))) : 121);
                            arr_25 [i_4] [i_4] [i_4] = (((max((max(-3231804232286873533, -4189063413094079338)), -24881)) / (max((((125 ? var_14 : 22021))), ((28 ? var_8 : -3776589132951608456))))));
                        }
                    }
                }
            }
            var_22 = var_4;
            var_23 = ((!(((max(24889, var_18)) <= (((1090509128 ? (arr_6 [i_4] [i_3] [i_3]) : -549694424)))))));
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            arr_28 [i_8] = (((((0 ? 2899938036 : var_2))) - (arr_27 [i_3] [i_8])));
            var_24 = ((3776589132951608455 - (!43522)));
        }
    }
    #pragma endscop
}

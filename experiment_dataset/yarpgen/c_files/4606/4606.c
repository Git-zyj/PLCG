/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (1815208715 > var_4);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 = ((!(~var_1)));
                    var_15 = var_5;
                    var_16 = (((((arr_0 [i_0]) ? (var_1 % var_6) : (arr_6 [5] [i_1])))) ? (arr_7 [i_0] [i_0] [i_0] [14]) : (~var_11));
                }
            }
        }
        var_17 = ((((((var_5 ^ var_11) >> (var_0 - 36734)))) ? ((((arr_5 [i_0] [i_0] [i_0]) || 10732536702562730335))) : (((var_7 > 7714207371146821281) >> (1045483108 - 1045483077)))));
        var_18 = ((((((arr_6 [i_0] [i_0]) > var_0))) >> (((((arr_6 [i_0] [i_0]) % 211217938270489024)) - 70783444177001787))));
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_19 ^= ((((((arr_1 [i_3]) ? (arr_5 [i_3] [i_3] [i_3]) : 549755748352))) ? var_1 : (max((min(var_8, var_9)), 1))));
        var_20 = 7714207371146821297;
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_21 = (!var_11);
                                arr_25 [i_4] [14] [i_6] [i_7] [i_6] [i_5] = ((~(!var_7)));
                            }
                        }
                    }
                    arr_26 [i_4] [i_4] [i_4] [i_4] |= var_10;
                    arr_27 [i_4] [5] [i_5] = (min((~1), var_6));
                }
            }
        }
        var_22 *= (((((var_11 > var_2) << (var_7 - 872718141))) % var_10));
    }
    var_23 = (((((var_12 > 3288756922873338393) ? (max(var_4, var_8)) : (var_2 % var_4))) > ((((var_7 < var_8) ^ var_12)))));
    #pragma endscop
}

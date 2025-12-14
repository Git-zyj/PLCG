/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] = (-1 ? (var_3 - 57871) : ((14847065127070387120 ? var_6 : 3599678946639164477)));
                    arr_7 [i_0] [i_0] = ((-120 ? (((var_9 % (~var_0)))) : ((1 | (209204250 | var_9)))));
                    var_12 = ((3832529549 < ((((36457 / 77) ^ (-8697 > var_4))))));
                    arr_8 [i_0] [i_0] [i_2] = (((13664774779193263672 < -103) ? ((~(var_7 % 11920))) : -65));
                    var_13 = ((~(((((24576 ? var_1 : -8697)) == (((2097151 || (-127 - 1)))))))));
                }
            }
        }
        arr_9 [i_0] [i_0] = ((!((!((min(7, 2420715285)))))));
        arr_10 [i_0] = ((((!(!3414066713407476142))) || (((2313064024 ? (max(var_2, var_1)) : ((var_7 ? 1521550174 : -120)))))));
        arr_11 [i_0] = ((((!var_4) || (!1426522943))));
        arr_12 [13] [i_0] = var_6;
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] = 89;
        arr_17 [i_3] [i_3] = -16210;
        arr_18 [i_3] = ((((((-127 - 1) + ((((-127 - 1) - 223)))))) - (((524287 - var_10) + (((-139678835495233947 ? 16210 : 127)))))));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
    {
        arr_21 [i_4] = ((~((((11 ? 2204 : var_1)) ^ var_7))));
        var_14 = (((((var_9 << ((((-120 ? var_4 : (-127 - 1))) + 2008913712))))) ? (((((var_6 ? 384 : 29))))) : (((var_0 ^ 146) ? (((var_2 >> (1218601642560175704 - 1218601642560175673)))) : (~31434521348234507)))));
        var_15 = (((((((min(6, var_8))) ? -var_1 : (var_8 % var_5)))) ^ ((var_5 & (((min(var_9, var_5))))))));
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
    {
        var_16 = (min(var_16, ((min(1, (min(7043787718960009807, (min(-31434521348234508, 2327803016)))))))));
        arr_24 [i_5] = ((~((min(1, var_7)))));
        arr_25 [0] [i_5] = ((((((var_4 < var_6) + (var_1 + var_1)))) && 1));
    }
    var_17 = (min((((var_7 ? var_0 : -7618600383521865989))), (((!((min(var_9, 2137550349))))))));
    #pragma endscop
}

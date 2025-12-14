/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_9 [i_0 - 1] [i_0 - 1] [i_0] = ((min(10461, -30)));
                    var_18 = min(var_9, var_7);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_19 = (21268 <= 74);
                    var_20 = 10209504177456816076;
                }
                var_21 = (min((((max(var_13, var_14)))), (var_5 && var_12)));
                var_22 = ((~(max((var_5 - -1), (~var_15)))));
            }
        }
    }
    var_23 = ((1023591281 - (((-1023591269 ? var_12 : (min(-1447842561, 1)))))));
    var_24 ^= (min(-15, (3271376030 | 1023591276)));
    var_25 = (((((3309105864907872882 ? 13 : 1))) ? 4 : ((((max(1, var_0))) ? var_9 : (!var_0)))));

    for (int i_4 = 2; i_4 < 10;i_4 += 1)
    {
        var_26 = (~var_5);
        arr_17 [i_4] [i_4] = (((min(var_15, (var_8 / var_17)))) ? (!17572313586276220586) : (198 * -107));
        arr_18 [i_4] [i_4] = (((-(min(var_0, var_8)))));
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 3; i_6 < 16;i_6 += 1)
        {
            arr_23 [i_5] = (((-12 / var_10) ? (((var_10 >= ((var_3 ? 3271376031 : 5736034268605712672))))) : ((max((!var_8), var_11)))));
            var_27 = (((233 ^ -107) ? ((var_14 & (((3271376031 ? var_2 : -20234))))) : (min(49, (1 | 15930669428186766199)))));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            arr_27 [i_5] [i_5] [i_5] = (((3271376031 != 13396365407040785115) * -1));
            var_28 *= var_15;
        }
        var_29 = (~var_16);
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
    {
        var_30 = (min(var_30, (((-(!-2))))));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    {
                        arr_39 [i_11] = var_14;
                        var_31 = (~var_16);
                        var_32 = (var_15 ^ -var_13);
                    }
                }
            }
        }
    }
    #pragma endscop
}

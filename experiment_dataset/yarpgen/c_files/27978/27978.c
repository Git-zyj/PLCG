/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_13 = (((-(16159 | var_9))));
        arr_2 [i_0] = ((!var_5) ? (arr_1 [i_0]) : (arr_0 [i_0]));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_14 -= ((+(max((~18446744073709551615), 18446744073709551607))));
        var_15 = (min(var_15, var_0));
        var_16 = (max(((((min(-22367, 1))) ? 27 : (min(46, 18446744073709551611)))), (((var_2 ? (!var_11) : 949065643)))));
        var_17 = (max(var_17, 16230));
    }
    for (int i_2 = 1; i_2 < 24;i_2 += 1)
    {
        var_18 = (max(var_18, (((((65527 ? var_1 : 518264796)))))));
        var_19 *= -var_4;
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_20 = (max(var_20, ((((((((max(var_10, 21))) ^ ((max(var_6, 0)))))) ? ((((max(var_7, var_5))) / 27)) : ((max((~235), ((var_10 ? var_8 : 2147483625))))))))));
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {

                        for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                        {
                            arr_20 [i_3] [i_3] = (min(((((max(var_7, (arr_7 [i_3])))) ? 1 : ((max(var_5, var_10))))), ((var_1 << (((arr_0 [i_3]) - 13961100213975369679))))));
                            var_21 = ((((min(4136512641, -14128))) ? ((64134 ? -18446744073709551607 : (arr_4 [i_7]))) : (((var_1 ? var_9 : ((min(-1, 1))))))));
                        }
                        for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
                        {
                            var_22 = ((~((var_1 ? (arr_9 [i_3] [i_6]) : -var_7))));
                            var_23 *= -1;
                            var_24 -= (arr_21 [i_3] [i_3] [i_8] [i_5]);
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 0;i_9 += 1)
                        {
                            arr_27 [i_3] [i_3] [i_5] [i_3] [i_9] [i_3] = (-16733 ? 1256007620 : 1);
                            var_25 = (min(var_25, (((2114583811 ? (17761 / 14336) : 1)))));
                        }
                        var_26 = (min(var_26, (((((-2231230722963212921 ? 1411284708 : 9223372036854775807)) >> (((max((min(var_2, 24967)), ((max(1, 14583))))) - 24938)))))));
                    }
                }
            }
        }
        var_27 = (((max(((4294967295 ? (arr_13 [i_3] [i_3] [i_3] [i_3]) : var_9)), 58380)) & (min((~778153307), var_8))));
    }
    var_28 = -var_9;
    var_29 *= (max(6, 7156));
    #pragma endscop
}

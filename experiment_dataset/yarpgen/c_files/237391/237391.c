/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (((((((-127 - 1) ? (-127 - 1) : 14648245895061171751))) ? var_13 : -55)));
    var_16 = -8651;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = (max(var_17, (((((!var_3) ? ((((arr_1 [i_0]) >= (arr_1 [i_0])))) : (((-127 - 1) / 8346))))))));

        for (int i_1 = 3; i_1 < 22;i_1 += 1) /* same iter space */
        {
            var_18 = ((((min((arr_0 [i_0] [i_0]), ((-8929742532279178008 ? var_9 : -32))))) ? ((min((((arr_4 [i_1]) ? 4160663741 : 134303554)), ((max(173, (arr_2 [i_1] [i_1]))))))) : (min(-51110, (max(var_3, -1470398507563161507))))));
            arr_6 [i_1] [i_1] = (max(8651, 112));
            var_19 = (min(var_19, ((((((-(arr_4 [4]))))) ? ((((19312 != 15509120756477472791) << ((((-(arr_5 [i_0] [20] [20]))) + 31390))))) : ((((arr_2 [i_0] [i_1 + 1]) * var_11)))))));
            var_20 *= (((-32767 - 1) == 15485));
            arr_7 [i_1] [i_1] = (((((((min(554814770, (arr_5 [i_0] [i_0] [i_0])))) ? (arr_0 [i_0] [i_1]) : (arr_3 [4])))) ? 1782915615 : ((11 ? (((max((-127 - 1), 56)))) : 848118885))));
        }
        for (int i_2 = 3; i_2 < 22;i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] [i_2] = ((((max(((15509120756477472791 ? 2356311171 : 32758)), (((4160663741 ? 63 : 59977)))))) ? (((~-1470398507563161507) ? (min(0, 36650969088519006)) : (-1723025303172362073 >= 1723025303172362061))) : 168));
            var_21 = (min(var_21, ((((var_6 && var_2) ? (((((~126) <= var_13)))) : ((((arr_1 [i_0]) ? 0 : var_6))))))));
        }
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        var_22 ^= ((4160663741 ? ((1470398507563161487 ? (-32767 - 1) : 15509120756477472803)) : -3789));
        var_23 = -2531033879;
    }
    #pragma endscop
}

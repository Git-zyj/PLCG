/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 = (arr_5 [i_0] [i_0] [5] [5]);

                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        var_16 = (((~var_11) ? var_10 : ((var_0 ? ((((arr_7 [7]) + var_6))) : 18356783954729855731))));
                        var_17 |= ((2241415589331645981 ? 2241415589331645981 : (~-632)));
                        var_18 = ((~((+((33801 ? (arr_9 [i_0] [i_1] [i_2] [i_2] [i_1]) : 13))))));
                    }
                }
            }
        }
        var_19 += ((max(0, (max(18446744073709551615, 2241415589331645970)))));
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        arr_12 [18] &= (max((((var_1 == (max((arr_11 [i_4]), var_12))))), (max(2241415589331645983, 4154137865908909028))));
        arr_13 [16] |= (((arr_11 [i_4]) <= ((((var_9 ? -628 : (arr_11 [i_4])))))));
        var_20 = (max((max(((var_2 * (arr_11 [i_4]))), (arr_10 [i_4]))), (arr_11 [3])));
    }
    for (int i_5 = 3; i_5 < 22;i_5 += 1)
    {
        var_21 = (((max((((34936 ? var_6 : (arr_15 [i_5])))), (max(2089802682439735830, (arr_15 [i_5])))))) ? var_7 : ((min((arr_14 [i_5 - 2]), (arr_14 [i_5 + 1])))));
        arr_16 [16] [i_5] = (1 * 0);
        arr_17 [i_5] = 11495;
        arr_18 [22] &= ((((var_4 <= 2241415589331645992) ? 5045706560903062082 : (arr_14 [i_5]))));
    }
    var_22 &= (max(var_5, (((~var_11) ? ((min(-256228202, 85))) : ((var_2 ? -2089802682439735831 : var_13))))));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            {
                arr_25 [i_6] [i_6] &= (((var_6 ? (max(var_0, (arr_23 [i_7] [i_6] [i_6]))) : (((256228202 ? var_11 : (arr_15 [i_6])))))));
                var_23 &= (max((max((arr_19 [i_6] [i_6]), 34923)), -112));

                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    var_24 &= min(((-66 ? ((var_3 ? 6565524714572033896 : var_10)) : -var_0)), (((((var_2 ? -4010703225668015950 : var_5))) ? (((arr_23 [9] [i_7] [i_6]) ? var_7 : var_1)) : ((((-17 + 2147483647) << (((-2089802682439735831 + 2089802682439735834) - 3))))))));

                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {

                        for (int i_10 = 4; i_10 < 15;i_10 += 1)
                        {
                            var_25 ^= var_1;
                            arr_33 [i_7] [i_7] [i_7] = ((var_11 ? (!var_11) : ((max(var_5, (arr_32 [i_6] [i_7] [i_8] [i_9] [i_10]))))));
                            var_26 ^= (arr_24 [i_6] [i_8]);
                        }
                        var_27 |= ((-((var_4 ? (min(var_9, 34934)) : (((var_10 ? 0 : var_12)))))));
                    }
                }
                arr_34 [i_6] &= -120;
            }
        }
    }
    var_28 = ((((min((!var_9), (max(var_8, var_0))))) ? (min(var_6, 256228208)) : ((-((var_12 ? 34933 : var_3))))));
    #pragma endscop
}

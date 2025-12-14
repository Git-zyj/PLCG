/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(262128, -262128));
    var_18 = var_14;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = var_2;
        var_19 += (~-794494114);
        var_20 &= ((((19484 ? 262128 : 9027074423931228385)) > (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_21 = ((var_3 ? ((max(((-262128 ? -262128 : (arr_5 [i_1] [i_1]))), (~1)))) : (max(var_12, (arr_1 [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    var_22 += (((((-1900044600 != 262119) ? (min(1006826780, (arr_5 [i_1] [10]))) : (max(-1732581866, 1900044599)))) >> (((max(1900044599, (1556103228 != var_11))) - 1900044579))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_23 += (max((((arr_4 [i_1]) ? ((0 * (arr_9 [i_3] [i_2] [i_3] [i_4]))) : (max(var_1, 1006826780)))), (((!(var_4 != 1))))));
                                arr_19 [1] [16] [7] [i_4] [i_4] [i_5] = ((-(min((((var_4 ? (arr_9 [14] [i_4] [i_3] [i_4]) : (arr_16 [i_5] [i_4] [i_3] [i_2] [7])))), (((arr_10 [i_1] [i_2] [i_5]) ? 12515 : (arr_13 [i_3] [i_4])))))));
                                var_24 = ((max((0 / 173), 8600320552340275250)));
                                var_25 = (min((((arr_15 [i_1] [i_1] [i_1] [6] [i_4] [i_5]) ? (arr_15 [i_4] [i_2] [i_3] [2] [i_4] [18]) : (arr_15 [i_1] [1] [i_3] [i_4] [i_4] [i_5]))), ((-(arr_15 [i_5] [i_4] [8] [i_3] [i_2] [i_1])))));
                                var_26 += ((!(((-(65 / 887891378))))));
                            }
                        }
                    }
                }
            }
        }
        var_27 &= (-262129 | 8600320552340275245);

        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            arr_22 [i_1] = (min(7783904482257002404, 120));
            var_28 = ((1 ? var_9 : ((min((arr_16 [i_1] [i_1] [i_1] [i_1] [9]), (arr_6 [i_1]))))));
            arr_23 [i_6] = 1;
        }
        /* vectorizable */
        for (int i_7 = 3; i_7 < 16;i_7 += 1)
        {
            var_29 = var_12;
            var_30 = (arr_15 [i_1] [i_1] [i_1] [7] [i_1] [i_1]);
        }
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            arr_28 [1] [14] = ((!((max((((arr_11 [i_8] [i_8] [i_8]) * 4088)), ((min(-7906561530454918290, 262128))))))));
            arr_29 [i_1] [13] [i_8] = ((((~((0 ? -887891379 : -49))))) ? (arr_10 [i_8] [i_8] [i_1]) : (max((!204), (~876421657))));
            var_31 = (((((min(225, 220)) ? (!1) : (min(-197306322, (arr_24 [i_1] [i_8])))))));
        }
    }
    var_32 = var_12;
    #pragma endscop
}

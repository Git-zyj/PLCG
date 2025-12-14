/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -var_15;

    for (int i_0 = 3; i_0 < 13;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_21 = (max(var_6, (var_14 / -1)));
            arr_7 [i_0] = (((1115354647 | 1365827502) > (((((!-44) > (12781575119697098825 & var_19)))))));
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_12 [i_0] [i_0 - 1] [1] = (((((min(var_18, var_16)) ? var_4 : 7680))));
            arr_13 [i_2] = (~((((max(var_16, 59))) + ((var_1 << (var_19 + 15))))));
        }
        arr_14 [12] = (max(((max(var_14, var_19))), ((min(var_4, var_3)))));

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            arr_17 [i_0] [i_3] [i_3] = (((((!-64) ? var_5 : var_18)) * ((max((64 == var_0), (min(var_16, var_7)))))));
            arr_18 [1] = var_15;
            arr_19 [i_0] = (max((((min(var_13, var_19)))), ((var_15 ? (((min(59, var_10)))) : (var_0 % var_16)))));
            arr_20 [1] [i_0] [1] = (((((max(var_11, var_11)))) / (59 > var_12)));
            arr_21 [i_0] [i_3] = (var_12 > (min(var_3, var_0)));
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            arr_24 [i_4] = (((min((min(0, var_15)), (min(var_6, var_11))))) ? var_3 : (max((~var_8), var_4)));
            arr_25 [i_4] = (((~var_19) ? (max(var_19, 11905976138572001250)) : (((min(-8569761503456233942, (!var_7)))))));
        }
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            var_22 = max(((((min(-59, -15908))) ? (~162) : (max(var_6, var_15)))), (max(-1421037447336169555, var_6)));
            var_23 = (min(var_15, 30848));
        }
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            arr_32 [i_6] [i_6] [i_6] = (min(var_11, (((-var_7 <= (var_15 * var_5))))));
            arr_33 [i_6] = ((-(max(var_2, 2903249145))));
        }
    }
    for (int i_7 = 3; i_7 < 13;i_7 += 1) /* same iter space */
    {
        var_24 = ((max((1 * var_10), (var_6 != var_2))));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    {
                        arr_45 [12] [i_8] [i_9] [i_8] = ((+(((var_19 || 22983) ? 244 : (63 == var_13)))));
                        var_25 = ((((((min(var_4, var_5)) % (var_17 >= 74)))) || ((max(var_10, var_4)))));
                        var_26 = var_9;
                    }
                }
            }
        }
    }
    var_27 = var_7;
    #pragma endscop
}

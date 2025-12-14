/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~var_13);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = ((((((arr_0 [12]) ^ var_5))) ? (arr_2 [i_0] [i_0]) : (!997661585100499871)));
        arr_4 [i_0] [i_0] = var_4;
        arr_5 [i_0] [i_0] = (((arr_1 [i_0] [i_0]) ? var_14 : -var_10));
    }
    var_18 ^= var_15;

    for (int i_1 = 2; i_1 < 16;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_19 = (min(var_19, ((-11361263818936987650 ? var_1 : (!var_0)))));
            arr_13 [i_2] = (((~(!2808372377))));
        }
        var_20 = (var_16 || (((-1189762134190255988 ? (arr_10 [i_1 - 1] [i_1] [i_1]) : 5306689755487474131))));
    }
    for (int i_3 = 2; i_3 < 16;i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] = (max((((((min((arr_2 [i_3] [i_3 - 1]), 0))) ? ((var_15 * (arr_15 [i_3 - 1]))) : var_15))), ((((min(11952921, (arr_2 [i_3 - 2] [i_3])))) ? var_15 : var_2))));
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    {
                        arr_26 [i_3] [i_5] [i_6] = (max((((1 || (arr_9 [i_3] [i_4])))), (((var_5 - 1486594919) ? (arr_21 [i_4 + 2] [i_3 - 1]) : (arr_22 [i_4] [i_4 + 2])))));
                        arr_27 [i_3] [i_6] = ((~(((~14684350378156965721) ? (((arr_11 [i_6]) ? var_7 : var_3)) : (((var_1 ? var_1 : 1486594919)))))));
                        var_21 ^= ((((-25 ? -116 : 116)) ^ ((~(arr_18 [i_6] [i_5] [i_4])))));
                    }
                }
            }
        }
        arr_28 [i_3 - 1] = ((((var_11 <= (((min((arr_25 [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1] [6] [i_3]), var_6)))))) || 1978542816));
    }
    /* LoopNest 3 */
    for (int i_7 = 3; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                {
                    var_22 = (max(var_22, (min((((3365556464179801416 <= (max(11049538013703236239, 255))))), (arr_30 [i_7 + 3])))));
                    arr_38 [i_7] [i_7] = 4095;
                    var_23 += (min(2686302863, (((~(((var_9 == (arr_29 [i_7] [i_7])))))))));
                }
            }
        }
    }
    #pragma endscop
}

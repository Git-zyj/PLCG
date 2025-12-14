/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (((((arr_0 [i_0]) * (((arr_0 [i_0]) / var_13))))) ? (((arr_1 [i_0] [i_0]) ^ (((arr_1 [i_0] [i_0]) ? 255 : 4)))) : (((((var_1 ? (arr_0 [i_0 - 2]) : (arr_1 [i_0] [i_0]))) == (min(17, (arr_0 [i_0])))))));
        arr_3 [i_0] &= ((((min(var_8, (arr_1 [i_0] [2])))) & 250));
    }
    for (int i_1 = 3; i_1 < 23;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (max((((!(arr_7 [i_1 - 2])))), ((var_3 ? (arr_7 [i_1 - 3]) : (arr_7 [i_1 - 2])))));
        arr_9 [i_1] [i_1] = (arr_5 [i_1]);
        arr_10 [i_1] = arr_4 [i_1];
        arr_11 [i_1] [i_1] = (((((arr_6 [i_1 - 2]) << (((arr_4 [i_1]) - 1114709318)))) != (arr_6 [i_1 - 2])));
    }
    var_20 = ((((((((var_10 ? var_1 : 255))) ? ((min(-5520, 18))) : (8388096 < var_10)))) ? var_1 : -var_16));

    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        arr_15 [i_2] [i_2] = 2147483637;
        arr_16 [i_2] [i_2] = (min(var_4, (arr_12 [i_2])));
        arr_17 [i_2] = ((((max(((max(14666, var_14))), (((arr_1 [i_2] [i_2]) ? (arr_5 [i_2]) : (arr_14 [i_2] [i_2])))))) ? ((~((4 ? 3300714966 : -1)))) : ((((arr_5 [i_2]) % (arr_1 [i_2] [i_2]))))));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
    {
        var_21 = (min(var_21, ((((((~1557372303) ? ((2884572167397937689 ? 2001094744 : 1557372304)) : (((4838968128149193755 ? 31 : 11))))) == (((arr_4 [i_3]) ? 1510256678 : (arr_0 [i_3]))))))));
        arr_21 [i_3] = (((var_4 + var_5) + (((((5 ? 2848802585 : var_0))) ? (-25212 - 847238715) : -var_13))));
        var_22 = (((((var_11 ? (6 / var_3) : var_0))) ? 9 : (arr_13 [i_3])));

        for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
        {
            arr_24 [i_3] = (var_17 / 50872);
            var_23 = ((~(~14)));
            arr_25 [i_3] = 0;
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
        {
            arr_29 [i_3] [i_3] = (arr_1 [i_3] [i_5]);
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 10;i_7 += 1)
                {
                    {
                        var_24 *= ((~(((511 & (arr_20 [i_5] [i_5]))))));
                        var_25 = (30 && 3894605375708574504);
                    }
                }
            }
            arr_36 [i_3] = max((50888 + -5520), (31082 | 917131998937125888));
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            arr_39 [i_3] [i_8] [i_8] = ((((min(((min(159, 11))), (max(251, 776569515))))) ? ((((min((arr_23 [i_8] [i_8] [10]), (arr_4 [i_8])))) ? 9223372036720558080 : ((((arr_13 [i_8]) ? var_19 : 245354856))))) : ((((arr_35 [i_3] [i_3] [i_8] [i_3] [i_8] [i_8]) << (314867529 - 314867529))))));
            arr_40 [i_3] = var_11;
            arr_41 [i_3] [i_3] = 245;
            var_26 = (min(var_26, ((max((min((arr_1 [i_3] [i_8]), 31)), 240)))));
        }
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
    {
        var_27 = ((min((arr_14 [i_9] [i_9]), (arr_23 [i_9] [i_9] [i_9]))));
        var_28 = (((((((arr_19 [i_9]) && 2147483647)))) == ((var_18 ^ (((var_1 ? 2147483647 : 132)))))));
        arr_44 [10] |= (min((((1 ^ 917131998937125888) << (((arr_42 [i_9]) - 110398812)))), (((min(0, 5))))));
        arr_45 [i_9] = (((((arr_23 [i_9] [i_9] [i_9]) ? (~var_15) : (arr_31 [i_9]))) & var_2));
    }
    var_29 -= (((min((max(var_12, var_6)), 255)) & 2951363477));
    #pragma endscop
}

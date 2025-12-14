/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(0, (max((1 <= 2106313052605196798), (max(var_15, var_5))))));
    var_20 = ((-((max(var_2, 80)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 - 2] = ((!-1) >> ((((max(80, var_5))) ? (0 < 6877462782348465852) : (min(var_10, var_11)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1 - 3] [i_0] [i_2] = (max((max(2827182168466588307, -var_7)), ((max(-876, ((max(var_5, var_5))))))));
                            var_21 = ((~(((min(9223372036854775807, -75)) * (min(-876, 3733119405836983200))))));
                            var_22 = (max(var_22, ((((min(1, -var_7)) >> (((((var_1 ? var_2 : 8650)) < (~var_5)))))))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                {
                    arr_17 [i_0] [i_0] [7] [i_4] = (max((max(var_0, 11663781433374092539)), var_11));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_23 = (max(var_23, ((((((var_5 >> (((var_11 | var_10) + 1153736218245662904))))) * var_15)))));
                                var_24 = (max(var_24, ((min((((9223372036854775801 != var_0) ? (max(var_16, var_4)) : (!876))), (max((max(1990904002127416447, var_1)), 9170624611458222841)))))));
                                var_25 = (max(-2013956575856680702, 63));
                                var_26 = ((((max(5574883290847565719, var_12)))) & (max((~-876), (var_4 && -21239))));
                                var_27 *= ((((min(var_5, 0)))));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                {
                    arr_25 [1] [i_7] = 68718428160;
                    arr_26 [i_0] [i_1] [11] [i_1] = 3869906614106651699;
                    var_28 = (min(var_28, ((var_0 < (((~1573751360) ? ((var_4 ? var_6 : var_0)) : ((((8921772870263059528 <= (-9223372036854775807 - 1)))))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 15;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 18;i_9 += 1)
        {
            {
                arr_33 [13] [i_8] [6] = var_15;

                for (int i_10 = 3; i_10 < 17;i_10 += 1)
                {
                    var_29 = ((-((max(-8921772870263059513, -21608)))));

                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        arr_41 [i_8] [i_8 + 2] [i_9 + 1] [i_8] = max(((max((max(64433, 3189475491)), -var_5))), -1220269332689646025);
                        var_30 = (min(var_30, ((max(7479345257894271439, 17681)))));
                    }
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        var_31 = max((min(((max(var_12, 43496))), var_14)), ((~(min(var_11, -45532047)))));
                        arr_45 [i_12] [i_12] [i_8] [i_8] [9] [9] = ((((1 ? 17676 : var_4)) % (((var_12 ? 2436666691649094157 : 872)))));
                        var_32 = (min(var_32, ((((((var_4 && (var_10 < var_7))))) % (max((max(1, var_4)), (!var_8)))))));
                    }
                }
                var_33 = (min(var_33, (((+(max((~39865), (~-7479345257894271439))))))));
            }
        }
    }
    var_34 = (max(((((min(16432787497852870938, 1))) ? 1 : (25618 * var_4))), (max((var_8 & var_18), (var_6 - 1)))));
    #pragma endscop
}

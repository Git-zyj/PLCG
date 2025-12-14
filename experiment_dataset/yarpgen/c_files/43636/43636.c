/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_21 = var_3;
                        var_22 = (((814779739139027773 ? -15 : -1263505388)));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        var_23 = var_0;
                        arr_18 [i_4] [1] [1] [i_4] = (((~((var_17 ? -123 : 25265)))));
                    }
                }
            }
        }
        arr_19 [1] &= (((((((var_18 ? 123 : 17))) ? var_8 : var_16))) & var_11);
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                {
                    var_24 = (((((238 || var_3) <= -9131)) ? (((((22 ? 218 : var_2))) ? var_19 : (((var_0 ? 238 : 1))))) : ((((!(var_17 < var_6)))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            {
                                var_25 &= ((((((0 ? 1 : 0))) ? (var_2 >> 10) : 23697)));
                                var_26 |= ((!(((var_0 ? 4 : var_18)))));
                                var_27 = (~17);
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 10;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 11;i_15 += 1)
                        {
                            {
                                var_28 = (((var_12 ? var_5 : 18422)));
                                var_29 = ((((min(-2030244614, 108))) ? 1 : (!-123)));
                                var_30 |= var_14;
                                arr_46 [i_15] [i_14 - 1] [i_12] [i_12] [i_7] = (((248 ? 1 : 1066906167855444588)));
                                arr_47 [i_14] [i_14] [10] [1] [i_12] [1] = ((((((((var_4 ? -26752 : 238))) ? ((var_15 ? var_9 : var_14)) : (9223372036854775807 && var_1)))) ? ((35048 ? var_7 : 7736148503810600068)) : (-32098 & var_17)));
                            }
                        }
                    }
                    arr_48 [i_7] [i_12] [3] = ((((123 ? 1216954405 : -8776445715069788543)) & (~0)));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 11;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 11;i_17 += 1)
                        {
                            {
                                arr_53 [i_12] [i_12] [i_13] [i_13] [i_17] [5] = ((((((0 ? 123 : -32665)) <= ((((-127 - 1) < 4294967276))))) ? (((-((var_12 ? var_1 : 1216954421))))) : (((~8943408789471470822) | var_13))));
                                var_31 = (((1 ? var_6 : var_6)));
                            }
                        }
                    }
                }
            }
        }
        arr_54 [i_7] = ((~((var_18 ? var_5 : var_7))));
        arr_55 [1] = (min((max((!var_4), var_1)), var_12));
    }
    for (int i_18 = 0; i_18 < 16;i_18 += 1)
    {
        arr_58 [10] = var_14;
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 16;i_19 += 1)
        {
            for (int i_20 = 1; i_20 < 13;i_20 += 1)
            {
                {
                    arr_65 [i_18] = ((~((1 ? (~var_2) : var_11))));
                    arr_66 [i_18] = -126;
                    arr_67 [i_18] = 1;
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((~(arr_4 [i_0] [i_0])));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_11 [i_2] = -var_0;
                    arr_12 [i_0] [i_2] = (((((1652188378 ? 32956 : 17725))) ? (((arr_5 [i_0] [i_0] [i_0]) ? 1 : var_5)) : ((((arr_9 [i_2] [i_2]) ? -1757028593 : var_11)))));
                }
            }
        }
    }
    var_13 = (~-var_0);
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            {
                var_14 ^= ((~(((-127 - 1) ? (~var_12) : -62645))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_15 = ((((arr_17 [i_3] [i_5] [i_3]) ? var_0 : (!var_6))));
                            arr_23 [9] [i_5] = ((~((5187 ? 262143 : (~1693635030)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        {
                            var_16 -= ((-(arr_13 [i_7])));
                            arr_29 [i_3] [i_4] [i_7] [i_8] &= ((((((~(arr_10 [i_3])))) ? 278308896 : (arr_19 [i_3] [i_4] [i_4] [i_8]))));
                        }
                    }
                }
                var_17 ^= (((~(!127))));
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        {

                            for (int i_11 = 0; i_11 < 12;i_11 += 1)
                            {
                                arr_36 [2] [i_4] [i_9] [i_10] [i_9] = (((!(~var_4))));
                                arr_37 [i_3] [i_9] [i_3] = ((((((var_7 ? var_12 : var_6)))) ? -21870 : (~var_6)));
                            }
                            var_18 *= (arr_8 [i_4]);
                            var_19 = (max(var_19, (((~(((~(arr_16 [i_4])))))))));
                            var_20 = (max(var_20, ((((((~(((!(arr_0 [i_3] [i_10]))))))) ? ((-var_2 ? (((arr_26 [i_4] [i_4] [i_4]) ? (arr_1 [i_3]) : var_1)) : ((((-127 - 1) ? -123 : 1043471574))))) : ((((~-124) ? (~98) : var_8))))))));
                            arr_38 [i_3] [i_3] [i_3] [i_9] = ((~(~1)));
                        }
                    }
                }
            }
        }
    }
    var_21 = ((~(~-5188)));
    #pragma endscop
}

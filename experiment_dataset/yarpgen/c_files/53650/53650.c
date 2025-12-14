/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = (max(var_17, 23));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, ((((min((min((arr_10 [i_0] [i_1 - 1] [i_2]), var_16)), -43)) == (((128 ? 55323 : 137))))))));
                                var_19 |= 56;
                            }
                        }
                    }
                }
                var_20 = (max((arr_3 [i_1 - 1] [i_0] [i_1 - 1]), (arr_3 [i_1 + 1] [i_0] [i_0])));
                arr_15 [i_0] [i_1] [i_0] = (max((!var_7), 5));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            {
                var_21 = (max((arr_13 [i_5] [i_5] [i_5] [i_5] [i_5] [i_6]), 10212));
                arr_20 [i_5] = (max(((~((-60 ? 27 : 91)))), 10207));
                var_22 = (max((var_14 ^ var_3), ((max(var_0, var_16)))));
                var_23 = var_15;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {
                            arr_25 [i_8] [i_5] [4] [i_5] [i_5 + 1] = ((((max((~var_4), (max(14804, var_16))))) ? (((((255 ? 3825969608 : 22))) ? ((231 ? var_6 : (arr_19 [1] [1] [i_8]))) : 18769341)) : (arr_24 [2] [i_6] [i_7] [i_8])));
                            arr_26 [i_5 - 1] [i_6] [i_5] [14] [i_7] = (~254);
                            var_24 = (min(var_24, ((min(((4467570830351532032 ? (arr_23 [i_5 - 1] [i_5 - 1] [i_7] [i_5 + 1]) : (arr_23 [i_5 + 1] [9] [i_7] [i_5 + 1]))), (((-(arr_22 [i_7] [i_5 + 1] [i_7])))))))));
                            var_25 = (min(((var_15 ? (arr_4 [9]) : 6)), (max(((var_14 & (arr_10 [i_5] [i_7] [i_8]))), var_15))));
                            var_26 = (((((((max(18446744073709551605, var_11)) <= (((max(55333, var_9)))))))) == ((-(max(0, 116))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

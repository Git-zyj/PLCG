/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(187, var_17));
    var_20 &= (-((max(255, (min(var_17, var_16))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = 1406874278;
                var_22 ^= (((arr_4 [i_0 - 1]) ? -105 : (min((267417959 >= var_13), (((arr_3 [4]) ? var_6 : var_4))))));

                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    var_23 += -1;
                    var_24 += ((((~(arr_3 [2]))) - (min(0, (max(606956223, var_5))))));
                }

                /* vectorizable */
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    var_25 = (arr_2 [i_1] [i_3]);
                    var_26 = (min(var_26, ((+((0 ? (arr_8 [i_3] [i_3] [i_0]) : var_3))))));
                }
                for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                {
                    var_27 = (min(var_27, ((min((min((min(2581184676631769582, (arr_2 [18] [i_1]))), (min(-6977651928174792884, var_8)))), (((!(arr_0 [i_0 - 1])))))))));
                    var_28 = (max(var_15, -83));
                    var_29 ^= 62;
                    var_30 ^= (((((-((min(1, (arr_0 [i_0]))))))) ? var_5 : ((-1 - ((var_0 ? 0 : 4294967234))))));
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                {
                    arr_16 [i_5] [i_5] [i_1] = -var_11;
                    var_31 = (max(var_31, 27));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                var_32 = (max(var_32, var_16));
                                var_33 = (min(var_33, 6));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

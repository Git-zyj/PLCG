/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (min(var_16, ((min(((var_2 ? (arr_0 [1]) : var_2)), ((max((~23147), (var_0 == 1)))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_2] = ((var_10 == (((!var_15) ? ((1 ? var_3 : var_5)) : ((((arr_8 [i_0] [1] [i_2]) == 57)))))));
                            var_17 = (((min(1, (arr_7 [i_0] [i_1] [i_2] [i_3])))) && var_3);
                            var_18 ^= (min((((arr_7 [i_3] [i_2] [i_1] [i_0]) | 0)), ((max(var_6, 91)))));
                            var_19 |= (min(((((max(var_8, (arr_4 [i_1])))) ? (-32767 - 1) : (min(var_3, var_3)))), ((((var_7 ? var_14 : var_14)) | var_4))));

                            for (int i_4 = 2; i_4 < 17;i_4 += 1)
                            {
                                var_20 = (((((min(209, var_3)))) ? var_11 : var_8));
                                arr_13 [i_0] [i_1] [i_2] [i_0] [18] &= ((max(4106189435, 1)));
                                var_21 = var_6;
                                var_22 += (((max((arr_6 [i_0] [i_1] [i_0] [i_4 - 2]), 6690192514799790580)) == (-543673235 == 32767)));
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_0] = (((((1 ? var_13 : var_12))) ? (~1335679715) : (((17514 && (arr_12 [i_0] [i_0] [i_1] [i_1] [i_1]))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_23 = (min(var_23, ((((var_8 == (min(var_8, 1)))) ? var_4 : (~var_11)))));
                            var_24 = (min(var_24, ((((min(32767, var_15))) ? (1 == var_0) : ((0 ? 1 : -413821478))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_25 *= var_8;
                                arr_27 [i_0] = (min(-4095, (((-32767 - 1) ? 52755 : (59 == 1778024120)))));
                                var_26 ^= (((max(-127, 57109))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 += (max(var_3, var_8));
    var_28 -= (~1);
    #pragma endscop
}

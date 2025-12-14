/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 = ((~(var_3 * 1)));
                                var_18 = (min(var_18, (((-(((var_8 != var_7) * ((var_10 ? var_10 : (arr_4 [i_1]))))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [10] [i_0] [i_0] = ((+((((arr_13 [i_1] [i_1] [i_1] [2] [6]) >= (arr_16 [i_1] [i_2] [i_2] [i_6]))))));
                                arr_19 [i_2] [i_5] [i_2] &= (((((((((min(127, -23807))) + 2147483647)) << 0))) ? (min(-23835, var_16)) : ((((((158 ? var_0 : 127))) ? 7 : var_10)))));
                                var_19 &= (((((23799 ? 1 : (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) != ((((7 > (arr_4 [i_6])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = var_6;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            {
                arr_24 [i_7] = (arr_20 [i_8] [i_8]);
                arr_25 [6] [8] [1] = ((var_2 < ((min(65, ((((arr_20 [i_7] [i_8]) > var_0))))))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 18;i_10 += 1)
                    {
                        {
                            arr_32 [i_7] [i_7] [16] [i_7] [i_7] = -1;
                            arr_33 [i_10] [3] [i_9] [17] [i_7] [i_7] |= (((~(min((arr_23 [i_7] [i_7]), (arr_31 [i_7] [i_7] [i_7]))))));
                            var_21 ^= (min((arr_27 [i_9] [i_10] [3] [i_10 + 1]), (((3598190803 ? 21 : ((12018859381763297909 ? 255 : 8634)))))));

                            for (int i_11 = 0; i_11 < 19;i_11 += 1)
                            {
                                var_22 = (arr_28 [i_10]);
                                var_23 -= (((((!var_9) && (arr_26 [i_7] [i_8]))) ? ((min(-1, 10))) : var_5));
                            }
                            for (int i_12 = 0; i_12 < 19;i_12 += 1)
                            {
                                var_24 = (min(((var_13 ? var_1 : var_4)), (-74 <= 186960690)));
                                var_25 = (arr_27 [i_12] [i_12] [i_12] [1]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

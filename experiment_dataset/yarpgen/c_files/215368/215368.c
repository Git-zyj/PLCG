/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (var_0 <= var_3);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = (((var_7 >= var_1) ? ((-(arr_1 [13] [i_1 + 1]))) : var_6));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_12 = (min((min(((min(-86, (arr_0 [i_3])))), (min(var_9, (arr_1 [i_1] [17]))))), (7680 == 8706036469494826836)));
                                var_13 |= (((-1 ? var_8 : (arr_6 [i_1] [i_1 + 1] [i_1]))));
                                var_14 -= (~0);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_15 *= (((((arr_3 [i_2]) ? var_3 : var_5)) | ((var_1 ? (~103) : (arr_11 [i_0] [11] [i_1 - 1] [i_1 + 2] [i_5 + 2] [i_1 + 2] [i_6 - 3])))));
                                var_16 = (max((((arr_9 [i_0 + 2] [i_0 + 2] [i_1] [i_1 + 1]) ? (arr_9 [i_0 + 3] [i_0 + 3] [i_0] [i_1 - 1]) : var_8)), (var_5 > var_0)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_17 = ((+((var_7 ? (~-13137) : (arr_10 [i_2] [i_7] [i_2] [i_2])))));
                                var_18 = var_6;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 0;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 21;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 23;i_11 += 1)
            {
                {
                    var_19 = ((var_7 + ((-52 ? var_2 : var_4))));
                    var_20 = 1;
                }
            }
        }
    }
    #pragma endscop
}

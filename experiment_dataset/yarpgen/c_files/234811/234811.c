/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_17 = (!3026325631);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, 30720));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_1] [i_2] [i_3] [i_4] [i_3] [i_1] = (arr_2 [i_0]);
                                arr_13 [i_0] [12] [i_4] [i_3] [i_4] = (((1 % -1) >> (88 - 76)));
                                arr_14 [i_0] [i_4] [i_2] [i_2] [i_2] [i_3] [i_4] = (min(-17697, 5801));
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] [i_2] = ((~((~((min(17697, (arr_11 [i_0 - 2] [i_1] [i_0] [i_0] [i_1]))))))));
                }
            }
        }
        var_19 = -1;
        var_20 = (-((((!(arr_5 [i_0] [11] [11]))))));
        arr_16 [15] = 2191520845;
    }
    for (int i_5 = 2; i_5 < 18;i_5 += 1) /* same iter space */
    {
        var_21 = min(((+(min((arr_0 [i_5] [i_5]), (arr_4 [i_5 - 2]))))), ((((arr_8 [i_5 + 1] [i_5] [18] [i_5]) ? (((-23521 + 2147483647) >> (arr_6 [8] [i_5] [i_5] [i_5 + 1]))) : ((min((arr_11 [i_5] [i_5 + 1] [i_5] [i_5 - 2] [i_5 - 1]), 1)))))));
        var_22 = (((((!1) % (min(1, (arr_10 [i_5] [i_5 - 2] [3] [i_5]))))) >> (((arr_20 [i_5]) % (arr_20 [i_5 - 1])))));
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_23 ^= (1 <= 99);
                                var_24 = ((!(arr_5 [i_6] [i_6 + 2] [i_6 + 2])));
                                var_25 = (min(var_25, -1));
                            }
                        }
                    }
                    arr_31 [i_6 + 1] [i_6] [i_6] &= ((!((min((arr_8 [i_5] [i_5 - 1] [i_5] [i_5]), (arr_8 [i_7] [i_7] [i_6] [i_5]))))));
                }
            }
        }
    }
    var_26 = ((((min(((min(var_9, 1))), (min(0, 624820581))))) ? 1 : (min((var_0 >> 1), ((var_5 >> (-3 + 25)))))));
    var_27 += (!-22);
    var_28 = -21;
    #pragma endscop
}

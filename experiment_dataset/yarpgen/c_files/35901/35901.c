/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (1849 + var_0);
    var_15 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 = 1862;
                    var_17 = (min(var_17, var_3));
                    var_18 = ((var_1 ? -120 : (arr_0 [i_1] [i_2])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 14;i_5 += 1)
            {
                {
                    var_19 += -108;
                    arr_16 [i_3] = var_6;
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        arr_20 [i_6] = (min(1849, ((~(max((arr_7 [i_6]), var_9))))));

        for (int i_7 = 4; i_7 < 11;i_7 += 1)
        {
            var_20 = (max(-74, 1));
            var_21 = (((((-var_1 ? (((var_11 ? -53 : var_13))) : ((-90 ? 14991 : 14236865114744710970))))) ? (arr_5 [i_6] [0] [i_7 - 1]) : 1));
            var_22 = (max(var_22, 110));
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            arr_26 [7] [i_6] [0] = ((+(((-1 <= 31) ? (arr_22 [i_6] [i_6]) : -76))));
            var_23 = (max(var_23, (((~((-((23 << (2592 - 2562))))))))));
            var_24 &= var_0;
            var_25 = (max(var_25, 10));
            var_26 = (max(((!(var_3 < var_11))), (((arr_23 [i_6]) || ((min(var_8, 16383)))))));
        }

        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            var_27 = (max((-1646558900 > 2147483647), 17));
            arr_30 [i_6] = ((73 ? ((-(arr_11 [i_6]))) : (arr_7 [i_9 - 1])));
        }
    }
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        arr_34 [i_10] [i_10] = (!172);
        var_28 = (arr_1 [i_10]);
        var_29 = var_1;
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += ((~((-((18404209617594702266 ? var_5 : var_18))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [5] = ((~(~1)));
                    var_21 = (((((~(~1)))) ? (arr_6 [i_1] [i_1] [i_1] [i_1]) : ((((~(arr_5 [5] [12] [i_0])))))));
                    var_22 += ((-(+-1)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_23 = ((~((~((1 ? (arr_11 [11] [i_1] [i_1] [6]) : var_9))))));
                                var_24 = (max(var_24, (((+((((((-2147483647 - 1) ? 1 : (arr_2 [i_2] [i_2])))) ? ((59 ? -30967 : (arr_13 [i_0] [3] [4]))) : ((-(arr_2 [i_1] [i_1]))))))))));
                            }
                        }
                    }
                    var_25 = ((((-((~(arr_6 [i_1] [i_2] [i_1] [0])))))) ? (~var_5) : ((~((~(arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                }
            }
        }
        arr_14 [i_0] [i_0] = (~127530668458379665);

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_26 = ((((!(arr_1 [i_0]))) ? (+-0) : (~125829120)));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 15;i_7 += 1)
                {
                    {
                        arr_24 [i_0] |= -29637;
                        arr_25 [i_0] [i_6] [1] [i_7 - 3] = (!29059);
                    }
                }
            }
        }
    }
    #pragma endscop
}

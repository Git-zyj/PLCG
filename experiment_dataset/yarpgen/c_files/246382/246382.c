/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_13 |= (arr_1 [i_0]);
            var_14 = (max(var_14, ((((arr_3 [i_0 - 3]) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 - 3]))))));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                {
                    var_15 = (min(var_15, 49));
                    arr_10 [i_0] [1] [i_3] = ((+((801736996 ? (((arr_6 [i_0]) ? (arr_9 [i_3] [i_3]) : (arr_5 [i_2] [11]))) : 15))));
                }
            }
        }
        arr_11 [i_0] = ((!(((49 ? 3 : var_7)))));
        arr_12 [i_0 + 1] [i_0] = (206 || -123);
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_16 ^= ((3399086371465064634 ? -67108864 : 413311664));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    {
                        var_17 &= (((~6765815908691049699) < (+-73)));
                        var_18 |= ((-(-23735 / var_3)));
                        var_19 = (((((!(arr_19 [i_7] [i_7] [i_7])))) < 60691));
                        var_20 = (max(var_20, var_10));
                    }
                }
            }
        }
        var_21 = ((var_4 - (((((4845 ? var_7 : var_5))) ? ((min(var_9, 253))) : (-23735 - 31)))));
    }
    var_22 = (!((min(((2542619835412206404 ? var_3 : -1807154355)), var_9))));
    #pragma endscop
}

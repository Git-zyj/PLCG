/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= var_13;
    var_16 ^= min(var_8, var_7);
    var_17 = 25452;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_18 = var_7;
                            var_19 = (min(-25452, (((arr_3 [i_0]) ? ((var_10 ? (arr_14 [14] [i_1] [0] [i_1] [i_4]) : var_10)) : ((max((arr_3 [i_0]), (arr_4 [i_4]))))))));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 16;i_7 += 1)
                    {
                        {
                            arr_22 [i_0] [i_0] [i_5] [i_6] [i_6] [i_0] = ((-(!var_7)));
                            var_20 ^= ((((((((arr_6 [i_0] [i_0] [1]) / (arr_9 [i_0] [14] [i_0] [i_7 + 1])))) ? ((25446 ? (arr_17 [13] [13] [i_5] [13]) : var_1)) : ((max(var_0, (arr_10 [i_5])))))) == (arr_12 [i_7] [i_7 - 1])));
                        }
                    }
                }
            }
        }
        arr_23 [i_0] = ((2980651211788003550 + (((min((arr_8 [i_0] [11]), var_11))))));
        var_21 = (max(var_3, ((-31464 ? ((var_8 + (arr_7 [i_0] [i_0]))) : ((max(5573707849665035643, var_14)))))));
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        arr_26 [5] = 1;
        arr_27 [12] [i_8] = (--18);
    }
    #pragma endscop
}

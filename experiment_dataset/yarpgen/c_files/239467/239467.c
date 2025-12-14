/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        var_13 = (max(9223372036854775807, 1));
                        var_14 = (max(var_14, ((((1073741823 == (arr_8 [i_2] [i_2] [i_3] [i_3])))))));
                        arr_9 [i_0] [i_1] [i_0] [i_3 - 1] = (min(var_6, ((((arr_8 [i_0] [i_0] [i_0 + 1] [i_0 - 1]) && (arr_8 [i_0] [i_1 + 2] [i_2] [1]))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    var_15 = (min(var_15, var_5));
                    arr_14 [i_5] [i_4 - 3] = ((max(86, 5194741378995744098)));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_16 = -4294967294;
                                arr_19 [i_5] [i_5] [i_5] [i_6] [2] = ((min(-79, -68)));
                                var_17 = (max(var_17, ((max(var_12, (((~(arr_16 [i_7])))))))));
                            }
                        }
                    }
                }
            }
        }
        var_18 = (max((arr_17 [i_0] [i_0 + 1] [i_0] [0] [i_0] [i_0 - 1] [i_0 - 1]), (arr_8 [i_0] [i_0] [i_0 + 1] [10])));
        var_19 = (((~(!11694))));
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        arr_24 [i_8] = (!2118349129);
        arr_25 [6] |= ((max((~67), (var_1 ^ var_11))));
        var_20 = (min((min((!var_11), 3750225611277130926)), ((((5194741378995744098 <= (-127 - 1)))))));
    }
    var_21 = var_2;
    var_22 = -157804966;
    #pragma endscop
}

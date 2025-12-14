/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_9));
    var_16 = ((((var_1 ? (~var_1) : (min(13683296408610421481, var_1)))) | (!var_2)));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 = (~(arr_0 [i_0]));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            arr_12 [i_4] [i_3] [i_0] [i_0] = (((~-126) ? ((((arr_4 [i_1]) > 0))) : ((((((arr_8 [i_4] [i_3] [i_1] [i_0]) - var_4)) != (((min((arr_1 [i_3] [i_3]), 1)))))))));
                            arr_13 [i_0] [0] [0] [i_1] [i_2] [i_3] [i_4] = (((((((!1) < (min(var_14, var_6)))))) % (min((((var_12 % (arr_7 [i_1] [i_1])))), ((4243468829 ? (arr_0 [i_4]) : (arr_4 [i_0])))))));
                            var_18 += ((((((((arr_2 [i_1]) ^ var_3))) ? (!var_0) : ((min(107, (arr_1 [11] [i_4])))))) <= (((arr_7 [i_0] [i_0]) ? (arr_6 [i_3] [i_3]) : (((!(arr_11 [i_1] [i_1] [6]))))))));
                        }
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_19 = (max(var_19, (((((65472 | (min(377417581598612020, 102)))) != 117)))));
                            arr_16 [i_0] [i_1] [i_2] [i_2] [i_1] = (~85);
                            var_20 ^= (arr_6 [i_5] [i_5]);
                        }
                        var_21 = (min((arr_9 [i_0] [5] [i_0] [i_0]), (min((min((arr_6 [i_0] [i_1]), 3758530323398779937)), (arr_5 [11] [i_1])))));
                    }
                }
            }
        }
        arr_17 [i_0] [i_0] = (((((var_6 ? (arr_4 [i_0]) : (arr_2 [4])))) != (min((arr_4 [i_0]), (arr_0 [i_0])))));
        var_22 ^= (min(((((263873894 ? (-2147483647 - 1) : var_11)))), (((((6589 ? -900212768 : 12))) ? var_12 : var_12))));
    }
    #pragma endscop
}

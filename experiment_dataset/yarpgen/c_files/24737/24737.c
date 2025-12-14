/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~-92);
    var_12 = (~(((!(~var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        var_13 = ((-((~(~var_1)))));

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_14 = (~9177824538521879300);
                            var_15 = ((~(((!(arr_1 [i_0]))))));
                            var_16 -= ((-(((!(~var_2))))));
                        }
                        arr_16 [i_1] |= ((((!(!var_1)))));
                        arr_17 [i_2] [i_3] = ((!((((-(arr_15 [i_0] [i_2] [i_0] [i_0] [i_0])))))));
                    }
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        arr_21 [i_2] [i_1] [i_1] [i_1] = ((!(~var_8)));
                        var_17 = ((!((!(~9774570827268992342)))));
                        var_18 = ((((!(((~(arr_20 [i_0] [i_0] [3] [i_2] [i_0] [i_0]))))))));
                        arr_22 [2] [i_2] = ((~(!-6571605129850572910)));
                    }
                    var_19 = (max(var_19, (~var_6)));
                }
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    arr_25 [i_0] [i_0] = (((-((-(arr_18 [i_0] [9] [i_0] [i_0] [i_0] [i_0]))))));
                    arr_26 [i_0] [i_1] [i_6] = ((((!(((-(arr_8 [i_0] [i_1] [i_1] [i_6]))))))));
                    var_20 = (min(var_20, (((-(((!(!-95)))))))));
                }
                var_21 = (max(var_21, (~-var_10)));
            }
        }
    }
    var_22 = ((~((~(~var_1)))));
    var_23 = ((!(((~(!var_7))))));
    #pragma endscop
}

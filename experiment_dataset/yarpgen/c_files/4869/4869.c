/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((min(((19410 ? var_6 : var_7)), (((19410 ? 71 : 19410))))), (min((~-7295542022653998641), var_0))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] &= ((min((min(-7295542022653998636, -3862038213593912510), ((-74 ? var_6 : 624145787))))));
        var_12 = (min(var_12, (((((~(arr_1 [i_0] [i_0])))) ? (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (((326890937 << (((min(3169190372, (arr_0 [i_0]))) - 3169190342)))))))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                arr_8 [i_0] [i_1] [i_2] [i_1] = (i_1 % 2 == 0) ? ((((arr_3 [i_0] [i_1] [i_2]) << (((arr_3 [i_0] [i_1] [i_2]) - 38616))))) : ((((arr_3 [i_0] [i_1] [i_2]) << (((((arr_3 [i_0] [i_1] [i_2]) - 38616)) - 5845)))));
                var_13 = 12423354653029444333;
            }
            var_14 = 83;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_15 -= (arr_0 [i_0]);

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_16 = (!3968076358);
                            arr_16 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = 1125776930;
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_1] = (((((624145787 ? 624145787 : 21)) < 68719476735)));
                            var_17 = (max((max((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]), (arr_9 [i_1]))), (max((arr_9 [i_1]), (arr_9 [i_1])))));
                        }
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_18 = ((92 << (7418431363828989461 - 7418431363828989461)));
            var_19 = ((1125776946 > ((max(var_8, var_10)))));
        }
    }
    var_20 = (-7295542022653998641 / 98);
    #pragma endscop
}

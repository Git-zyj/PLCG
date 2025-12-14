/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (var_5 & var_3);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_6 [i_1] [i_1] [i_0] = ((!((((arr_4 [i_0] [i_0] [i_0]) / (arr_4 [i_0] [i_0] [i_1]))))));
            var_12 = ((-((var_1 + ((var_10 ? (arr_1 [i_1]) : (arr_2 [i_0])))))));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_3 - 1] = ((~((min((arr_4 [i_2 + 1] [i_2 + 1] [i_2 + 1]), (arr_4 [i_2 - 2] [i_2 - 1] [i_2 - 1]))))));
                        arr_12 [1] [i_2] [i_1] [13] = (((arr_2 [i_1]) * (0 / -17201)));
                        var_13 = ((min(var_6, (arr_3 [i_3 + 1]))));
                        arr_13 [14] [14] [i_3 - 1] [i_3 + 1] = ((!((max(((max((arr_8 [i_3 - 1] [i_1]), (arr_5 [i_0])))), (min(var_10, var_6)))))));
                    }
                }
            }
            arr_14 [i_0] [i_1] = (((1963913594 + 255) > ((((var_6 ? var_3 : var_5)) % (var_5 || var_10)))));
        }
        arr_15 [i_0] [i_0] = ((((((min((arr_7 [i_0] [i_0] [i_0] [i_0]), (arr_8 [i_0] [i_0])))) + ((min(0, 0)))))) & (((((var_5 ? var_5 : 255))) ? (15351146368891330216 * var_0) : (((max((arr_9 [i_0] [i_0] [i_0] [i_0]), (arr_3 [16]))))))));
        arr_16 [i_0] &= (-(((1 ? 5499275469251566358 : var_10))));
    }
    var_14 = var_9;
    var_15 = var_7;
    var_16 = ((max((var_1 != 18446744073709551615), var_2)));
    #pragma endscop
}

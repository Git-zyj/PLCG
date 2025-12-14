/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_16 = ((+((var_8 - (((arr_1 [i_1]) - 9223372036854775799))))));
                        var_17 = (arr_7 [1] [i_1 - 1] [i_1] [i_2] [i_3]);
                    }
                }
            }
            var_18 ^= ((-45 ? (((+(((arr_8 [1] [i_1] [i_1 + 1] [8]) ^ (arr_3 [i_0] [i_0])))))) : (arr_7 [7] [i_0] [i_0] [i_1] [i_1])));
            var_19 = ((-((~(((!(arr_3 [i_0] [i_0]))))))));
            var_20 = (arr_4 [i_1] [i_1 + 2] [i_1 + 1] [9]);
            arr_9 [1] = -9223372036854775784;
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 11;i_4 += 1) /* same iter space */
        {
            var_21 = (max(var_21, ((((arr_7 [i_0 - 2] [i_0] [i_0 - 2] [i_4] [i_4]) ? (49 - 4294967295) : (((arr_10 [i_0] [i_0]) | (arr_1 [i_0]))))))));
            var_22 = ((-((~(arr_5 [i_0] [i_0] [i_4])))));
        }
        arr_12 [i_0] = ((((((((arr_10 [i_0] [i_0]) ? -4342573449010658196 : (arr_10 [i_0] [i_0]))) > ((((arr_10 [i_0 + 1] [i_0]) / 2038955836)))))) + ((-(arr_8 [i_0 + 1] [i_0] [i_0] [i_0 - 1])))));
    }
    var_23 = (max(var_23, var_8));
    #pragma endscop
}

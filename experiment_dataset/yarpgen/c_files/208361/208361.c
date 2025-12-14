/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= var_11;
    var_18 &= ((((~(max(-175, var_4)))) + ((((!(~var_5)))))));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_19 = (((~1403106240) == 1));
        arr_4 [i_0] = (min((arr_1 [i_0 - 1]), ((-(arr_1 [i_0 - 1])))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_20 += ((((((~((~(arr_1 [i_1]))))) + 2147483647)) << (((((((~47418) + 2147483647)) << (((((~25803) + 25807)) - 3)))) - 2147436228))));
        var_21 = ((!(((-(arr_0 [i_1] [i_1]))))));

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_22 = (~4194303);
            arr_11 [i_2] [i_1] [i_1] = (var_9 == -var_16);
            arr_12 [i_1] [i_1] = ((+((max(8191, ((max((arr_1 [15]), var_9))))))));
        }
        arr_13 [1] [2] = ((-(+-4485)));
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        arr_17 [i_3] = (~-4062512438145669001);
        arr_18 [i_3 - 1] [i_3 - 1] = ((-((((max(5093905536769388725, 87)) > -15703788150206315846)))));
    }
    for (int i_4 = 1; i_4 < 19;i_4 += 1)
    {
        arr_21 [i_4] [i_4] = max((~112766077), (var_16 - var_11));

        /* vectorizable */
        for (int i_5 = 1; i_5 < 16;i_5 += 1)
        {
            var_23 = ((18446744073709551615 >> (var_6 - 105)));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        {
                            var_24 ^= -6289771515553643649;
                            arr_32 [i_5] [i_5] [i_5] [i_5] [i_8] = ((-(arr_19 [i_4 - 1])));
                            arr_33 [i_4 + 1] [i_4 + 1] [i_5] [i_4] [i_4 - 1] = var_2;
                            arr_34 [17] [17] [i_5] [i_5] [17] [i_5] [i_8] = (~50187);
                            var_25 = (arr_26 [i_5 + 4] [i_7 + 1] [i_8 + 1] [i_5]);
                        }
                    }
                }
            }
            var_26 += (!(var_0 - 1));
        }
    }
    var_27 = ((-(min(var_12, -var_11))));
    #pragma endscop
}

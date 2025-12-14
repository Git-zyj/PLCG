/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    var_17 = (((var_0 < (-1 == -1))));
                    arr_9 [i_0] [i_1] = var_15;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = (((((7 ? 18446744073709551615 : 6))) ? var_14 : (max((arr_5 [i_1] [i_3] [i_4 + 1] [i_4 - 1]), (arr_12 [i_0] [i_4 + 1] [i_3 - 1] [i_3] [i_4 - 1])))));
                                var_18 = 4294967295;
                                arr_15 [i_0] [i_1] [i_2] [i_2 - 1] [i_0] [i_4] = ((!((-16 != ((-2 ? (arr_3 [i_0] [i_1] [i_0]) : (arr_6 [i_0] [i_2 + 1] [i_3 + 3] [i_4])))))));
                                var_19 = ((!((max(((var_2 ? 0 : (arr_12 [i_0] [i_4] [i_2 - 1] [i_3] [i_4 - 1]))), (arr_12 [i_1] [i_3 - 1] [i_3 + 3] [i_3] [i_4]))))));
                                arr_16 [i_0] [i_0] [i_2 + 1] [i_3] [i_4] [i_4] = ((((min(var_11, ((max(1, (arr_7 [i_0] [i_1] [i_2 - 1] [i_3]))))))) ? ((-((1 ? -7499708379180404622 : var_10)))) : (arr_6 [i_0] [i_1] [i_2 + 1] [i_3 + 3])));
                            }
                        }
                    }
                }
                var_20 = (max(var_20, ((max(var_2, 1)))));
                var_21 = 65525;
            }
        }
    }

    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        arr_21 [i_5] = (arr_19 [i_5]);
        var_22 = (((30 << (var_10 - 100))));
    }
    #pragma endscop
}

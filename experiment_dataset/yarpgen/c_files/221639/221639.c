/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_1));
    var_12 = (var_6 ^ var_9);
    var_13 = ((-((-3910 ? 261120 : 4294706171))));
    var_14 = -var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = (!var_0);
                var_16 |= ((((261108 - (arr_2 [8] [i_1 - 1]))) + (((var_3 - 25871362) + ((((arr_2 [2] [i_1]) ? (arr_0 [i_1]) : 4980)))))));

                for (int i_2 = 2; i_2 < 17;i_2 += 1) /* same iter space */
                {
                    arr_6 [i_0] [i_1] [1] = (max((~4294706181), (86 < 4409212575648785393)));
                    arr_7 [i_0] [i_0] [i_1] [i_0] = (arr_0 [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, ((min(127, -var_2)))));
                                var_18 = var_10;
                                var_19 *= var_2;
                            }
                        }
                    }
                }
                for (int i_5 = 2; i_5 < 17;i_5 += 1) /* same iter space */
                {
                    var_20 = (arr_14 [3]);
                    var_21 = (((((4294706178 > (min(1023, (arr_11 [i_5] [i_5] [i_5] [i_1] [i_5]))))))) != (min(var_0, (max(var_3, (arr_15 [i_0]))))));
                    var_22 = ((((arr_3 [i_0] [i_5]) ? ((var_0 ? var_3 : (arr_10 [i_0] [i_0] [i_1] [i_0] [1]))) : ((((!(arr_16 [i_0] [i_0]))))))) - -1570026201);
                    arr_17 [i_1] [i_1] [i_1] = (((((!((((arr_9 [i_5]) ? -124 : (arr_1 [i_5] [i_5])))))))) & ((-((16150888996851205975 ? 1570026200 : (arr_12 [i_0] [i_1] [i_5 + 2] [i_5]))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 17;i_7 += 1)
                        {
                            {
                                arr_22 [i_1] = (arr_14 [i_0]);
                                var_23 = ((((((((var_6 < (arr_1 [i_1] [i_6]))) && (((-(arr_1 [i_0] [i_0])))))))) / (min(-1781610275701511794, (arr_19 [i_1 - 1] [i_5] [i_6] [i_7 + 2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

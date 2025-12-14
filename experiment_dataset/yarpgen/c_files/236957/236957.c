/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -2017766806;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0 - 2] [i_0] = ((-((-((max(44203, 7761)))))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_8 [i_1 + 2] [i_1 - 1] [i_1] = ((2017766813 >> (((((-2017766827 + 2147483647) << ((var_0 ? 1 : 1)))) - 259433630))));
                    arr_9 [i_1 + 1] [i_1] [i_1 + 1] = -1;
                    arr_10 [i_0] = (((arr_2 [i_1 + 1] [i_1 + 2]) + ((((arr_2 [i_1 - 1] [i_1 - 1]) ? (arr_0 [i_0 + 2] [i_0]) : 0)))));
                    arr_11 [i_0] [11] [13] [i_2] = ((((1 || (arr_1 [i_1 - 1]))) && (((1858452105 ? 25165824 : 1)))));
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_22 [i_4] [i_1] [i_1] = (((-6473118977522163312 ? -2017766845 : -62)));
                                var_19 = (max(var_19, (((-(--223))))));
                            }
                        }
                    }
                    var_20 = (min(var_20, (((min((max(-847029417, (arr_4 [i_0]))), (arr_2 [i_0 - 1] [i_0 + 2])))))));
                    var_21 = (min(((var_10 ? (19665 == -1858452105) : 0)), (0 - 14653)));
                }
            }
        }
    }
    var_22 = 222;
    #pragma endscop
}

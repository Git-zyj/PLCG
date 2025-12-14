/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!(((-2103448357633167457 ? 253 : (((var_13 + 9223372036854775807) >> (var_5 - 34))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = ((((((((-57 / (arr_4 [i_0] [i_1])))) ? (arr_2 [i_0] [i_1]) : (!var_11)))) ? -2103448357633167445 : ((((!(arr_2 [i_0] [i_0])))))));

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [i_2 - 1] = (((((arr_0 [i_0] [i_1]) % 4737523810853261908)) << (((arr_2 [i_0] [i_2 - 1]) ? 0 : (arr_0 [i_2 + 1] [i_2])))));

                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        var_16 = (min(var_16, (arr_10 [i_0])));
                        var_17 = var_4;
                    }
                    arr_11 [i_2] [i_1] [i_0] = (min((min((((!(arr_8 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2])))), (((arr_2 [i_0] [i_2]) & 0)))), ((~(max(var_4, (arr_8 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2])))))));
                    arr_12 [i_0] [i_0] [17] = (!var_3);
                }
                var_18 = -251241066;
            }
        }
    }
    var_19 &= (((var_8 ? var_13 : (!4737523810853261910))));
    #pragma endscop
}

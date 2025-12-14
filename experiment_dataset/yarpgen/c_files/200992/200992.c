/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(-124, -var_6));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((~4294967295) ^ (max((arr_0 [i_0]), (arr_2 [i_0] [i_0])))));
        arr_4 [i_0] = var_5;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (max((17603300649566338275 | 104), (((!((((((arr_6 [i_1] [i_1]) + 2147483647)) >> (((arr_5 [i_1]) + 106))))))))));
        var_18 = (max((((arr_5 [i_1]) ^ var_14)), 50046));
        var_19 += (((-1797188250 && (arr_0 [i_1]))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 7;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 8;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            arr_17 [2] [6] [1] [1] [6] = (-2147483647 - 1);
                            var_20 = ((31 ? 536870911 : 301782698307474651));
                        }
                    }
                }
                var_21 *= (max((((((((arr_9 [i_2] [i_3]) ^ (arr_1 [i_2] [i_2]))) + 9223372036854775807)) << (((((var_13 + 2147483647) >> (var_5 - 90))) - 4194303)))), var_13));
                arr_18 [0] = ((arr_2 [i_3 + 3] [i_3 - 3]) != (min(-124, 18446744073709551615)));
            }
        }
    }
    var_22 = var_4;
    #pragma endscop
}

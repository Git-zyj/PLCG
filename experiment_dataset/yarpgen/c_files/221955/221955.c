/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] = var_10;
                var_18 = (((var_0 + 2147483647) >> (1 > 1962870323)));
                var_19 = ((!((var_2 || (((1877520333 ? 23894 : 32)))))));
                arr_6 [i_0] [i_1] = (max((min(0, (arr_3 [i_1 + 1] [i_1 - 2]))), ((min((arr_1 [i_0]), (arr_3 [i_1 - 2] [i_1 - 2]))))));
            }
        }
    }
    var_20 = (min(var_20, (((((((var_11 || var_12) + 4))) != (min(9223372036854775807, (-9223372036854775807 - 1))))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    var_21 = (max(var_21, ((((((9223372036854775796 ^ var_4) <= -4)) && (((var_16 ? (arr_14 [i_2] [i_3] [i_2]) : (arr_15 [i_2] [i_3])))))))));
                    var_22 ^= (arr_15 [i_2] [i_2]);
                    var_23 = (max(var_23, 1));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_24 = (!var_0);
                    var_25 |= -1;
                    arr_18 [0] [i_3] = ((var_15 || ((max((((arr_11 [i_3] [i_5]) ? var_1 : 9223372036854775807)), var_3)))));
                    arr_19 [i_2] [i_3] [i_5] [i_2] |= (((((max((arr_17 [i_2]), (arr_8 [i_2]))))) ^ (min(var_14, (arr_9 [i_2] [i_2])))));
                }
                var_26 = (((((65535 ? 16 : (arr_3 [i_2] [13])))) ? ((min((var_14 && var_2), var_10))) : ((~((~(arr_0 [i_3])))))));
            }
        }
    }
    #pragma endscop
}

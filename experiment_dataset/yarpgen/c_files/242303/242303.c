/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_20 += (-110 | 511);
                var_21 = (max(var_21, (((-110 ? -3039801654999263008 : (max(((252 ? 5348 : (arr_3 [i_1]))), (-1405712020 <= var_7))))))));
                arr_6 [i_0] [i_0] [i_0] = ((-819396810 ? 255 : 18446744073709551615));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_22 = (min(14586687477453867437, -1));
                            arr_12 [i_0 - 1] [i_3] [i_2] = (max(((max((arr_1 [i_0] [i_0 + 3]), 7))), ((~(arr_8 [i_0] [i_0 + 1] [i_0 + 1])))));
                            arr_13 [i_0] [i_3] [i_3] [i_3] [i_3] [i_3] = (+((((((-1 + 2147483647) << (1593699668 - 1593699668)))) ? (arr_4 [i_0 + 3]) : -35)));
                            var_23 = (min((((arr_5 [i_0 + 3] [i_0 + 2]) ? ((((arr_10 [9] [i_1] [i_3]) <= var_11))) : (arr_1 [i_0 + 1] [i_0 + 1]))), (min(1637424954, 24303))));
                        }
                    }
                }
            }
        }
    }
    var_24 = 168;
    var_25 = (~-1405712020);
    #pragma endscop
}

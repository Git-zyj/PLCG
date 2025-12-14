/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] [i_2] = 4294967292;
                    var_15 += 0;
                    var_16 += 244;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            {
                var_17 = (((arr_12 [i_3] [i_4] [i_3]) ? (arr_12 [i_4] [i_3] [i_3]) : (arr_12 [i_3] [i_4] [i_3])));
                arr_14 [i_3] [i_4] [i_3] = ((!((max(((32755 ? (arr_11 [i_4]) : 11042117286830021357)), (((252 ? 238 : 2))))))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 17;i_7 += 1)
                        {
                            {
                                arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = (min(((~(arr_21 [i_7] [i_7] [i_7 - 4] [i_7 + 2]))), (max(252, (arr_21 [i_7] [i_7] [i_7 - 2] [i_7 - 3])))));
                                arr_25 [i_3] [i_6] [i_5] [i_7] [i_3] = ((((((!(arr_15 [i_3] [i_4] [i_5]))))) % (~9299404967815836165)));
                                var_18 = (((arr_23 [i_3] [i_3] [i_3] [i_3] [i_3]) > (((arr_23 [i_6] [i_7] [i_7] [i_7 - 3] [i_7 + 2]) % 13426))));
                                var_19 = ((max((arr_16 [i_3]), (arr_19 [i_7] [i_7] [i_7] [i_7 - 3] [i_3]))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= ((((((max(var_4, var_9)) >> (var_12 - 17188203563803299953)))) ? (((min(226, 1)))) : (~var_2)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [2] [i_1] [1] [i_2] = (~var_3);
                    var_16 = 255;
                    arr_8 [i_0] [7] = (min((min(959186767391815886, (arr_4 [i_0] [i_0]))), 1));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 15;i_5 += 1)
            {
                {
                    var_17 = (arr_10 [16]);
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_18 |= (((min((((arr_16 [i_7] [i_7] [i_7] [i_7]) * var_12)), (arr_15 [9]))) > (var_12 << var_7)));
                                var_19 = (min(-104, (((((min(0, 959186767391815886))) ? var_10 : 1)))));
                                arr_24 [i_5] [i_5] [i_5] [i_5] [i_5] = (min(var_0, (arr_14 [i_3] [13] [i_3] [i_3])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_20 -= var_8;
                                var_21 = (arr_26 [i_5 - 1]);
                                var_22 = (((min((var_14 * var_5), var_11)) >= ((((((arr_11 [i_4] [i_5] [14]) ? 0 : 959186767391815886)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

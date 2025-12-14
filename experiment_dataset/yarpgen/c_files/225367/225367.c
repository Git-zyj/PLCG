/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [11] = ((((arr_1 [i_0]) % (min(-17834, 1619842658)))));
        var_11 = (arr_0 [i_0]);
        var_12 -= (((((var_8 | (arr_0 [i_0])))) % 46813392));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_13 *= -986363850585108485;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    var_14 = (((((61 ? -32749 : 17852))) ? 0 : (((!(arr_4 [i_1]))))));
                    var_15 = -7991044595473209786;
                    var_16 = 9933376553880651188;
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                arr_14 [2] [1] = (-7991044595473209786 % 5203281952322140501);
                                var_17 = (var_8 - -var_9);
                            }
                        }
                    }
                    var_18 |= ((((max(0, 7991044595473209786))) || ((min(-8895471428041693992, 0)))));
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (!var_11);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_13 = (min(var_13, (((((1 < (arr_1 [i_0] [i_0]))) ? ((((((17666418372640842449 & (arr_1 [i_0] [i_0])))) && var_11))) : (1 * var_4))))));
        arr_2 [i_0] [i_0] &= (min(((((arr_1 [i_0] [i_0]) <= (var_2 != 17666418372640842449)))), (max((max(var_9, var_5)), (((!(arr_1 [i_0] [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 21;i_4 += 1)
                {
                    {
                        arr_13 [i_1] [i_3] = ((!((max((arr_4 [i_4 - 1]), (arr_4 [i_4 + 1]))))));
                        var_14 ^= ((((min(-780325701068709177, var_6))) ? ((52 | (arr_7 [i_4 + 2] [i_2 - 1]))) : ((min(0, -3193480119247088731)))));
                        var_15 = (max(var_15, (((var_9 ? var_4 : (!28672))))));
                        var_16 ^= ((((min((arr_4 [i_4 - 2]), (arr_4 [i_4 + 2])))) ? ((239 & (arr_4 [i_4 - 1]))) : ((192 << (82 - 82)))));
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            arr_17 [15] [i_1] = (((204 ? 780325701068709189 : 17666418372640842434)));
            arr_18 [i_1] [i_1] = 1;
            var_17 = (((1 * -7) ? ((min(1, var_6))) : (min(var_10, (arr_14 [i_1] [i_5] [i_1])))));
        }
    }
    #pragma endscop
}

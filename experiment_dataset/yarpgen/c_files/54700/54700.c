/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_7 [i_2] [i_2] [i_1] [i_2] = (4294967266 ? 3544925177 : (~65472));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_10 [i_1] [9] [i_2] = ((var_11 << (((arr_6 [1] [i_1 + 1] [0]) - 60703))));
                        var_12 *= ((~(((var_6 > (arr_4 [i_3]))))));
                        var_13 = ((((63 / (arr_5 [i_2] [i_1]))) >= (arr_6 [i_2] [11] [i_2])));
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_1] [i_4] = (!64);
                        arr_14 [i_0] [i_1] [i_1] [i_2] [i_2] [i_4] = var_0;
                        var_14 = (63 ? (var_0 + var_7) : 63);
                    }
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        var_15 -= -61;
                        var_16 *= (((arr_15 [i_0] [i_1 + 1] [i_2] [4]) ? var_11 : (arr_16 [i_0] [i_1] [i_2] [i_5 + 1])));
                        var_17 *= ((var_7 ? (var_5 && 65472) : var_1));
                    }
                }
                var_18 = -65486;
            }
        }
    }
    var_19 = (min(var_19, (((((((!65473) % 69))) == (min((54 + var_6), var_9)))))));
    #pragma endscop
}

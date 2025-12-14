/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((min(((29365 ? 0 : 65529)), 0)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_15 = (max(var_15, var_7));

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            arr_14 [i_0] [i_4] [i_0] [i_3] [i_1 + 1] [i_4] [i_3] = 1;
                            var_16 ^= ((32767 ? 1 : 9223372036854775807));
                            var_17 -= (var_5 <= -361249766529008604);
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            arr_17 [i_5] [i_0] [i_0] [i_5] [i_5] = (arr_0 [i_0]);
                            var_18 = (((arr_1 [i_0]) % (arr_12 [i_1 - 1])));
                        }
                        var_19 = ((var_6 << ((((3 ? 107 : (arr_0 [i_3]))) - 105))));
                    }
                }
            }
        }
        arr_18 [i_0] [i_0] = (((((1494752941 ? 166 : (arr_12 [i_0])))) ? 7 : (arr_0 [i_0])));
        var_20 = -1;
        arr_19 [i_0] [i_0] = (((arr_3 [i_0]) ? (arr_3 [i_0]) : 1));
    }
    var_21 = (min(var_21, var_9));
    #pragma endscop
}

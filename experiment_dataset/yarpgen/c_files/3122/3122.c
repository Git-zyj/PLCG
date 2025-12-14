/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (~var_9)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_17 = (min(var_17, (arr_0 [1])));
        var_18 = (((arr_1 [i_0 + 1] [i_0]) ? (arr_1 [i_0 + 1] [i_0 + 1]) : (((arr_0 [i_0]) ? (arr_2 [1] [i_0]) : (arr_1 [i_0] [i_0])))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_19 = (min(var_19, ((((arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? (arr_4 [i_0 + 1] [i_0 + 1]) : (arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))))));
                        arr_12 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_2] [i_0] = (((-(arr_0 [i_3]))) >= (arr_7 [i_0 + 1] [i_2]));
                        arr_13 [i_0] [i_0] [i_2] [i_2] [1] [i_2] = ((+(((arr_11 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) * (arr_3 [i_2] [i_3])))));
                        var_20 *= ((126 ? 241484114 : 9926413066913927517));
                    }
                }
            }
        }
        var_21 = (max(var_21, ((((arr_11 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1]) ? (arr_6 [i_0 + 1] [i_0 + 1] [i_0]) : (arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1]))))));
    }
    var_22 = ((((-64 < (!var_2))) ? ((1 ? 0 : 1712302667)) : -64));

    /* vectorizable */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 15;i_6 += 1)
            {
                {
                    var_23 = (max(var_23, ((((arr_21 [i_6] [i_6 - 1] [i_6 + 1]) ? (arr_21 [i_5 - 3] [i_5 - 1] [i_5 - 1]) : (arr_21 [i_4] [i_5 - 2] [i_6]))))));
                    var_24 = (!(arr_20 [i_5 - 2] [i_5 - 4] [i_5 - 4]));
                    var_25 = (arr_16 [i_4]);
                }
            }
        }
        var_26 -= ((arr_19 [i_4]) ? (arr_21 [i_4] [i_4] [i_4]) : ((-(arr_17 [i_4] [12] [i_4]))));
    }
    #pragma endscop
}

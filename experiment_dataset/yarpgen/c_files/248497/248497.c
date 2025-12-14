/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 -= (1525221091 ? 13233 : 52331);
        arr_2 [i_0] = (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        var_15 |= (max((65525 || 2059756117), (arr_6 [i_1 + 1])));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        var_16 += ((+(((((((arr_8 [i_1] [i_1]) | (arr_4 [i_1 - 2])))) > (arr_7 [i_2] [i_2] [i_1]))))));
                        var_17 = ((~(((!(arr_5 [i_1 - 2]))))));
                        arr_15 [i_4] [i_1] [i_1] [i_1] |= (~0);
                    }
                }
            }
        }
    }
    for (int i_5 = 3; i_5 < 10;i_5 += 1)
    {
        var_18 = 583052986;
        var_19 = (max(0, (min((arr_6 [i_5 - 3]), var_7))));
        arr_19 [i_5] = ((-3462890949722590031 || (3711914310 && -6930177217887465834)));
    }

    for (int i_6 = 1; i_6 < 21;i_6 += 1)
    {
        var_20 = var_4;
        var_21 -= (arr_9 [i_6]);
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        arr_26 [i_7] = (arr_10 [i_7] [i_7] [i_7] [i_7]);
        arr_27 [4] |= 52303;
    }
    #pragma endscop
}

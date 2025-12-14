/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 += (min(0, 58372));
                    var_12 = (arr_0 [i_0]);
                    var_13 = (arr_6 [i_0 - 1] [i_1 - 2] [i_1 - 1] [i_1]);
                    var_14 &= ((-(-114 && 7171)));
                }
            }
        }
    }
    var_15 = var_6;

    /* vectorizable */
    for (int i_3 = 3; i_3 < 22;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_16 = ((((!(arr_7 [6]))) ? (arr_11 [7] [7] [i_4]) : 5312501428308802874));
            var_17 = (17 + -7239270154804732528);
            var_18 *= (((arr_7 [i_4]) << (arr_7 [i_3 - 2])));
        }
        for (int i_5 = 1; i_5 < 22;i_5 += 1)
        {
            var_19 = (arr_13 [i_3] [i_5 - 1]);
            var_20 = (((arr_11 [i_3 + 2] [i_5 - 1] [i_5 + 2]) % (arr_9 [i_3 + 2] [14] [16])));
        }
        var_21 ^= (((arr_10 [i_3 - 1] [i_3 + 2]) ? (arr_10 [i_3 - 1] [i_3 - 3]) : (arr_10 [i_3 - 2] [i_3 + 1])));
    }
    var_22 = (max(var_22, ((5872780289036493055 ? 58370 : var_10))));
    var_23 |= var_7;
    #pragma endscop
}

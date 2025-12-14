/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;
    var_21 = (((-8973201191262910844 & 24543) ^ var_17));
    var_22 = -1645676276;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_23 = (max(var_23, (((var_6 ? (((((!-1645676276) >= ((0 ? -1645676262 : var_17)))))) : (((max(126, var_5)) << ((((391743262 + (arr_6 [i_0] [i_1]))) - 12707823651133764446)))))))));
                arr_7 [i_1] [i_1 - 2] = ((-1645676277 ? 5495971843293189992 : 16));
                var_24 = (max(var_24, 33824));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    arr_10 [i_2] [i_1] [5] [i_2] = (-13464 == -551247401);
                    arr_11 [i_2] = ((!(arr_3 [i_0 + 1])));
                    arr_12 [i_0] [i_1] [i_2] = ((-(((arr_0 [i_2 - 3] [8]) % 1645676287))));
                }
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    var_25 = (max(var_25, (arr_6 [i_0] [i_0])));
                    arr_15 [i_3] [i_1 - 2] [i_3] = 2147483647;
                }
                for (int i_4 = 3; i_4 < 13;i_4 += 1)
                {
                    arr_18 [i_0 - 1] [i_4] [i_4] = ((!(arr_17 [i_0 - 2] [i_1 + 1] [i_1 - 1] [i_4 - 1])));
                    var_26 = (((((((var_14 - (arr_17 [i_0 - 2] [i_1] [i_4] [i_4 + 2]))) == (((-7760473599386381051 ? (arr_1 [i_0 + 2]) : var_0))))))) >= (max(((14690072310316814484 << (((arr_8 [i_4]) - 11)))), 1366091040)));
                }
                for (int i_5 = 2; i_5 < 14;i_5 += 1)
                {
                    arr_23 [i_5] [i_1 - 2] [i_0] [i_5] = -8094317811243745502;
                    var_27 = ((((((var_0 <= (arr_6 [7] [i_5]))) ? (arr_13 [i_0] [i_0] [i_0] [i_0]) : 11980)) - (arr_2 [i_0 + 2] [i_0 + 2])));
                    var_28 = (max(var_28, (((~((((((var_14 ? 1645676277 : 48))) < (arr_19 [i_0] [i_1] [i_5])))))))));
                }
            }
        }
    }
    #pragma endscop
}

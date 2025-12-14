/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 6;i_0 += 1) /* same iter space */
    {
        var_17 = (min(var_17, ((((((~(arr_0 [i_0 - 1])))) ? 8332051198373520187 : (((((min(40191, 18446744073709551599))) ? (~17322) : (((-73 + 2147483647) << (((-77 + 102) - 25))))))))))));
        var_18 = (((((-(((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))))) ? -8609107149081216918 : 3));
        var_19 = (arr_0 [i_0 + 4]);

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_5 [1] [i_0] = (((((min(-114, 88))) ? (!43) : 39)));
            var_20 -= ((((((((!(arr_4 [i_1]))))) | ((-17322 ? (arr_0 [1]) : (arr_0 [i_0]))))) | 506559522));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 9;i_4 += 1)
                    {
                        {
                            var_21 = ((-4611686018427383808 ? (((-6498365144515026773 ? (arr_3 [i_0] [i_0]) : 18014261070528512))) : 32764));
                            arr_13 [i_0 + 2] [i_0] [i_0] [i_0] = (((arr_8 [i_0] [i_1] [i_0] [i_4 - 1]) ? ((((!(arr_9 [i_0] [i_0 + 2] [i_4 - 1] [i_0] [i_4 - 1] [i_0]))))) : (32460 || 22)));
                            arr_14 [i_0] [8] [i_2] [9] [i_0] [i_0] = (min(((((arr_2 [i_0] [i_0]) <= 173960087))), (arr_0 [i_0 - 1])));
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 6;i_5 += 1) /* same iter space */
    {
        var_22 = (arr_8 [i_5 - 1] [i_5] [i_5] [i_5]);
        var_23 = ((((((!(arr_0 [7])))))) ? (((arr_8 [i_5] [i_5] [i_5] [i_5]) ? 1 : (arr_16 [i_5 + 2] [i_5 + 2]))) : (arr_10 [i_5 + 1] [i_5] [i_5 + 1] [i_5] [i_5]));
    }
    var_24 = (((((min(var_11, var_5))) ? var_7 : var_6)));
    var_25 = (~4988);
    #pragma endscop
}

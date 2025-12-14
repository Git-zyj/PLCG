/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((1521483964 - 64), var_11));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0 - 1] = (1124017845930530737 && 52319);
        var_17 = (arr_2 [i_0 - 1]);

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_18 = (arr_1 [i_0] [i_0]);
            arr_6 [i_0] [i_0] [i_1] = (arr_1 [i_0 - 1] [i_1]);
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_19 = ((~(arr_13 [i_2] [i_2])));
                        var_20 = (((arr_2 [i_0 - 1]) <= (arr_2 [i_4])));
                        var_21 = (max(var_21, ((((((28469 ? -27 : 5591762738095602806))) ? 115 : (-54 % 118))))));
                        var_22 = ((var_2 ? -1199881026 : (((arr_5 [i_0] [i_4]) ? 48 : (arr_5 [i_0 - 1] [15])))));
                        arr_14 [i_0] [i_2] [i_3] [i_4] = (((arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1]) - (arr_10 [i_0] [6] [i_4])));
                    }
                }
            }
            var_23 = (max(var_23, ((((((var_5 || (arr_1 [4] [i_2]))))) == (((arr_12 [i_0] [i_2] [i_0] [i_2] [i_0] [i_0]) ? (arr_0 [18]) : 22296))))));
            var_24 = ((-(arr_2 [i_0 - 1])));
        }
        var_25 = (arr_10 [i_0] [i_0] [i_0 - 1]);
    }
    var_26 = ((((min(((var_4 ? var_4 : var_13)), var_7))) ? ((((max(11121186867811603545, 7325557205897948047))) ? (~511) : 17211744520311367589)) : ((var_0 | (-469579837 != 205)))));
    #pragma endscop
}

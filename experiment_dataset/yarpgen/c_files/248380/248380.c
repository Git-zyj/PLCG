/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((min(var_7, var_5))) > ((~(min(var_8, 2))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 = max(var_7, (arr_0 [i_0] [i_0]));
                    arr_6 [i_1] [i_1] [i_0] [i_1] = (((((var_11 ? 136558496 : var_2)) / (arr_0 [i_1] [i_1]))));
                    arr_7 [i_1] [i_1] = ((((((arr_1 [i_0]) / (arr_5 [i_2] [i_1] [i_0])))) < var_5));
                    var_15 *= ((4158408799 || ((min(8503903589777054848, (arr_1 [i_0]))))));
                }
            }
        }
        arr_8 [i_0] = var_3;
        var_16 = (~var_6);
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        arr_11 [i_3] = (arr_0 [i_3] [i_3]);
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 10;i_5 += 1)
            {
                {
                    var_17 = ((+((-8190179148772577497 ? (arr_18 [i_4 + 2] [i_4] [i_4] [i_4]) : (arr_18 [i_3] [i_3] [i_3] [i_3])))));
                    var_18 = ((max((max(var_5, var_5)), (1975895058565474205 >= 4158408800))));
                    var_19 = (((~var_11) > ((max((var_0 || var_11), (2314616358710473740 || 14092))))));
                }
            }
        }
        var_20 = max((arr_2 [i_3]), ((max((arr_17 [i_3] [i_3] [i_3]), (arr_17 [i_3] [i_3] [i_3])))));

        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            arr_21 [i_3] [i_3] = (min(((((arr_18 [i_6] [i_6] [i_3] [i_3]) >> (var_1 - 52)))), (min(var_6, (var_11 == 0)))));
            var_21 = (((min(9942840483932496767, 136558496)) <= var_4));
            var_22 = (~(arr_9 [i_6]));
        }
    }
    var_23 = (!var_6);
    #pragma endscop
}

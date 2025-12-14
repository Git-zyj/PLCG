/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(1, 22));
    var_17 = (var_9 != 247);
    var_18 = ((((((((230 ? var_9 : var_8))) ? ((min(var_2, var_0))) : ((var_2 ? var_0 : var_14))))) == ((var_15 ? (var_12 >= var_11) : (max(var_13, var_5))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_11 [i_1] [i_2] = (1 >= 247);
                        arr_12 [i_1] [i_2] &= (((arr_8 [3] [12]) ^ (((((max(89, (arr_7 [i_3])))) ? (((!(arr_0 [i_0])))) : 36162)))));
                        var_19 = (arr_0 [20]);
                    }
                    for (int i_4 = 3; i_4 < 19;i_4 += 1)
                    {
                        var_20 = (max(var_20, ((-(arr_2 [i_4 + 2])))));
                        arr_17 [i_0] [i_1] [i_0] [i_2] = ((((!(arr_13 [i_0] [i_0] [i_2] [i_0 - 4])))) << (((((63 ? 6511408445610046880 : 247)) <= (max(2, 10721654864189555027))))));
                        var_21 = (min(var_21, ((((arr_6 [i_4] [i_4 + 2] [i_2] [i_0]) ? (((((1 ? 10639 : 31))) ? (var_4 < 1) : (6237 / 21731))) : ((-(((!(arr_0 [i_0])))))))))));
                    }

                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_22 = (max(var_22, ((((((max((arr_4 [i_0] [i_0] [i_0]), var_13)) != (((511 ? -42 : 2074))))) ? (max((arr_16 [i_0 - 1] [i_0 - 4] [i_0 - 1] [i_0]), (arr_16 [i_0 + 1] [i_0 - 3] [i_0] [i_0 - 2]))) : ((min(89, ((var_4 ? var_10 : 7))))))))));
                        var_23 = (min((((((arr_3 [13] [i_0]) % (arr_8 [i_0] [i_0]))) * (((-(arr_2 [19])))))), -237995952));
                        arr_20 [i_1] [i_1] = (((arr_13 [i_0 + 1] [i_1] [i_2] [i_5]) ? (arr_14 [i_5] [i_1] [i_5] [i_5] [i_5]) : ((max(6074, (arr_3 [i_1] [5]))))));

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_24 = (max(var_24, ((~((((min(6074, -19598))) ? (((max(219, -29)))) : (~3413952871)))))));
                            var_25 = ((((var_1 <= (max(var_2, var_6)))) ? (((((2399592326 / (arr_9 [i_5])))))) : 43301));
                            arr_24 [i_0] [i_0] [i_2] [i_2] [i_2] = ((var_14 / ((var_1 - (89 & 15)))));
                            arr_25 [i_0] [i_0] = ((-((15 ? 31867 : (((arr_13 [i_0] [i_1] [3] [i_5]) ? 576460752303423487 : -51))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

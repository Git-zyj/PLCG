/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!((min((min(var_5, 14944892843854201162)), 14944892843854201162)))));
    var_19 = (min(5, 3501851229855350453));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = 14944892843854201162;
                    var_21 = (max(((min((arr_10 [i_0 - 1] [i_0 + 3] [i_0 + 3] [i_1]), (arr_10 [i_0 + 1] [i_0 + 2] [i_2] [i_2])))), (((arr_1 [i_0 + 2]) ? (arr_1 [i_0 + 1]) : 4294967290))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] = (((arr_13 [14] [14] [1] [i_3 - 1] [i_3 + 1] [i_3 + 1] [14]) | ((-(arr_12 [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 2])))));
                                arr_16 [i_0] [i_1] [i_1] [i_1] [i_1] = (((((14944892843854201164 * (arr_12 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0])))) ? (min((arr_12 [i_0] [i_0 + 3] [i_0] [0]), (arr_7 [i_3 + 1] [13] [i_0 + 2]))) : ((((!(arr_4 [i_0 + 1] [i_2])))))));
                                var_22 = (max((11 != 1), ((((min((arr_1 [i_0]), 3))) ? var_10 : 4294967284))));
                            }
                        }
                    }
                    var_23 = (arr_7 [11] [i_1] [1]);
                }
            }
        }
    }
    var_24 = 6641795329152833974;
    #pragma endscop
}

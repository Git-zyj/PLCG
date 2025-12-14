/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((!(!var_9)))));
    var_13 = (~var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_14 = 498719418;
                    var_15 = (((arr_3 [i_1 + 1]) || (arr_3 [i_1 + 2])));
                    var_16 = (max(var_16, var_5));
                    var_17 = (((arr_1 [i_1 + 2]) ? (arr_1 [i_1 - 1]) : var_5));
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_18 = ((((-(min(var_8, -2079236575)))) % ((((~(arr_0 [i_1] [i_0]))) | ((9223372036854775807 ? 1 : 33164))))));
                    var_19 = ((-((max(var_3, (min(var_5, (arr_1 [i_0]))))))));
                    var_20 = (arr_0 [i_0] [13]);
                    var_21 = (arr_9 [i_0] [i_0] [i_3]);
                    var_22 = (((((-(((arr_0 [i_3] [i_0]) ? (arr_8 [i_0] [i_1] [i_1]) : (arr_6 [i_1] [13])))))) ? ((((((arr_9 [i_0] [i_1] [i_3]) | 33158))) ? (var_2 | var_7) : (((var_1 ? (arr_2 [i_0] [2]) : var_5))))) : ((((var_1 || (~var_3)))))));
                }

                /* vectorizable */
                for (int i_4 = 3; i_4 < 16;i_4 += 1)
                {
                    var_23 = (var_7 % 33156);

                    for (int i_5 = 3; i_5 < 16;i_5 += 1)
                    {

                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            var_24 = var_1;
                            var_25 = (((arr_10 [i_0] [i_1] [i_1] [i_6 - 1]) ? (arr_13 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 2]) : ((17297812433295246710 ? 33156 : 32371))));
                            var_26 &= ((~((1500516640 ? 6396548708476896897 : (arr_0 [i_0] [i_0])))));
                        }
                        var_27 = (((arr_11 [i_1 + 2] [i_1 - 1] [i_1 - 1]) % (1773932862 | 33141)));
                        var_28 = (min(var_28, -591254030));
                    }
                }
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    var_29 = (max(var_29, ((((arr_1 [i_7]) ? (((arr_8 [0] [i_1 + 2] [i_7]) % (((arr_6 [i_0] [i_7]) ? var_5 : (arr_17 [i_7] [i_0] [i_7] [i_0] [i_0]))))) : (max((18347 - 2147483624), (arr_2 [i_1 + 1] [i_1 - 1]))))))));
                    var_30 &= (((arr_20 [i_1 + 2] [i_0]) || var_4));
                    var_31 = ((!(~-2147483627)));
                    var_32 = var_7;
                }
            }
        }
    }
    #pragma endscop
}

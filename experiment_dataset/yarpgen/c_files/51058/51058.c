/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (max((((var_17 && (((11117 - (arr_1 [i_0]))))))), -111));
                arr_5 [i_0] = (max((!54394), 11117));
                var_19 = var_13;

                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_2] = (arr_6 [i_0] [i_0]);
                    arr_9 [i_0] [i_0] [17] = ((((min((arr_2 [i_0 + 1] [i_0]), -65)) + 9223372036854775807)) >> ((((-68 ^ (arr_2 [i_0 - 2] [2]))) - 8347218352996328463)));
                    var_20 = ((((arr_2 [i_0 + 1] [i_2 + 2]) ? (arr_2 [i_0 - 1] [i_2 - 2]) : (arr_0 [i_0] [i_2 - 1]))));
                }
                for (int i_3 = 1; i_3 < 23;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        arr_14 [i_0] [21] [i_0] [i_0] [i_0] [i_0] = ((((((-8 ? var_7 : (arr_7 [i_0] [i_1] [i_3] [i_0]))))) ? (arr_12 [i_0]) : (arr_12 [i_0])));
                        var_21 *= (min(((max((arr_6 [i_1] [i_1]), (arr_12 [i_1])))), var_0));
                        arr_15 [13] [i_1] [i_0] [i_0] = ((+(((50987 || (((arr_13 [i_0] [i_1] [i_0] [i_4] [i_1] [23]) != (arr_1 [i_0]))))))));
                        arr_16 [i_0] [i_0] [i_0] [i_0] = ((((!((max(var_13, (arr_0 [i_0] [17])))))) ? 3 : var_18));
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_22 = (max((min((arr_17 [i_0] [i_0] [i_0 + 2] [i_0] [i_3]), (arr_17 [i_0] [13] [i_0 + 3] [i_0] [13]))), ((~(arr_17 [6] [i_0] [i_0 - 2] [i_0] [i_1])))));
                        var_23 = var_10;
                    }

                    for (int i_6 = 3; i_6 < 24;i_6 += 1)
                    {
                        arr_22 [24] [i_0] [i_3] = var_4;
                        var_24 = ((((((11117 >> (117547275 - 117547271))))) ? (max((((arr_13 [i_0] [13] [i_0] [13] [i_3 + 2] [16]) ? (arr_18 [i_0] [i_1]) : 4160749568)), ((min(31812, 48038))))) : (arr_3 [i_0] [i_0])));
                    }
                    for (int i_7 = 1; i_7 < 24;i_7 += 1)
                    {
                        var_25 = (min(var_25, ((((arr_19 [i_0] [i_1] [i_1] [i_3] [i_3] [3]) & ((((max(-51, 605583421))) ? (arr_20 [i_0] [i_0] [i_0] [i_0] [i_1]) : ((((var_3 == (arr_19 [i_0] [8] [i_0] [i_0] [i_3] [19]))))))))))));
                        arr_27 [i_7] [4] [i_0] [i_0] [i_0] [i_0] = ((var_17 ? (((arr_18 [i_0] [i_0]) ^ ((var_8 ? -47 : var_0)))) : (arr_0 [i_0] [i_0])));
                        var_26 = (!5007775950548227335);
                    }
                }
                for (int i_8 = 3; i_8 < 22;i_8 += 1)
                {
                    arr_30 [i_0] [i_8] [i_8] = (max((~-8964997888920612897), (arr_0 [i_0] [i_1])));
                    var_27 = ((!(arr_7 [i_0] [i_1] [i_1] [i_8])));
                }
            }
        }
    }
    var_28 = var_4;
    #pragma endscop
}

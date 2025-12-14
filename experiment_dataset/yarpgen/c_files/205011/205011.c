/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;
    var_17 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_0 + 2] [i_0] = ((var_6 ? var_10 : (((!(arr_2 [i_1] [i_1 + 1]))))));
                arr_8 [15] [i_0] [15] = (min((((var_13 > (arr_0 [i_0] [i_1])))), var_1));
                var_18 = (0 ? (arr_2 [i_0] [i_1]) : ((var_14 ? 1 : (arr_0 [i_0 + 2] [12]))));

                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    var_19 |= ((((max(58311, ((9000996736626776145 ? 0 : 58311))))) || ((((arr_6 [i_1 - 2] [i_1]) ? var_1 : (arr_6 [i_1 + 1] [i_1]))))));
                    var_20 = 206;
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_21 = var_10;
                    arr_15 [i_0] [i_0] [16] = ((!(((var_15 ? (arr_11 [1] [3] [i_0] [i_0 + 1]) : (arr_11 [9] [i_0] [i_0] [i_0 + 1]))))));
                }
            }
        }
    }
    var_22 &= ((-((max(3679563298433598529, -6986)))));
    #pragma endscop
}

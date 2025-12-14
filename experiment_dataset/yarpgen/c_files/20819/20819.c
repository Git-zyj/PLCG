/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 59428;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 |= -7192288512058074959;

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_19 = (((arr_2 [i_0]) / (((((~var_7) + 2147483647)) >> (((((arr_4 [i_1]) ^ (arr_6 [i_0] [i_1] [i_2]))) - 2768870715044179048))))));
                    var_20 = ((((((((65535 & (arr_6 [i_0] [i_1] [i_2])))) & (arr_4 [i_1])))) ? (((min((arr_0 [i_1]), (arr_7 [i_0] [i_1] [i_1] [i_2]))))) : (min((arr_1 [i_2]), (arr_3 [i_1])))));
                    var_21 = ((((((!(arr_2 [i_0]))))) + -1118856712));
                    var_22 |= (((arr_6 [i_0] [i_1] [i_2]) ? (((max((arr_1 [6]), (max(var_8, (arr_0 [9]))))))) : (max((((arr_3 [2]) | var_10)), (max((arr_3 [i_0]), (arr_1 [i_0])))))));
                    var_23 = ((((1 <= (arr_3 [i_2]))) ? (max(514721882795696071, 1)) : (((min((arr_7 [i_0] [i_0] [i_0] [i_0]), -101))))));
                }
                /* vectorizable */
                for (int i_3 = 3; i_3 < 6;i_3 += 1)
                {
                    var_24 |= (((arr_2 [i_3 + 4]) >= (((6118 <= (arr_0 [i_1]))))));
                    var_25 = (((arr_3 [i_3 + 3]) ? (((var_13 ? var_16 : (arr_0 [i_1])))) : (arr_4 [i_3 + 1])));
                }
                /* vectorizable */
                for (int i_4 = 3; i_4 < 9;i_4 += 1)
                {
                    var_26 = ((!(arr_8 [i_4 - 2] [i_4 - 1] [i_4] [i_4 - 3])));
                    var_27 = (max(var_27, ((var_5 & (((arr_3 [i_0]) ? var_4 : 486573222))))));
                }
            }
        }
    }
    #pragma endscop
}

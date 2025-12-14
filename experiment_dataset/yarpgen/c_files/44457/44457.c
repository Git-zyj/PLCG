/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= (var_7 & 62422);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    var_19 = ((-(max(-1969722847, 7904))));
                    arr_6 [i_0] [i_2] = (max(((8734046825210836827 & (arr_1 [i_0 + 2]))), ((-(arr_5 [i_0 + 2] [i_1 - 2] [i_2 + 1])))));
                    arr_7 [i_1 - 2] [i_2] [i_1] = (arr_3 [i_2]);
                    arr_8 [i_0 - 1] [i_0] [i_1] |= ((((((-24412 + var_5) < ((~(arr_5 [i_0] [i_1] [i_2 - 1])))))) & 151798094));
                }
                var_20 = (min(((-(((arr_4 [i_0] [i_0 + 1] [i_0]) & 1)))), (min((arr_3 [i_0 + 1]), 1641881756))));
                arr_9 [i_0] [i_0] = (~(((!((((arr_1 [i_0]) ? -10 : 76)))))));
                arr_10 [i_0] [i_1 - 2] = ((!(arr_4 [i_0 - 1] [i_0 + 2] [i_1 + 1])));
            }
        }
    }
    var_21 = ((var_11 ? var_5 : var_12));
    var_22 = (!255);
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_12 = (((~var_11) ? (arr_1 [i_0] [i_2]) : (arr_1 [i_2] [i_0])));
                        var_13 = ((-((((max(-13, (arr_11 [i_0] [i_1] [i_0] [1] [i_3] [1])))) ? (((!(arr_3 [i_3] [i_1] [i_0])))) : -163621562869208122))));
                    }
                    var_14 = (min(var_14, ((-(((((1 ? (arr_12 [i_0]) : (arr_4 [i_0] [i_1])))) ? (arr_12 [i_0]) : (((11235 ? 65535 : (arr_8 [i_0] [8] [8]))))))))));
                    var_15 = (min(var_15, ((((!((min((arr_10 [i_0] [6] [6] [6] [i_2]), 14242399445665656863)))))))));
                    arr_13 [i_0] [4] [i_0] = ((+(((arr_11 [0] [i_1] [0] [i_1] [i_2] [i_2]) ? (arr_5 [i_0] [i_1] [i_2]) : ((var_0 ? (arr_12 [i_0]) : var_8))))));
                }
            }
        }
    }
    var_16 = var_10;
    var_17 = (((((var_8 ? var_11 : ((1 ? -2124427936313879718 : -201))))) ? ((max(var_7, 2147483620))) : var_1));
    var_18 = (min(var_18, -4211712606593636761));
    var_19 = var_4;
    #pragma endscop
}

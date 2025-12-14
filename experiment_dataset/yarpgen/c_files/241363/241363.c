/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((((((max(247, -99)) <= (var_9 ^ var_5)))))))));
    var_11 = (min(var_11, ((!(((((max(4015665779, -1309857044))) ? ((-88 ? var_8 : 129)) : var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_12 = (((-32767 - 1) ? var_3 : ((((arr_4 [i_0 - 2] [i_2] [i_2]) ? (arr_4 [i_0 + 3] [13] [i_0 + 3]) : (arr_4 [i_0 - 3] [i_1] [i_1]))))));
                    arr_7 [i_0] [i_0] [i_1] [i_2] = ((!((((~-99) | ((max(3364, 179))))))));
                    var_13 = ((-(((arr_3 [i_0] [i_0 - 2] [i_0 - 3]) ? (arr_3 [i_0] [i_0] [i_0 - 2]) : (arr_3 [i_0] [i_0] [i_0 - 3])))));
                }

                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    arr_11 [i_3] [i_1] = (((((((arr_10 [i_0]) < 62193)) ? (arr_8 [i_0] [i_0 - 3] [i_0 - 1]) : (-3384 | -30035)))) ? ((((var_1 ? var_5 : 97)) & var_8)) : (((arr_9 [i_0] [i_0 + 3] [i_0]) - ((6291456 ? var_8 : (arr_0 [13]))))));
                    var_14 = ((1026743956 >> ((((47 ? 206 : 753085186)) - 200))));
                    var_15 = (((--99) / (arr_0 [i_1])));
                    var_16 = -1309857044;
                }
                var_17 = 206;
            }
        }
    }
    var_18 = (!var_1);
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_14 += (arr_2 [8]);
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [10] = ((((((arr_0 [i_0]) ^ (arr_0 [i_0])))) ? (((arr_3 [i_0] [i_0 + 2]) ? 251 : (arr_0 [i_0]))) : ((max(var_4, (arr_0 [i_0]))))));
                    var_15 = ((((min((arr_2 [i_0]), ((1 ? var_4 : var_6))))) ? ((9223372036854775807 << (((var_6 || 1) - 1)))) : ((-78 ? (arr_1 [i_1 - 3]) : (arr_1 [i_2])))));
                    arr_9 [i_0] [i_0] = ((127 ? ((-((max(var_4, (arr_4 [i_0] [i_0])))))) : 0));
                    arr_10 [i_0] [i_0] [i_0] = ((((var_3 > (arr_2 [i_0]))) ? ((((min(178, var_12))))) : 1523588419));
                }
            }
        }
        var_16 = (min(var_16, ((max((max(-1523588419, -1523588419)), (arr_6 [2] [i_0 + 1] [i_0 - 2]))))));
    }
    var_17 = (max((((!(((288089638663356416 ? var_2 : var_12)))))), var_12));
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {
                    arr_17 [i_3] = ((-(((arr_12 [i_3 - 3]) | (arr_12 [i_3 - 1])))));
                    var_18 += (max(var_6, (arr_12 [i_3])));
                    arr_18 [i_3] [i_5] = ((((!(arr_12 [i_3 - 3]))) || (var_8 / 1)));
                    arr_19 [i_3] [i_4] [i_3] = ((~(((arr_12 [i_5]) ? var_7 : ((((arr_12 [1]) || var_8)))))));
                }
            }
        }
    }
    #pragma endscop
}

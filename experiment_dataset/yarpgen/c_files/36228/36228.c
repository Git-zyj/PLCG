/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [13] &= (((arr_0 [i_0] [3]) > (((arr_5 [i_0]) / (arr_5 [i_1])))));
                arr_7 [i_0] [i_0] [i_0] = (max((arr_4 [i_0] [i_0] [i_0]), ((((((((arr_3 [i_0] [i_0] [i_0]) + 9223372036854775807)) << (11334291020992827639 - 11334291020992827639)))) ? (arr_0 [i_0] [i_1]) : ((((109 > (arr_2 [i_0] [3] [3])))))))));
                arr_8 [i_1] = ((((max(((-125 ? (arr_4 [i_0] [i_0] [8]) : (arr_2 [i_1] [1] [1]))), (((arr_2 [i_0] [i_0] [i_0]) | var_15))))) >= (arr_3 [3] [15] [15])));
            }
        }
    }
    var_17 = (min((((-2010455935 ^ 244) <= (~var_8))), var_7));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            {
                arr_13 [i_2] [i_2 + 1] [i_3] = (((((arr_5 [2]) ? (arr_11 [i_2] [i_2 + 2]) : (arr_5 [i_2]))) != (arr_5 [i_2])));
                arr_14 [i_2] [11] = (max((((!(arr_1 [i_2 + 1] [i_2 + 2])))), ((1 ? 1 : 109))));
            }
        }
    }
    #pragma endscop
}

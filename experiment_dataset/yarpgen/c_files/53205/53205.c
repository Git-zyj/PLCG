/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 248;
    var_12 = ((18436 < (((max(18436, -9082212432730742766)) >> (var_3 - 4398760647838668145)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = ((var_1 ^ (((max((arr_2 [i_1] [i_0]), (arr_2 [i_0] [i_1])))))));
                var_14 = ((47099 || (18436 && 15000305453414333576)));
                var_15 = (((((3446438620295218039 / (max((arr_4 [i_0] [i_0]), (arr_2 [15] [15])))))) ? (arr_0 [18]) : (-2415782283292954739 / 2113739267)));
                var_16 = ((18436 ? (~var_5) : (arr_0 [i_0])));
                arr_6 [i_0] [i_0] [19] = ((((max((((var_4 ? 207 : var_10))), ((0 ? var_5 : var_7))))) ? -26859 : (arr_5 [i_0] [i_0] [i_1])));
            }
        }
    }
    var_17 = (min((((!(((var_8 ? 65535 : var_1)))))), (var_6 / var_5)));
    #pragma endscop
}

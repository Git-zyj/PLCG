/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 = ((!((((min(1502703613, 3639173910))) || (((6907719091801520092 ? 6907719091801520092 : var_11)))))));
                    arr_7 [i_2] &= (max(((3639173930 ? (min(655793386, 18017790766218969207)) : (arr_4 [i_0] [i_1] [i_1]))), (((9223372036854775807 ? (arr_2 [i_2]) : (arr_6 [i_0] [i_2]))))));
                    var_19 = (((((!(arr_5 [1] [i_1] [i_0 - 3])))) - (((((arr_5 [9] [9] [i_0 - 3]) + 2147483647)) >> (107 - 78)))));
                }
            }
        }
    }
    #pragma endscop
}

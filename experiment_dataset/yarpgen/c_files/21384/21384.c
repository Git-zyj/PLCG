/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += 1621580514;
    var_18 = (!1621580529);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = (((6 <= 3975477350) % (((-1621580515 / 599784846) ? (-2147483647 - 1) : 208700783))));
                var_20 = (min(var_20, (((1753517070 ? ((~(556765572 | var_5))) : -1621580504)))));
            }
        }
    }
    var_21 = (((2646541631 ? (((1621580514 >> (var_15 - 1599584066)))) : 1621580519)) | ((((((min(var_7, var_11)) + 2147483647)) << (((3903659180 ^ 1648425666) - 2330846830))))));
    var_22 = ((((min(var_0, 25))) && (var_3 && 1621580523)));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [15] [14] |= ((~(max((arr_4 [i_0] [i_0] [i_0]), (((27406 == (arr_1 [i_0] [i_0]))))))));
                arr_7 [i_0] = (min(671065221, (max((min((arr_2 [i_1]), (arr_2 [i_1]))), ((~(arr_5 [8])))))));
                var_17 = 17555761557198812166;
            }
        }
    }
    var_18 ^= (min((min(((max(var_6, var_1))), (min(var_6, 333177559143286158)))), ((max((!32767), var_15)))));
    var_19 |= (((min((min(var_4, var_10)), (!var_3))) | var_1));
    #pragma endscop
}

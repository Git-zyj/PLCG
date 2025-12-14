/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((~6425813622566744756) || (((~(45 != var_11))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 |= (arr_0 [i_0] [i_1]);
                var_15 = ((((((min((arr_0 [i_0] [i_1]), -102)) ^ 45))) ? (~187) : (arr_3 [i_0] [i_0] [i_0])));
                var_16 = (max(var_16, ((min((((arr_0 [i_0] [i_0 + 2]) % -4275901325733758141)), 224)))));
                var_17 = ((14410003052046166922 > ((((arr_2 [i_0 - 1]) ^ (arr_2 [i_0 - 1]))))));
            }
        }
    }
    #pragma endscop
}

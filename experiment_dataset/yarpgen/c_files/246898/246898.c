/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 ^= (arr_5 [6] [i_1] [i_2]);
                    arr_7 [i_0] [6] [i_0 - 1] [i_0] = (arr_1 [i_0 + 1] [i_0 - 1]);
                }
            }
        }
    }
    var_15 = (min((((!(((var_2 ? 65535 : 1)))))), var_3));
    var_16 -= ((((max(var_11, var_13)) ? 4927299547347194307 : var_1)));
    var_17 = ((!(-180228596572421418 < 98)));
    var_18 = var_8;
    #pragma endscop
}

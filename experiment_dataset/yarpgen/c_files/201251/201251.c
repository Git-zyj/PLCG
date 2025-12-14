/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1 + 2] [i_0] = 32256;
                    var_13 = ((+((((max((arr_7 [i_0] [i_1] [i_1] [i_1]), var_5))) * (var_7 % var_3)))));
                }
            }
        }
    }
    var_14 = ((-(!var_4)));
    var_15 = (((max((((var_6 ? var_2 : -1075005373373194421))), (var_6 * var_4)))) ? ((((!var_3) < var_3))) : (((-20 + 2147483647) >> ((((var_5 ? var_2 : -8707486373112589292)) + 8707486373112589302)))));
    #pragma endscop
}

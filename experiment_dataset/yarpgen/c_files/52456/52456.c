/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = max(var_11, (max((var_7 | var_3), (var_7 == var_11))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0 + 2] = (var_0 ? (var_15 != var_14) : (max((arr_3 [i_0 - 1] [i_0]), (arr_3 [i_0 + 2] [i_0 + 2]))));

                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {
                    var_17 = (max(var_17, ((max(var_6, (min((max(7299981692778902653, 1)), (arr_3 [i_0] [i_0 - 1]))))))));
                    arr_10 [i_0] [i_0] [i_1] [i_1] = (min(((((min(var_12, var_5))) ? (min((arr_2 [i_1]), var_4)) : (var_13 >= var_6))), ((-(arr_4 [i_0 + 2])))));
                    arr_11 [i_0 + 2] [i_0] [i_0] [i_0 + 2] = (arr_3 [i_0 - 1] [i_2]);
                    var_18 = -119;
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= var_3;
    var_15 = (max(((-(var_1 + 4216))), (max(((var_9 << (6146 - 6135))), ((min(var_9, 16049)))))));
    var_16 = (max(((var_8 << (((8212 & 61320) - 8181)))), ((min((min(var_7, 30321)), (!var_1))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    var_17 = (((((arr_2 [i_1 - 1] [i_2 - 2] [i_1 - 1]) || (arr_3 [i_2] [i_1 + 2]))) && ((!((min((arr_5 [i_0] [i_0] [i_1] [i_2]), (arr_2 [i_2 - 1] [1] [i_0]))))))));
                    var_18 = (max((!30862), (min(((var_3 ? (arr_2 [i_2] [i_1 + 2] [11]) : var_2)), (((var_11 || (arr_5 [i_0] [i_2 - 3] [i_2] [i_2]))))))));
                }
            }
        }
    }
    #pragma endscop
}

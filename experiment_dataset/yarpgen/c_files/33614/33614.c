/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((min(488412234, var_15))) ? ((min(var_5, var_4))) : var_11))) ? ((~((var_15 ? 1 : 4116875506)))) : ((3 >> (22586 - 22581))));
    var_17 = var_11;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, (((var_11 + (((arr_6 [i_0] [i_1] [i_2]) ? 252 : (~19))))))));
                    var_19 = (((4 ^ -24527) >= (max((min(16269024744983950747, 239)), (((229 ? (-2147483647 - 1) : (arr_1 [i_0]))))))));
                }
            }
        }
        arr_8 [i_0] = ((((-(max(var_2, var_4)))) ^ (((((~31) || 0))))));
    }
    #pragma endscop
}

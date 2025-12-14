/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 = (((((~((896 ? var_12 : (arr_2 [2] [i_0])))))) ? (var_11 == 1) : (((arr_5 [i_0]) ? ((min(0, var_7))) : (arr_5 [i_0])))));
                    var_18 += (524287 | 1);
                    var_19 = (((((((var_7 && var_2) != ((min(0, var_9))))))) ^ (((((arr_1 [i_2]) ? var_8 : (arr_0 [i_0]))) * (((var_11 ? 1 : 34)))))));
                }
            }
        }
    }
    var_20 = var_1;
    var_21 = var_5;
    #pragma endscop
}

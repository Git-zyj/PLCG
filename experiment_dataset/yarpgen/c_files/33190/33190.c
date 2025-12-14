/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_14 |= (((min((((arr_1 [i_0]) * (arr_1 [i_1]))), ((233 * (arr_1 [14]))))) >> (max((((arr_4 [i_1]) * (arr_1 [i_0]))), ((min((arr_1 [i_0]), (arr_1 [i_0]))))))));
                var_15 = (min(var_15, ((max((min((min(var_8, 21)), ((((arr_4 [i_1]) >= 3632054905100944443))))), (((((var_8 + (arr_3 [i_0]))) >= (((min(233, 0))))))))))));
            }
        }
    }
    var_16 = (max(var_16, ((min(((((max(var_1, 13753405389614149173)) <= (1962 && 34482)))), (max((max(29, 5)), (var_4 + var_6))))))));
    var_17 = (max(var_17, ((((min(((max(var_6, var_10))), (max(var_8, var_1)))) + (max((var_2 * var_6), ((max(var_1, 5))))))))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_9));
    var_13 ^= var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (arr_1 [i_0])));
                var_15 -= (min((!-46), ((120 > (46 == 13429837777658193067)))));
                arr_4 [i_0] [i_0] = ((((13429837777658193067 ? 5482 : 13429837777658193067)) != -5483));
                arr_5 [i_0] = ((13429837777658193067 || (5482 % 255)));
                var_16 &= ((((min(((min(612031858, 1449696380))), var_9))) ? 4294967295 : ((((((17251757960660908712 / (arr_2 [i_0] [i_0] [i_0]))) == (arr_1 [i_1])))))));
            }
        }
    }
    #pragma endscop
}

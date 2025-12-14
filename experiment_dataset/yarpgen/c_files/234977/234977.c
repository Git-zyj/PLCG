/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = (max(((35611 * ((min(22, 178))))), (min(((((arr_1 [i_0]) < (arr_0 [i_0])))), -0))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 -= (max((min(((((arr_3 [i_0] [i_1 + 2]) > (arr_0 [i_1 + 1])))), ((10531651770306526192 ? 13 : 4094)))), (~255)));
                    var_17 = (max(var_17, (arr_5 [i_1 - 1] [i_0])));
                    var_18 = (max(var_18, (((((min(((230 ? 1 : 32)), var_2))) ? ((min(239, 61420))) : ((((((1 ? (arr_4 [i_1] [8]) : 255))) || (arr_4 [i_1] [i_1 + 2])))))))));
                    var_19 -= 10;
                }
            }
        }
    }
    var_20 = (max(var_20, var_0));
    #pragma endscop
}

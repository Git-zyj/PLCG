/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((min(((var_8 ? var_6 : var_5)), (var_5 > var_2))) & ((max(((204905457 ? 1 : -9166322591376931894)), var_8)))));
    var_12 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, ((((((-19590 ? -252471103 : 19616))) ? (((~(252471092 ^ 214157208)))) : ((((var_6 ? var_3 : (arr_3 [i_1]))) ^ ((((arr_1 [i_0] [i_0]) | (arr_7 [i_1] [4])))))))))));
                    var_14 = (max((((-19590 != (((min((arr_6 [12] [i_1]), var_0))))))), (~var_10)));
                }
            }
        }
    }
    #pragma endscop
}

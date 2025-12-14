/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_19 ^= (max(1155779658, ((1 ? 57025 : 5945218673905701922))));
                var_20 = (max(var_20, (((var_6 ? ((max(-1527135959, var_3))) : ((~(~1))))))));
                var_21 *= (~var_4);
            }
        }
    }
    var_22 = ((max(-var_12, var_15)));
    var_23 |= min(((min((min(267051256179963808, 1438465416)), var_0))), (((8850722866032445134 ? 0 : 1108137339))));
    #pragma endscop
}

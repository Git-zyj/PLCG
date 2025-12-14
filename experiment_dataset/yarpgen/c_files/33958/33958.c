/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] = -26;
                    var_16 = (min((((var_4 ? 2485933792087584989 : var_0))), 2485933792087584989));
                    var_17 = (min((((~(18446744073709551590 > 18)))), (arr_7 [i_0] [i_1] [1])));
                    var_18 = (((((-var_11 & ((1 / (arr_7 [i_0] [i_0] [i_0])))))) ? ((-1057920624 ? 17974151391185810318 : (~3237046672))) : (((-((3469005748 ? var_8 : (arr_2 [i_0]))))))));
                    arr_9 [i_1] = 3237046668;
                }
            }
        }
    }
    var_19 = var_1;
    var_20 = ((~var_7) ? var_10 : ((-3237046651 + (~var_0))));
    #pragma endscop
}

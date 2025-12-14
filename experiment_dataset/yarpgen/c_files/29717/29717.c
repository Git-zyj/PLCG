/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    arr_6 [i_0] [6] [i_0] = ((20605 ? -8537 : -8537));
                    var_10 |= var_2;
                }
                var_11 = ((183 < -8537) < (var_8 == var_0));
                arr_7 [i_0] [i_1] |= (((((var_6 * (arr_4 [i_1] [i_0] [i_0] [i_1])))) ? ((((var_7 && ((min((arr_2 [i_1] [i_1]), var_4))))))) : (((arr_4 [i_0] [i_1] [i_1] [i_1]) >> (((arr_3 [i_1]) - 4215986305333545453))))));
                var_12 = 14380;
            }
        }
    }
    var_13 = var_4;
    var_14 = (((((1 ? 0 : 73))) ? (var_5 & var_1) : var_8));
    #pragma endscop
}

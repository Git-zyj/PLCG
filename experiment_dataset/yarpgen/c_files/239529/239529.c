/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((min((13259 / 5224), (max((21706 % 8323), -59035)))))));
                arr_6 [i_0] [i_1] [i_1] = min(((1 && ((min(1, 21706))))), 1);
            }
        }
    }
    var_16 ^= (min((((30923 <= 18077) & (34613 * 30923))), var_9));

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_17 = (max(var_17, (((-(63498 > 52254))))));
        var_18 = (max(var_18, ((((max(18077, 0)))))));
        var_19 += (min((!0), 1));
        var_20 = (max(var_20, 13259));
    }
    var_21 = (min((~var_1), ((max((max(30923, 1)), (21685 <= 1))))));
    #pragma endscop
}

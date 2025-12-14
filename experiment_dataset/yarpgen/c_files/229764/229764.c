/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_11 = ((((max((min((arr_3 [i_0] [i_0]), var_8)), (((-657653792 ? (arr_1 [i_0] [i_1]) : (arr_2 [i_0] [0]))))))) & ((((max(-1402594310, var_0))) ? ((min(657653777, 657653798))) : (max(-8131916966321366833, var_3))))));
                arr_5 [7] [i_0] [3] = (min((((((min(var_10, (arr_3 [i_0] [i_0])))) ? ((10087894915849924402 ? (arr_3 [i_0] [i_0]) : var_6)) : ((max((arr_1 [i_0] [i_0]), -657653786)))))), (min(657653798, ((-8131916966321366834 ? 4647736266948435604 : 33))))));
                var_12 = (((((((((arr_1 [i_1] [i_0]) / -15093))) * (max(var_3, 3628106960344279758))))) ? ((((((arr_4 [i_0] [i_1 - 3] [i_0]) >> 1)) ^ (((var_9 ^ (arr_2 [i_0] [i_1 - 1]))))))) : (min((((arr_3 [i_0] [i_0]) ? var_5 : 4647736266948435609)), (((657653792 ? 657653822 : (arr_4 [i_0] [i_0] [i_0]))))))));
                arr_6 [8] |= (min((min(((((arr_2 [8] [i_1]) && 201))), (min(var_9, var_2)))), (max((var_1 && var_10), (min(var_0, (arr_0 [8])))))));
            }
        }
    }
    var_13 -= (((((((min(106, var_7))) ? (var_2 ^ var_7) : ((min(657653799, 340664788)))))) ? ((min(-11420, 2620597763))) : (((var_9 | var_7) ? ((480139557 ? 657653787 : 10087894915849924402)) : (((-1215876468 ? -657653787 : -657653800)))))));
    #pragma endscop
}

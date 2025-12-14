/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= var_3;
    var_18 = var_1;

    for (int i_0 = 4; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_19 = (max(4052865083, var_12));
        arr_3 [i_0] = (((var_4 ? (arr_1 [i_0 - 2]) : (arr_2 [i_0 + 1] [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = (max(3042, -1784751385));
                    var_21 = ((((max((max(11107490879144478497, -175869862)), ((-(arr_1 [i_0 + 2])))))) ? (((-458392920 ^ -591762602) & 229)) : ((max(0, 13526968186418405495)))));
                    var_22 ^= 230;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                {
                    var_23 = max(((12124731911971719668 ? 1551424207 : 0)), (arr_14 [16] [i_3] [i_4 + 4] [i_0]));
                    arr_15 [i_0] [i_0 + 1] [i_3] [i_0] = (((1 ? 4725350732552827335 : 1126143889)));
                    var_24 = var_7;
                    var_25 -= (((((arr_5 [i_0 + 1] [i_0 - 2] [i_0]) ? ((-(arr_2 [i_0] [i_0]))) : var_3))) || 24557);
                }
            }
        }
    }
    for (int i_5 = 4; i_5 < 19;i_5 += 1) /* same iter space */
    {
        var_26 = 140;
        var_27 |= ((-1332787390 ? ((((((arr_6 [i_5] [i_5] [i_5]) / (arr_4 [i_5] [i_5] [i_5])))) | 23)) : ((((arr_1 [i_5]) & ((((arr_12 [i_5] [i_5] [i_5] [14]) & (arr_16 [i_5])))))))));
    }
    for (int i_6 = 4; i_6 < 19;i_6 += 1) /* same iter space */
    {
        var_28 = (max(var_28, ((max((((var_6 == (arr_4 [i_6] [i_6] [i_6 - 2])))), (max(var_10, var_4)))))));
        var_29 = (((var_9 <= (arr_13 [i_6] [i_6] [i_6 - 3]))));
        var_30 = (arr_19 [i_6 - 2] [i_6 - 1]);
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (max(((-(min(-9181383129305235611, -1)))), var_3));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2 - 1] = (max(((((max(3635141060, 42103))) ? 1777172572 : (-79 % 35353))), ((((22624 & 2) == (max(3407644335, 4333256312745891132)))))));
                    arr_10 [7] [i_1 + 1] [7] [i_2 - 1] = (((-21187 > 4333256312745891132) && 7));
                }
            }
        }
        var_19 = ((8745 ? (((18446744073709551615 ? 32752 : -3614271418689621722))) : (-2147483647 - 1)));
    }
    var_20 = var_17;
    var_21 = ((!(((((15850128491851100841 ? 48 : -1)) % var_17)))));
    #pragma endscop
}

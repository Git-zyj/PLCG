/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((((((var_6 || var_2) && (var_4 - 134216704)))) > (((((min(-7409084535929202996, -1))) && (((134216704 / (arr_6 [i_0] [i_0] [11] [i_0 - 1])))))))));
                    var_17 = ((((((var_2 ? -17310 : (arr_2 [i_1] [i_2]))) * var_9)) > ((-1413684558915270234 ? (0 * 24130) : ((var_16 ? 2147483647 : 193638453))))));
                    var_18 = ((var_14 <= ((15839839116956158785 ? (var_16 || var_7) : (~var_12)))));
                    var_19 |= (((((max(0, (arr_3 [i_1]))))) || 7409084535929203014));
                    arr_9 [i_0] [i_1] [i_2] = ((((var_10 - var_15) == (((arr_3 [i_0]) + var_8)))));
                }
            }
        }
    }
    var_20 = var_16;
    var_21 = (((((((var_1 ? var_13 : var_16)) * 1))) ? (var_8 || 17617080104294444744) : (8589957309607066589 * 1)));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((max((max(var_7, 1)), ((var_13 ? var_13 : var_1)))))));
    var_16 = ((-((-1292727085893681233 ? (max(64714, 1292727085893681232)) : (~var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 11;i_4 += 1)
                            {
                                arr_17 [i_2] = ((((((var_3 ? 1292727085893681233 : (arr_0 [i_3]))) != -822)) ? -13 : -3896711072114427133));
                                var_17 = (!64713);
                            }
                            var_18 ^= (((~(~1))));
                        }
                    }
                }
                arr_18 [i_0] = (max((~822), 830));
                arr_19 [i_0] = var_10;
            }
        }
    }

    for (int i_5 = 4; i_5 < 19;i_5 += 1)
    {
        var_19 = (max(var_19, (((!((((arr_21 [i_5 - 1] [i_5 - 3]) / (arr_20 [i_5 + 3])))))))));
        var_20 = (max(var_20, (((+((max((!var_5), (arr_21 [i_5 - 4] [i_5])))))))));
        var_21 ^= ((((((!16814819686510363130) << (var_8 + 195542602164727943)))) ? (!9284) : (-490171103433202607 - -32760)));
    }
    #pragma endscop
}

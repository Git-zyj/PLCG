/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(60, (((var_18 < (140 > var_9))))));

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        var_20 += (((83 << 0) * (((186 <= 9) ? (187 * var_16) : -48))));
        var_21 = ((-((60 * (83 * 2723941696)))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_7 [i_0 - 4] [i_0 - 4] = (min((min(1950086579, 32780)), (~-43)));

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                var_22 = (((((202 ? 202 : 2236663803)) != (((max(66, 1)))))));
                var_23 = (-7516008233876766294 > (!193));
                var_24 = ((-(((((15602886502832976085 ? 18206 : 18069016984886676380))) ? ((-1404276368 ? 118 : 107311936)) : (max(var_5, var_3))))));
            }

            /* vectorizable */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    var_25 = (1 ? 7130783 : 32784);
                    var_26 = (~226);
                }
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    var_27 = ((~((9006924376834048 ? 54 : 9006924376834054))));
                    arr_19 [i_0] [i_0] [i_3] [i_5] = (((32782 - 197) ? (((28499 ? 134 : 14728))) : 4187655353));
                    arr_20 [i_0] [18] [i_3] [i_5] = (((-100 ^ 17217) ^ -645872729));
                }
                var_28 = 96;
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            var_29 = (min(var_29, -100));
                            arr_26 [i_0] [i_1] [12] [i_6] [i_0] = (-(1 * -74));
                        }
                    }
                }
                var_30 = 113;
            }
            var_31 = (max(((3434884772607836071 ? -93 : (max(4827723153448694806, 118)))), 4187655359));
        }
    }
    var_32 = var_7;
    #pragma endscop
}

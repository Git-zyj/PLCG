/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    var_18 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_19 = 29595;
                var_20 = (max(var_20, ((min((arr_5 [i_0]), (~17898786153554155314))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_21 = ((12305615739587086094 ? 606399965 : ((((max(1, 90))) ? 118 : 1))));
                            var_22 = ((((((arr_3 [i_3] [i_3] [i_3]) ^ (((arr_0 [i_0] [i_0]) ? var_12 : 1))))) ? (min((max((arr_3 [i_0] [i_0] [i_0]), 6599612673334709126)), ((((arr_4 [i_1]) ? var_13 : 127))))) : ((var_13 ? -606399966 : (arr_0 [i_0] [i_0])))));
                        }
                    }
                }
                var_23 = (max(var_23, -606399965));
                var_24 = -2147483627;
            }
        }
    }
    #pragma endscop
}

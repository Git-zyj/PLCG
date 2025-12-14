/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_9 [i_2] [i_1] |= var_15;
                            arr_10 [i_0] = ((~((9223372036854775798 ? (arr_4 [i_0] [i_0] [i_3 + 1]) : (arr_8 [i_3] [i_3] [i_3 + 2] [i_3 + 1])))));
                        }
                    }
                }
                var_18 = (min((13239 < -439444785), (min((arr_1 [i_1 - 1]), 7))));
                arr_11 [i_0] = (min((((21 + ((max(32767, 32767)))))), ((((((arr_8 [i_0] [i_0] [i_0] [i_1]) ? 3968 : (arr_5 [6] [6] [i_0])))) + (min((arr_7 [4] [i_0] [i_0] [i_1 - 2]), var_3))))));
                var_19 ^= (min((arr_0 [i_0] [i_0]), (!235)));
            }
        }
    }
    var_20 = var_10;
    #pragma endscop
}

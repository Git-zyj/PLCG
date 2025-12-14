/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        var_10 = 8599984891070648388;
        arr_3 [i_0 - 4] [i_0] = ((((((arr_1 [i_0 - 1]) ? 3173762189758720625 : 235350351724709263))) ? -492044342 : (max(((var_0 ? 12771265588045473317 : (arr_1 [i_0 - 3]))), (((arr_2 [i_0 + 1]) ? 5675478485664078299 : 12771265588045473317))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            var_11 ^= (max(5675478485664078298, (max((arr_9 [i_1]), 5675478485664078298))));

                            /* vectorizable */
                            for (int i_5 = 1; i_5 < 19;i_5 += 1)
                            {
                                arr_20 [i_5 - 1] [i_4] [i_3] [i_1] [i_2] [i_2] [i_1] &= 5675478485664078299;
                                arr_21 [i_1] [i_3] [i_4] [i_5] = -4443440548646803801;
                                var_12 &= 12771265588045473316;
                            }
                            var_13 *= (37266 > 217);
                        }
                    }
                }
                var_14 = 5675478485664078299;
            }
        }
    }
    var_15 = max(-16211, 44594);
    #pragma endscop
}

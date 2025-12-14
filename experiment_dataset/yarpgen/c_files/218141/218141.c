/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] [i_2] = ((~(~4194303)));
                    var_18 = ((+(((arr_2 [i_0 - 2] [i_0 + 1]) % (arr_2 [i_0 - 2] [i_0 + 1])))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    var_19 = (max(var_19, ((((((((15121 ? 50415 : 0)) <= (((max(65535, (-127 - 1)))))))) - (~15130))))));
                    var_20 = (max(-4194304, (((((((arr_15 [1] [i_3] [i_5]) == 50405)))) * (~0)))));
                }
            }
        }
    }
    #pragma endscop
}

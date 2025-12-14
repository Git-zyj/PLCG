/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 4780992459245559036;
    var_15 = (var_5 % 17568519118075555690);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((((((arr_3 [i_0] [i_1]) <= (arr_4 [i_0]))))) > (((arr_2 [17] [i_0] [i_0]) ? 2841297051223772727 : 0))))) - ((-35 ? -2787 : 41328)));
                var_16 = (min(var_16, (!1)));
                var_17 ^= ((((((16338152793387262298 > (5413579852159837761 && -68))))) % ((67100672 ? (arr_5 [2] [2]) : 5883738176834372594))));
            }
        }
    }
    #pragma endscop
}

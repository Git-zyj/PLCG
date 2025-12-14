/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~198);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((((min((arr_4 [i_0]), (-2147483647 - 1)))) ? (-2147483647 - 1) : (arr_2 [15] [20])));
                    var_11 = (((((((-2147483647 - 1) ? (-2147483647 - 1) : (-2147483647 - 1)))) ? (-2147483647 - 1) : (-532729682 <= -532729682))));
                    var_12 = (i_0 % 2 == 0) ? ((((((!(arr_7 [i_0] [i_2 - 1])))) >> (((max((max((arr_4 [i_0]), 3998400636061693917)), -1266579681)) - 18446744072442971906))))) : ((((((!(arr_7 [i_0] [i_2 - 1])))) >> (((((max((max((arr_4 [i_0]), 3998400636061693917)), -1266579681)) - 18446744072442971906)) - 596736523)))));
                }
            }
        }
    }
    var_13 = (~var_8);
    var_14 = -25;
    var_15 &= 532729682;
    #pragma endscop
}

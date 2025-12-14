/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((((max(0, 13490))) ? (((2 ? var_8 : 1799991061))) : (3369667074100441976 ^ -127)))) ? var_7 : ((((55 << var_9) ? ((549487378432 ? 31 : var_10)) : -7124842649302482839)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_1] [i_2] [i_2] = 78;
                    var_13 = (min(var_13, ((((((536866816 ? (~8) : -0))) ? ((904424750 ? -2106897067 : 281474976710655)) : (((24 | ((105 ? var_0 : 12))))))))));
                    var_14 |= ((1 ? (!var_10) : (min(((max(1, var_11))), 1157462994))));
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 6;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_11 = -12254902;
                        var_12 = (min(1528629219, 1528629212));
                        var_13 -= ((7 ? -12254894 : 12254909));
                    }
                }
            }
        }
        arr_13 [i_0] = ((((max(0, 23))) ? (((1528629212 ? 1528629235 : 0))) : (max(8244444177790261580, 12254892))));
        arr_14 [i_0] = ((min(-115, 38553)));
    }
    var_14 = 1;
    var_15 = ((((max(((-12254933 ? 2766338067 : 20)), (((-108 ? 127 : -124)))))) ? (((-7357769477390952556 + 9223372036854775807) >> (var_8 - 2125720661608393158))) : ((max((max(1528629219, -1903433240)), (min(994634174, -68)))))));
    #pragma endscop
}

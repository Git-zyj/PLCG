/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [0] [0] = ((((((((max(-5508, -1))) ? ((min(-32760, 1))) : ((min(29575, 29576))))) + 2147483647)) << (29581 - 29581)));
                    var_14 = (((((((-29606 <= 4277727735341232175) <= ((max(32, -99))))))) != 10311072326732592156));
                    arr_8 [i_2] = ((((max(((15 ? -1 : 56)), ((max(2, (-32767 - 1))))))) - 10311072326732592147));
                    arr_9 [i_0] [i_0] [i_0] [i_0 - 1] = ((((min(((8135671746976959455 ? 45971 : 4095)), 16384))) ? (((((-4776788994008126887 ? 8135671746976959456 : 16393))) ? ((((-71 + 2147483647) >> (-2339287650513771639 + 2339287650513771653)))) : (max(1, 3440186878152458070)))) : 255));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 18;i_4 += 1)
        {
            {
                var_15 = (((1 ? 2160304937 : 9)));
                var_16 = (max((-125 / -8172), (max((min(2351134986, 22)), -1577551242))));
            }
        }
    }
    var_17 = var_9;
    var_18 = (max(var_18, ((max(12, (((48117 & -9223372036854775806) ? (-54 | 255) : -120)))))));
    #pragma endscop
}

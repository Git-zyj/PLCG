/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_14 = (((52 != -52) >= ((((((0 ? 966849646 : -77)) + 2147483647)) << (((~-17) - 16))))));
                            var_15 = (-1 % 29231);
                        }
                    }
                }
                arr_12 [i_1 + 1] = ((((max(2367638477, 140737488355327))) || (((51 ? -697482798 : 786308379)))));
                var_16 += ((+(((-58 / -58) / ((min(-20596, 1)))))));
                var_17 += (((((7 + ((6962764815871624387 ? 3 : 58))))) ? (872987247 >= 65529) : (~1)));
            }
        }
    }
    var_18 = (min(((2977937421 ? 14 : 0)), ((max((8191 << 1), (max(38693, 2412225052)))))));
    var_19 &= var_11;
    var_20 *= ((2372 ? 1 : 0));
    #pragma endscop
}

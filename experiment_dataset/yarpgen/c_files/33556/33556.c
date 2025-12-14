/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (250 % 34614);
    var_13 ^= (((min(-1689553541, (8415722927792360503 - -728))) <= (((((1 ? 3 : -1068224060)) % 250)))));
    var_14 = ((!(((+((9 ? (-9223372036854775807 - 1) : 26632)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (min((min((-9223372036854775807 - 1), 150)), (-1575280786625744003 ^ -1)));
                var_16 &= (--728);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_17 = ((-((508193085 ? -2962 : 1023))));
                            var_18 |= (((~747) ? ((~((8278 << (3170 - 3164))))) : (((min(127, 1317394827)) >> (((~-2037375845) - 2037375834))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

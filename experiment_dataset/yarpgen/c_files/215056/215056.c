/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += ((18018765278965936612 - (~18018765278965936612)));
    var_17 += (((1 << (116 - 92))));
    var_18 |= ((~(((3770170243 <= (32757 / 126))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = (140 / -18385);

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_9 [i_2] [i_1] [i_0 + 1] = ((18446744073709551615 / (-9 - 857934125)));
                    var_20 ^= (18018765278965936612 ^ 9244096739107577548);
                    var_21 *= 18446744073709551615;
                }

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_12 [i_0] [i_0] [i_3] = ((((2224607017873052129 ? (15289600027270058564 + 8520438495980553913) : 3985030759)) ^ (((309936532 << ((((-1 ? 16336951469736522270 : 1)) - 16336951469736522257)))))));
                    var_22 *= ((-32758 ? (((4994661995465739588 <= 2109792603973029346) ? (~13) : -117)) : (~26873)));
                    arr_13 [i_0] = 32757;
                }
            }
        }
    }
    var_23 |= (5844710004506283283 ^ 7443242402026179482);
    #pragma endscop
}

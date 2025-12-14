/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 303852403;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = 9757045573278681556;
                var_15 = (min(var_15, 1));
                var_16 = ((3404376015 ? 5775429369459343355 : 1763));
            }
        }
    }
    var_17 = 1;

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    var_18 = ((2058565618 ? (95 * 1) : 2358861282));
                    var_19 ^= 2147483645;
                    var_20 = 2058565640;
                    arr_14 [i_2] [i_2] = -24997;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 15;i_7 += 1)
                {
                    {

                        for (int i_8 = 2; i_8 < 14;i_8 += 1)
                        {
                            var_21 = ((((((8113204262895053201 ? 49093 : 9)) % -1590)) % 2058565621));
                            var_22 = (max(var_22, 9223372036854775788));
                            var_23 = (max(var_23, -7678));
                        }
                        var_24 = ((49118 ? -22 : 9223372036854775785));
                    }
                }
            }
        }
    }
    #pragma endscop
}

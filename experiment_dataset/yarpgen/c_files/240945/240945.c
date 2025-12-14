/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -1014651875;
    var_19 &= ((min((max(-7988221197405753366, -53)), (~-65))) - ((((!((min(379360283612265217, (-9223372036854775807 - 1)))))))));
    var_20 = (min(var_20, (((~(4405408201475198432 | 9223372036854775807))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_21 = min(18446744073709551615, (min(13528070958476053527, -183)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_22 ^= (min((max(-21141, (1023 || 1767948604))), (((((min(17546162103291394431, -32))) || ((max(25122, 0))))))));
                        var_23 = ((-1 ? 3276106568 : (min(((min(32825, 331302666))), -18446744073709551615))));
                        var_24 = (((((((max(-40, 9223372036854775807))) ? ((18836 ? 9223372036854775807 : 30459)) : (((65512 ? 32767 : 11495)))))) || ((((4256350167442501440 <= 0) ^ -231)))));
                        arr_10 [i_2] [i_0] [i_0] [i_3] = ((-((((min(1566056926, -15))) / (18446744073709551607 | 2527018691)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = (((((!(arr_3 [i_0])))) + ((-(var_1 < 22847)))));
        arr_4 [i_0] = ((max((((arr_0 [i_0] [i_0]) ^ (arr_3 [i_0]))), 64)) != (((arr_2 [i_0]) ? (!31658) : ((255 % (arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 4; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_1] [i_3] = (min(((((~165) ? 77 : 81))), (((min(5700070691711024728, -17140)) % 84))));
                    var_13 += (arr_8 [i_2]);
                }
            }
        }
        arr_14 [i_1] [i_1] = ((((min(6623354893684410057, 98))) ? var_3 : (~1023)));
        var_14 = (~17592186044415);
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        arr_17 [i_4] = 255;
        var_15 |= (-((((-(arr_9 [16]))))));
    }
    var_16 = -6623354893684410058;
    var_17 *= (max(32767, -31));

    for (int i_5 = 1; i_5 < 22;i_5 += 1)
    {
        var_18 = 32767;
        arr_20 [i_5] = (max(((32 ? 23 : (11 * 32))), 45));
    }
    #pragma endscop
}

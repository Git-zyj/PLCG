/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_8;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_11 *= ((((min(-42713539, -22))) ? (min((arr_0 [i_0 + 2]), (arr_0 [i_0 + 1]))) : ((min((arr_1 [i_0 + 2]), (((-22 + 2147483647) >> (127 - 114))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, (!42713539)));
                    var_13 -= (arr_4 [i_0 - 1] [i_1] [i_2] [i_2]);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_14 *= ((((!((!(arr_8 [i_3]))))) && (((!-24513) && ((min(var_7, var_2)))))));
        arr_10 [14] |= (arr_9 [2] [2]);

        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            var_15 *= (((var_6 - 5033) ? 16056762002470859299 : (((var_5 ? -2956327969348209614 : 1)))));
            arr_13 [i_3] [4] [i_3] |= ((~(((arr_8 [i_4 + 1]) & 1))));
            var_16 |= (min((arr_8 [i_4 - 1]), ((8052940288899119005 ? -108 : 9223372036854775807))));
        }
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_17 += (min(((-((16056762002470859299 ? var_6 : 9223372036854775807)))), (!var_5)));
        var_18 &= (--117);
    }
    var_19 += var_6;
    var_20 |= var_7;
    #pragma endscop
}

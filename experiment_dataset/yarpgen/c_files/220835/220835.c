/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = ((-(max(((min((arr_4 [i_1] [i_1] [i_0]), var_1))), (min(1133241518, -6584))))));
                    arr_9 [i_0] [i_1] [i_0] &= (max((min((-24426 + var_7), var_1)), ((44 ? 44 : -24426))));
                }
            }
        }
    }
    var_14 = (max(-112, 1208722982));

    for (int i_3 = 3; i_3 < 10;i_3 += 1)
    {
        var_15 += (((arr_5 [i_3 - 1]) >> ((((max(var_8, (max(31551, var_10))))) - 31543))));

        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            var_16 -= (max(-28962, 7));
            arr_15 [i_4 - 1] = var_3;
            var_17 *= ((((-28970 <= -24450) ? var_8 : (arr_4 [i_3] [i_4] [i_4]))) * (!12500));
        }
        for (int i_5 = 1; i_5 < 7;i_5 += 1)
        {
            arr_18 [i_5] = (((((!(((214 ? var_8 : -24426)))))) ^ (min((min(1820568238, -97)), (arr_0 [i_3])))));
            var_18 *= ((~((max(6593, 212)))));
            arr_19 [i_3] [i_5] = -1;
        }
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 12;i_6 += 1)
    {
        arr_22 [i_6] &= ((((!(arr_20 [i_6] [i_6 + 4]))) ? -12478 : (arr_20 [i_6 - 1] [i_6 + 2])));
        var_19 = ((~((28942 ? 1 : -24424))));
    }
    var_20 = var_6;
    var_21 &= min(1727000258, 1);
    #pragma endscop
}

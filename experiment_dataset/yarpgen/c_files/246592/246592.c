/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((117 ? 4008 : 15742));
    var_14 = (((((130 ? 49794 : 49791))) ? 49794 : (255 == 130)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_15 |= ((-4659 - ((min((arr_2 [16] [i_1]), 211)))));
            arr_5 [i_0] [i_0] [i_0] = (i_0 % 2 == 0) ? ((((((!(((var_4 >> (8405 - 8375))))))) >> (((((~var_8) ? (arr_3 [i_0] [i_0]) : (((!(arr_3 [i_0] [i_0])))))) - 136))))) : ((((((!(((var_4 >> (8405 - 8375))))))) >> (((((((~var_8) ? (arr_3 [i_0] [i_0]) : (((!(arr_3 [i_0] [i_0])))))) - 136)) + 112)))));

            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                var_16 = max((arr_1 [i_0] [i_0]), 99);
                arr_8 [4] [4] [i_0] [i_1] |= ((~((((max(108, 255))) + 248))));
                var_17 = (max((min(39742, (~var_2))), ((-(arr_2 [i_0] [i_2 - 1])))));
            }
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                var_18 *= (~var_1);
                var_19 = (((((var_11 % (arr_3 [i_0] [i_0])))) ? ((max((arr_9 [i_0] [i_1] [i_1]), var_6))) : var_1));
                var_20 = ((-var_8 <= (((((!(arr_7 [i_0] [5] [5])))) & (arr_0 [i_3])))));
            }
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                var_21 ^= (((122 || 0) & (((((~var_0) + 2147483647)) << (((~var_5) - 3854))))));
                arr_15 [i_0] = (max((max((((arr_7 [12] [13] [i_4]) * (arr_3 [i_0] [i_0]))), var_12)), ((((((min((arr_14 [i_1] [i_1] [3]), -19922))) + 2147483647)) >> ((((8405 ? var_9 : var_1)) - 36884))))));
            }
            var_22 ^= (~25794);
            var_23 -= (max(var_8, (arr_11 [i_0] [i_0] [i_1])));
        }
        var_24 *= (~var_11);
        var_25 |= 7574;
        var_26 |= (~2061);
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_17 += (((((arr_2 [i_1] [i_1]) >= (arr_0 [i_1]))) ? (max(var_7, (arr_3 [i_1] [i_1]))) : (arr_2 [i_0] [i_1])));

            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                var_18 ^= (((40655 ? 40661 : 40665)));
                var_19 = ((-((var_14 ? (max(4985737389991968071, var_13)) : (arr_0 [i_0])))));
                var_20 = ((((((arr_4 [i_1] [i_2 + 4]) - (arr_4 [i_0] [i_2 + 4])))) ? ((((!(arr_6 [i_0]))))) : (arr_6 [7])));
            }
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_21 -= (arr_1 [i_0] [i_3]);
            arr_9 [i_0] = ((((((-4985737389991968089 ? 24880 : 65529))) ? (arr_2 [i_0] [i_3]) : ((((arr_1 [i_0] [i_0]) ? 1 : (arr_3 [i_0] [i_0])))))));
        }
        arr_10 [i_0] [i_0] = var_9;
    }
    var_22 = (min(((((min(1743236851, -4985737389991968058))) ? ((var_2 ? 5458996051944056956 : 18446744073709551605)) : var_6)), 57645));
    var_23 = var_12;
    #pragma endscop
}

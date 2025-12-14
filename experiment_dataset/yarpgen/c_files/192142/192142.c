/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((max(var_2, var_7)), (var_3 != var_3)));
    var_11 = var_0;
    var_12 = (((((var_0 + ((max(var_4, var_2)))))) ? (max((~198), (~var_1))) : ((((max(var_5, var_2))) ? var_8 : ((var_0 ? 47 : 198))))));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_13 = (((arr_1 [2] [i_0]) && (arr_6 [i_0] [0] [i_0 - 1])));
            var_14 = (max(var_14, var_5));
            var_15 = (max(var_15, ((-(((!(((~(arr_3 [4])))))))))));
            var_16 ^= (arr_6 [i_1] [i_1] [i_0 - 1]);
        }
        var_17 = 16384;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        var_18 = (max(var_18, (((~(min((((-30 ? var_5 : (arr_4 [i_3])))), (arr_9 [i_0] [i_0 + 1]))))))));
                        var_19 = (max(var_19, (((((((arr_4 [i_0 - 1]) ? var_2 : var_8))) & var_7)))));
                        var_20 = ((118 ? (arr_9 [1] [i_4]) : var_4));
                    }
                }
            }
        }
        var_21 -= ((-(max((max(8848, (arr_9 [i_0] [i_0]))), -16385))));
    }
    #pragma endscop
}

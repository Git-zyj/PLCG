/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 9223372036854775802;
    var_17 = (!var_15);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        var_18 ^= 15433;
                        arr_12 [i_0 + 1] [i_1] [i_2 + 1] [i_0] = (max((arr_4 [i_0]), (max(var_11, (arr_9 [i_0 + 1] [4] [i_2 + 1] [i_3 + 1])))));
                        var_19 = ((-(((arr_3 [i_0] [i_0 + 1] [i_3 - 2]) | -var_14))));
                    }
                    for (int i_4 = 3; i_4 < 16;i_4 += 1)
                    {
                        arr_17 [i_0 + 1] [i_0] [i_0] [i_0 + 1] = ((((min(128, 123))) && ((((min((arr_6 [i_0 + 1] [i_0] [i_2 + 1] [i_4]), 1)) ? (((min((arr_8 [i_1 + 1] [i_2 + 1] [i_0]), 8)))) : var_4)))));
                        arr_18 [i_0] [i_0] = (min(((((var_0 ? -5925 : (arr_3 [i_0] [i_0] [i_2 + 1]))) + ((var_7 ? var_1 : (arr_3 [i_0] [i_0] [i_0]))))), var_3));
                        var_20 = ((-((5924 ? -5921 : 3976))));
                    }
                    var_21 = (var_10 | ((max((max((arr_9 [i_0] [i_0] [i_0] [i_0]), var_11)), (max(54645, (arr_0 [i_0 + 1])))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 17;i_6 += 1)
        {
            {
                var_22 = (min(var_22, ((((((15433 && 236) ^ (var_3 && var_12))) ^ (max(14544, -1214146542)))))));
                var_23 = ((min(0, (arr_7 [i_5 - 1]))));
                var_24 = (((var_0 ? var_7 : (((max(var_13, var_9)))))));
            }
        }
    }
    #pragma endscop
}

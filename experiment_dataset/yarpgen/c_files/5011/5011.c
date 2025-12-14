/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 57741;
    var_14 = var_11;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_15 = (min(var_15, (((((min((arr_2 [0]), (1 && -46)))) ? ((-56 ? var_0 : 2693278381212657579)) : ((max(((((arr_5 [6] [10] [10]) || var_12))), 2887684))))))));
            var_16 *= var_4;

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                var_17 = (arr_8 [3] [i_0] [i_0] [i_0]);

                for (int i_3 = 3; i_3 < 18;i_3 += 1)
                {
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (!((max((arr_9 [i_0] [i_3 + 1] [1] [i_3]), (arr_9 [12] [i_3 - 1] [0] [i_3])))));
                    var_18 = (((arr_2 [i_0]) ^ ((min((1646832595 ^ -259905784), 2887696)))));
                }
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    var_19 = (max(var_19, ((((-2887689 + 2147483647) >> ((((var_6 ? (arr_6 [i_4] [i_1] [i_2] [i_4]) : (arr_4 [i_2] [i_2]))) - 7681)))))));
                    var_20 = var_8;

                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_21 = (min(var_21, ((((8 ? 4012696391296088812 : 2887705))))));
                        var_22 = ((((((((var_7 ? 71 : 74))) ? -60 : var_4))) ? ((((max(var_3, 3574805209))) ? var_5 : 2887677)) : ((min(-var_4, 45)))));
                    }
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_23 = 2887705;
                        var_24 = (min(-72, (-80 - -38)));
                    }
                    arr_20 [i_0] [i_1] [i_0] = 1;
                }
                var_25 = var_7;
            }
            arr_21 [i_0] [i_0] = (arr_15 [i_0]);
            arr_22 [i_0] [i_0] [13] = (arr_2 [i_0]);
        }
        var_26 = (min(-1048383078, (max(-44, ((74 ? var_9 : -1940071631))))));
    }
    #pragma endscop
}

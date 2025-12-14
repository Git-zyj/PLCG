/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    arr_6 [5] [i_1] [i_0] = (~((((min(var_11, (arr_2 [i_2] [i_2] [i_2])))) ? (min(49623, (arr_0 [16]))) : 65528)));
                    var_12 = ((65513 != (min((min(var_9, (arr_0 [i_1]))), ((((arr_1 [i_1] [i_2]) ? var_8 : 42281)))))));
                    arr_7 [i_2] [i_1] [i_1] [i_1] = (arr_2 [i_0] [i_0] [i_0]);
                    var_13 = (((-(arr_3 [i_0 + 1]))));
                    var_14 = 42281;
                }
            }
        }
    }
    var_15 = 23;
    var_16 = (!22);

    for (int i_3 = 3; i_3 < 24;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 24;i_4 += 1)
        {
            arr_13 [i_3] [i_3] [i_4] = (-32767 - 1);
            arr_14 [i_3] [i_3] = (max(-6014508914333268129, (2147483617 != -32740)));
            arr_15 [i_3] [i_3] [i_4] &= (arr_10 [i_4] [i_4]);
            var_17 = ((((65513 + (arr_10 [i_3] [i_3 - 3]))) - ((max((arr_10 [i_3] [i_3 - 2]), var_4)))));
        }
        for (int i_5 = 1; i_5 < 23;i_5 += 1)
        {
            var_18 = (min(1293007698, -6));
            var_19 = (max(var_19, ((min(((((arr_12 [16] [i_3 - 3]) == -1689410682526248912))), ((23 ? var_0 : (arr_12 [8] [i_3 - 1]))))))));
            var_20 |= (((var_5 << (1395018998 - 1395018998))));
            var_21 = var_0;
        }
        var_22 = ((var_11 - (((var_2 != (min(var_9, 1764144093)))))));
    }
    for (int i_6 = 2; i_6 < 17;i_6 += 1)
    {
        var_23 = (max(var_23, (arr_4 [i_6] [i_6 - 2] [i_6] [i_6])));
        var_24 = (min(var_24, ((min((min(var_10, (arr_10 [6] [i_6 - 1]))), (arr_18 [i_6 + 1] [i_6 + 1]))))));
    }
    #pragma endscop
}

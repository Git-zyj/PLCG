/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                arr_8 [i_1] [i_0] = var_1;
                var_18 = 5882159154767509006;
            }
            arr_9 [i_0] [i_1] = 1;
            arr_10 [i_0] [i_1] [i_1] = (((max((arr_7 [i_0 - 1] [i_0] [i_1 - 2] [i_0]), (arr_7 [i_0 + 1] [i_0] [i_1 - 2] [i_0]))) - (arr_6 [i_0])));
        }
        arr_11 [i_0] = ((((!(8722965885890595351 >= 73))) ? (((74 == (((arr_6 [i_0]) << 1))))) : 1939204783));
        var_19 = (max(var_19, 25930));
    }
    var_20 = (max(var_13, var_5));
    #pragma endscop
}

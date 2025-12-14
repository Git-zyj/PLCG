/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 = (((~7) || (((arr_0 [i_0] [i_0]) || (arr_0 [i_0] [i_0])))));
        arr_3 [i_0] [i_0] = (min((((arr_1 [i_0]) ^ (arr_1 [i_0]))), ((~(arr_1 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (((arr_4 [i_1 - 1] [i_1 - 1]) - (arr_4 [i_1 - 1] [i_1 + 1])));
        arr_7 [i_1] [i_1] = (0 ? 0 : 7436830826047585507);
        var_14 = (max(var_14, (((-(arr_4 [i_1 + 1] [i_1 + 1]))))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_12 [i_2] [1] = (min(0, 0));
        arr_13 [i_2] = (((arr_5 [i_2] [i_2]) ? (arr_9 [i_2] [i_2]) : ((var_4 ? 15938 : ((~(arr_11 [i_2])))))));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_17 [i_3] [i_3] = (max(7, (arr_8 [14])));
        var_15 = (max(var_15, (arr_8 [0])));
    }
    var_16 = ((-((-(var_11 ^ var_11)))));
    var_17 = (min(var_17, ((((max(11009913247661966108, 3960886784)) < var_3)))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_6 [i_0] = ((((max((arr_4 [i_0 - 2]), (arr_4 [i_0 - 1])))) && ((((arr_4 [i_0 - 2]) + (arr_4 [i_0 + 1]))))));
            arr_7 [1] [1] = (max((((var_6 % var_10) ? 3525308726 : ((var_11 ? (arr_3 [i_0 + 1] [i_0 + 1]) : -1)))), (-127 - 1)));
        }
        var_20 = (min(((((((1 >= (arr_1 [i_0] [i_0])))) + var_18))), (max(8775149817368580971, ((((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0 + 1]) : var_0)))))));
    }
    var_21 = var_13;
    #pragma endscop
}

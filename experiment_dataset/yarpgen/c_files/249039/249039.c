/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (((!-var_6) ? ((max(((var_16 ? var_12 : var_9)), ((515175712 ? 46741 : 1583844476))))) : (min(var_6, (~var_4)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            arr_6 [i_1] = (max(((-(!9))), (((arr_3 [i_1 - 1] [i_1] [i_1]) ? var_9 : (~var_4)))));
            arr_7 [i_1] = (max((56332 || 18794), ((!(((var_1 ? var_5 : var_9)))))));
        }
        var_18 |= (((((min(8887164745507204661, 18794)))) ? (59407 + 22) : ((-(arr_2 [i_0])))));
        arr_8 [i_0] &= ((max((((arr_1 [i_0]) + var_12)), 5206538238742409366)));
        var_19 = (max(var_19, -29128));
    }
    #pragma endscop
}

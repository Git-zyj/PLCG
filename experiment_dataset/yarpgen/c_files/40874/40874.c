/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (4054085285 ? 1999334707 : 51768);

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = ((19839 ? 13763 : 8737244453207542603));
        arr_5 [i_0] = (max(51772, (max((~536870911), ((((arr_3 [i_0]) > (arr_0 [i_0]))))))));
        arr_6 [i_0] = ((((((arr_0 [i_0 - 1]) >> (((arr_1 [i_0 - 1]) - 18785))))) ? (max(13767, -181429613)) : ((~(arr_0 [i_0 + 2])))));
        var_16 -= (((((arr_0 [i_0 - 1]) ? (arr_2 [i_0 + 1]) : (arr_3 [i_0 - 1]))) + 51465));
    }
    var_17 = ((var_6 || ((max((max(51765, var_6)), ((max(var_2, var_2))))))));
    var_18 = (max((~128), var_12));
    #pragma endscop
}

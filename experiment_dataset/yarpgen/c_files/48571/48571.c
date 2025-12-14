/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_6 ? var_2 : ((251658240 ? 32500 : 7))))) ? ((((263882790666240 ? var_3 : var_5)) / 7)) : (min((((var_9 ? 43884 : 32782))), ((var_3 ? var_10 : (-9223372036854775807 - 1)))))));

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_2 [8] [i_0] = ((((7 ? (max(703191711680819689, (arr_1 [7] [i_0]))) : ((((arr_1 [i_0 - 1] [i_0]) << (((arr_0 [i_0 + 1]) - 3234661679))))))) <= (max(var_8, ((var_5 << (((-703191711680819700 + 703191711680819734) - 32))))))));
        arr_3 [6] &= (max((((arr_1 [i_0 - 2] [i_0 - 1]) ? var_10 : var_0)), (((arr_1 [i_0] [i_0 + 2]) % (arr_1 [i_0 - 2] [i_0 - 2])))));
    }
    var_12 = ((((-32501 / var_3) ? var_9 : 7)) >> (((min(703191711680819699, (((var_0 ? var_7 : var_10))))) - 28865)));
    #pragma endscop
}

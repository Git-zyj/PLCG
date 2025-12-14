/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        var_10 = (max(var_10, ((((-61 || 11563204883146481034) ? (((((((arr_3 [i_0] [i_0]) && (arr_2 [i_0 - 3]))) && (((arr_0 [i_0]) || (arr_0 [i_0]))))))) : ((min(250, 7662617036723456647))))))));
        var_11 += (((arr_2 [i_0 - 3]) >> (((((max(2066899439489958441, 1)) ^ ((((arr_0 [i_0]) ^ (arr_2 [i_0])))))) - 2066899439416557693))));
        var_12 = (((arr_2 [i_0 - 2]) ? ((((arr_0 [i_0]) * (arr_3 [i_0] [i_0])))) : (arr_0 [i_0 - 1])));
        arr_4 [i_0] = (((7 << 0) || ((min((((2147483641 > (arr_3 [i_0] [3])))), -11)))));
    }
    var_13 = var_6;
    var_14 -= var_9;
    var_15 |= (min(var_3, (-5644776940632921203 / 50261)));
    #pragma endscop
}

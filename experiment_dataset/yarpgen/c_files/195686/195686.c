/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = (((min(((~(arr_2 [i_0 + 3]))), (min(-6359065916728198596, var_7)))) / (arr_1 [i_0] [i_0])));
        arr_5 [i_0] = (((((var_12 ? (!var_3) : (((arr_3 [i_0]) % 4294967290))))) ? (((((1 ? 127 : 137438953471))) ? (((arr_1 [i_0] [13]) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0]))) : ((~(arr_1 [i_0 + 3] [i_0 + 4]))))) : var_4));
        var_13 = (arr_1 [i_0] [i_0]);
    }
    var_14 = (max(var_11, var_11));
    var_15 += (4294967290 * 255);
    #pragma endscop
}

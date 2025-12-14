/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((max((var_14 < 42), var_1)) > (((((-127 - 1) != 9223372036854775807))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] |= (max(120, (+-43079)));
        var_18 += ((((!(arr_2 [i_0]))) ? (~0) : (arr_0 [i_0])));
        var_19 = (max(var_19, (((!(-127 - 1))))));
    }
    var_20 |= ((-(((!var_3) >> (126 - 108)))));
    var_21 = ((((var_10 % (var_11 && var_5))) - ((-(8819443045190528328 < 10)))));
    #pragma endscop
}

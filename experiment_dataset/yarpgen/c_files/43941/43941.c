/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = var_13;
        arr_3 [i_0] &= ((+((((arr_1 [i_0]) && 18446744073709551605)))));
        arr_4 [i_0] [i_0] = 2796021021247469079;
    }
    var_14 = ((min(((var_10 ? var_12 : var_7)), var_8)));
    var_15 = 32785;
    var_16 = (min((((((var_7 ? 32766 : var_4))) ? (((152 >> (10200636081264264460 - 10200636081264264440)))) : ((var_9 ? 33 : var_4)))), 32769));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(30720, (((1 == (max(1402765400, (-32767 - 1))))))));
    var_21 = -1;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [9] [i_0] = (((!8007875233080884759) | ((~(arr_0 [i_0])))));
        arr_3 [i_0] |= ((((min(((1 ? var_9 : (arr_0 [i_0]))), var_8))) ? var_9 : (((((arr_1 [i_0]) == (arr_1 [i_0])))))));
        arr_4 [i_0] = -1402765411;
        var_22 = var_12;
    }
    var_23 = ((var_4 ? var_6 : -4));
    #pragma endscop
}

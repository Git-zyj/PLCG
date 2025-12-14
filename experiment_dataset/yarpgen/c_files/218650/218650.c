/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(((var_7 ? (~var_9) : var_3)), (min(var_10, ((0 ? 0 : 295710727))))));
    var_13 = ((((max((max(3999256567, var_8)), 3))) ? ((((max(var_8, 978051217))) ? var_7 : ((var_4 ? 984148175 : var_4)))) : var_11));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [8] |= min((max((arr_0 [i_0]), ((~(arr_0 [i_0]))))), (arr_0 [i_0]));
        arr_3 [i_0] [i_0] = 35868;
    }
    #pragma endscop
}

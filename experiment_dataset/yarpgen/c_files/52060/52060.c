/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((((min(var_6, 161))) ? ((828130338 ? 3466836957 : 31)) : (arr_0 [i_0] [i_0])))) ? (arr_2 [i_0]) : (((var_3 <= (117 / var_10))))));
        arr_4 [i_0] = (max((min((((var_6 ^ (arr_2 [i_0])))), 72057594037927935)), var_3));
    }
    var_11 = (min(var_11, ((min(((((2134251667 || var_3) == (~var_4)))), ((var_9 ^ (min(var_4, var_8)))))))));
    var_12 = 0;
    #pragma endscop
}

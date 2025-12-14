/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] = 6245954932983460839;

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_18 &= ((arr_3 [i_1] [i_0]) & (arr_2 [i_0]));
            var_19 += ((var_1 ^ (arr_2 [i_1])));
        }
        arr_7 [i_0] [i_0] = (!40);
    }
    var_20 += var_8;
    var_21 = (max((max((var_0 > var_14), (min(1411495496, var_5)))), var_14));
    var_22 = (min(var_22, var_13));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, 1));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_11 *= -7064197561627836217;
        var_12 = (max(var_12, ((((var_5 > (arr_1 [5])))))));
        var_13 &= var_3;
        arr_3 [i_0] [8] &= ((463610083 >= (arr_2 [4] [i_0 - 1])));
    }
    for (int i_1 = 3; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_14 ^= -var_9;
        var_15 &= (((60290 && (-828479087 ^ 463610052))));
    }
    #pragma endscop
}

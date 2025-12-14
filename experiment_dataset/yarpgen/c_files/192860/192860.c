/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= ((((var_2 ? 1467106728560455887 : 0))));
    var_14 |= ((((((12446475198879658181 != 18446744073709551615) ^ ((2122814985 ? var_8 : 18446744073709551615))))) ? (~var_3) : (((1184271608 << (var_8 - 16190796098206317815))))));
    var_15 = ((var_6 ? ((((min(var_12, 2213694446857375031)) > ((13744498952052626612 ? 614452171 : var_8))))) : ((((0 - var_12) < var_2)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (-614452167 - 1679668457319313160);
        arr_4 [i_0] = ((~(-2147483647 - 1)));
        var_16 = ((var_1 / (arr_2 [i_0] [i_0])));
        arr_5 [i_0] = (74461228 | 3906007375570388163);
        arr_6 [i_0] = (((arr_1 [i_0]) < (-2147483647 - 1)));
    }
    #pragma endscop
}

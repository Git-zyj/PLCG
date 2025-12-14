/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_18 = arr_1 [i_0 - 2];
        var_19 = ((-((((((-19686 ? -19686 : 15503)) + 2147483647)) >> (802016272 >= -19686)))));

        /* vectorizable */
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            var_20 = 27664;
            var_21 |= (((((-78 ? (arr_2 [i_1]) : 5))) ? 11610555128264428217 : 19685));
            var_22 = (max(var_22, (((+(((arr_2 [i_1]) ? 6 : 65535)))))));
        }
        var_23 = -6;
    }
    for (int i_2 = 1; i_2 < 24;i_2 += 1)
    {
        var_24 -= (((((((14843 ? 111 : (arr_7 [i_2] [i_2])))) ? (arr_7 [i_2] [i_2]) : (253 - 14852))) == ((~(min((arr_8 [i_2]), (-127 - 1)))))));
        var_25 += 55;
        var_26 = ((-14853 ? (min((arr_6 [i_2]), ((-7 ? -126 : 16)))) : 5251));
    }
    var_27 = ((((126 && (-6 > var_2)))) > var_4);
    #pragma endscop
}

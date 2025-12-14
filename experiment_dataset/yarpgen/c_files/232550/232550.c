/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((35 ? (min(((167 ? var_4 : 110)), (var_11 / var_13))) : 42));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_15 *= 60;
        var_16 = (max(var_16, ((((((66 ? 65535 : var_9))) ? (((arr_1 [i_0]) % (((min((arr_1 [i_0]), 1)))))) : (((((((arr_1 [i_0]) & var_9)) > ((-(arr_1 [8]))))))))))));
        var_17 += ((((((((4 ? 54 : 65532))) ? ((165 ? 244 : 16)) : ((252 ? 13 : 1))))) ? (arr_1 [i_0]) : -2147483647));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 4; i_2 < 17;i_2 += 1)
        {
            var_18 -= ((12 ? ((76 ? 255 : 28)) : -219246625237587905));
            var_19 &= ((39 ? -2 : ((60 ? 65513 : -47))));
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            arr_9 [i_1] [i_1] = ((~(min(((57 ? -68 : 76)), (~5477)))));
            var_20 = (((((((max(5928521768126704342, 9))) ? ((-120 | (arr_7 [i_1]))) : -248))) ? (((((arr_5 [1] [i_3]) != (max(1933674513, var_1)))))) : (min(5928521768126704336, var_1))));
            var_21 = ((((max((max((arr_4 [i_1]), 255)), (-219246625237587888 < 1413419253)))) ^ ((((arr_8 [i_1] [0]) == -115)))));
            var_22 = (min(var_22, (((-((((-19674 ? 134217727 : 9076)) ^ (((arr_0 [5] [5]) ? 4294967291 : var_5)))))))));
        }
        var_23 = (((arr_0 [i_1] [i_1]) == (65517 / 2891887065622902866)));
        arr_10 [1] &= ((218 ? (((((var_11 > (arr_6 [i_1] [i_1])))) >> ((((var_4 ? 121 : 1133991299)) - 105)))) : (((!(!var_7))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_24 = (((!5928521768126704348) ? -5928521768126704326 : 29));
        var_25 = (((65522 | 1413419246) ? (((arr_13 [i_4] [i_4]) - var_8)) : (var_13 * 0)));
        arr_14 [16] = (((arr_11 [i_4]) ? (arr_13 [i_4] [i_4]) : (arr_11 [i_4])));
    }
    #pragma endscop
}

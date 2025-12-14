/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (10861588873932529372 ? ((-var_9 >> (var_19 - 4662578723965744741))) : (min(var_13, var_7)));
    var_21 = (var_7 <= var_6);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_22 = arr_1 [i_0] [i_0];
        var_23 = (((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : var_18))) ? -8409754744373672269 : (2502012091914997122 | 1329695580031921335));
        var_24 = min(((12084316399331555442 ? (var_8 >= 12103763684400643441) : var_10)), 18446744073709551603);
        var_25 = (min(var_25, ((22 ? 1755740738254032793 : 11774347105069949144))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        var_26 += ((var_11 == (((arr_5 [i_1] [i_1]) << (12084316399331555441 - 12084316399331555391)))));
        arr_6 [i_1] = var_3;
        var_27 = -var_14;
    }
    #pragma endscop
}

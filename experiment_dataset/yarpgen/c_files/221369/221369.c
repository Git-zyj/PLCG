/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [5] = ((205 > (4778899032026565204 >= -58)));
        var_10 = ((((var_6 ? var_0 : -1)) == var_2));
        arr_4 [i_0] = (((arr_1 [i_0] [7]) - (arr_2 [i_0 - 2])));
        arr_5 [i_0] [i_0] = ((14527475114714794954 ? 18359033482335647971 : (((240 ? 18636 : 32744)))));
    }
    var_11 = ((-((-var_0 + (max(var_5, var_3))))));
    var_12 = (((((var_3 >= var_1) ? (~var_8) : ((var_7 ? var_7 : -83)))) == (max(-var_2, ((var_5 ? 6797137303604512951 : 1860))))));
    var_13 = ((!((!(~var_8)))));
    var_14 = (18446744073709551615 ^ 255);
    #pragma endscop
}

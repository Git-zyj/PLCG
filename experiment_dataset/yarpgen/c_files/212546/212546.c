/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-(4823877613868643380 <= var_3)));
    var_19 = (-8282301478575268542 % var_7);

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_20 = ((~((max((arr_3 [i_0 + 1]), (arr_3 [i_0 - 1]))))));
        var_21 = (((((-((var_12 - (arr_0 [i_0])))))) ? ((max((arr_0 [i_0 + 2]), -var_0))) : (((((var_2 ? 2074455460 : 1593639454))) ? (min(880739431776252420, 880739431776252420)) : ((min(var_16, (arr_3 [i_0 - 1]))))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
        {
            var_22 = (((arr_2 [i_1]) ^ (arr_2 [i_1])));
            var_23 = (((arr_8 [i_1] [i_1]) ? 4294967295 : -8263589052805106548));
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
        {
            arr_11 [i_1] &= (((2287774482 == 2007192825) ? ((min((arr_10 [14] [i_3]), (((arr_0 [i_1]) ? (arr_6 [i_1]) : var_8))))) : (max((arr_8 [i_3] [i_1]), ((min((arr_0 [i_1]), (arr_3 [i_1]))))))));
            var_24 = (((arr_0 [i_3]) > 8178726049158699537));
        }
        var_25 &= (((2287774482 > -1187299880) ? 1197632516 : ((-15427 ? 2287774482 : -1197632516))));
    }
    var_26 = (((max(-1187299880, (min(var_5, var_10)))) | (((var_0 ? (((var_4 ? -1187299880 : var_8))) : var_16)))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        arr_3 [i_0] [i_0 + 3] = 21;
        var_12 &= ((!(((arr_1 [20]) == (arr_0 [14])))));
        var_13 ^= ((!(((min((arr_0 [12]), (arr_1 [12])))))));
    }

    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = (((((arr_1 [4]) ? ((max(0, var_11))) : 2145956502048154726)) << ((((max((arr_0 [6]), (arr_1 [4])))) ? (!0) : (arr_0 [18])))));
        arr_8 [i_1] = (((var_7 == 1) ? (((arr_0 [18]) % var_8)) : (((((arr_0 [1]) + 2147483647)) >> (((arr_0 [8]) - 25863))))));
        var_14 = (max(var_14, (((+(max((arr_4 [i_1] [i_1]), var_3)))))));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        arr_13 [i_2] = (arr_6 [i_2]);
        arr_14 [i_2] [i_2] = ((-1 ? (!-3971) : (((491520 > ((-974355011386051471 ? 7 : 1559001380)))))));
        arr_15 [i_2] = ((arr_12 [i_2]) ? var_7 : 689004497);
        var_15 = (min((((((arr_1 [14]) ? (arr_4 [i_2] [i_2]) : -1465)))), 3970));
        arr_16 [i_2] [i_2] |= (max(var_5, ((+(((arr_11 [i_2]) ? (arr_10 [i_2]) : (arr_5 [i_2])))))));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        arr_19 [i_3] = arr_12 [i_3];
        var_16 += ((((arr_4 [i_3] [i_3]) ? (min((arr_0 [10]), var_10)) : ((max((arr_1 [12]), var_5))))));
    }
    #pragma endscop
}

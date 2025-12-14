/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((((var_4 ? 1 : (arr_1 [15])))) ? ((-3816601843251677646 ? 10337590614645670908 : (arr_0 [i_0]))) : ((((arr_0 [i_0]) ? 1703852592726046116 : var_9))));
        var_11 = ((1544740651 ? ((((min(-1544740651, var_9))) ? (((max(0, 32912)))) : 6027143653282506424)) : ((((!(((32915 ? var_8 : var_0)))))))));
        var_12 ^= (((max((arr_0 [i_0]), ((var_10 ? 384 : 249))))) == (min(125, var_10)));
        var_13 = (((((3195688491967627289 ? (!var_5) : var_8))) ? 9064312002924419864 : (((0 ? (arr_1 [10]) : (32617 + -194961233))))));
    }

    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_14 = (~((var_9 ? var_7 : var_5)));
        arr_6 [i_1] = ((-(((arr_4 [i_1]) ? var_4 : (arr_5 [i_1])))));
        var_15 -= arr_4 [4];
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_10 [11] = (max((max(9064312002924419864, var_4)), ((min(var_5, (!var_5))))));
        arr_11 [i_2] = ((-(((((-91 ? (arr_0 [i_2]) : var_4))) ? (arr_0 [14]) : ((-108 ? var_1 : var_0))))));
        arr_12 [0] [i_2] = var_8;
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_16 ^= (arr_9 [i_3]);
        arr_16 [i_3] = (max(32928, (min((min(1, 25528)), (!5849949978296087473)))));
    }
    #pragma endscop
}

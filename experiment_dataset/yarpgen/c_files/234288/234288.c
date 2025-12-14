/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_17 ^= ((((max(53532, ((6377 ? 6113790828026511507 : 1022))))) || var_8));
        var_18 = var_6;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_19 = ((((max(var_1, (arr_2 [i_1] [i_1])))) && ((((~var_3) & 5721575893973514848)))));
        arr_7 [i_1] = ((((min(((26202 ? var_0 : var_12)), (arr_6 [8])))) ? ((-(arr_2 [i_1] [i_1]))) : ((min(var_11, var_7)))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_11 [i_2] = ((!((!(arr_10 [1])))));
        arr_12 [i_2] = (((!(!var_5))) && (arr_8 [i_2] [i_2]));
        var_20 ^= (((max((arr_10 [i_2]), var_4))) ? var_13 : var_9);
        var_21 = ((((((arr_10 [i_2]) - (arr_10 [i_2])))) ? (min((arr_10 [i_2]), var_14)) : (((-(arr_10 [i_2]))))));
        var_22 = (-((((((arr_8 [i_2] [i_2]) ? var_10 : (arr_9 [i_2])))) ? (arr_8 [i_2] [i_2]) : (arr_9 [i_2]))));
    }
    var_23 = (max(326976080, (var_1 + var_13)));
    #pragma endscop
}

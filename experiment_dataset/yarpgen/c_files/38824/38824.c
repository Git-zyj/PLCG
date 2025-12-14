/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = (min(var_13, (arr_0 [8])));
        var_14 -= ((-(arr_1 [i_0] [i_0])));
        var_15 |= ((1 ? var_0 : var_2));
        var_16 *= var_0;
    }

    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_17 ^= (((max(((var_2 ? (arr_1 [i_1] [i_1]) : 12498757451548688535)), (((31562 ? (arr_0 [i_1]) : (arr_1 [i_1] [i_1])))))) << (((max((arr_2 [i_1] [i_1]), (arr_2 [i_1] [i_1]))) + 5276915620376885947))));
        var_18 += (((((var_0 < ((((arr_2 [i_1] [i_1]) == (arr_3 [i_1])))))))) ^ ((1 ? (!0) : ((var_1 << (var_12 - 110))))));
        var_19 = (min(var_19, 31566));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 14;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_20 = (min(var_20, var_8));
            var_21 ^= (~-var_11);
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            arr_14 [i_4] |= (((arr_11 [i_2 + 1] [i_4]) ? var_11 : var_0));
            var_22 = (max(var_22, (var_9 < var_7)));
            var_23 = (min(var_23, (((!(!9181600328694421443))))));
        }
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            var_24 = var_2;
            var_25 *= (((~var_11) && -1091279913027587464));
            var_26 |= ((11322742902042113540 > -6729232526979915129) ? (var_1 < var_5) : var_5);
            arr_17 [i_5] [i_2 - 3] = 1;
        }
        var_27 = (max(var_27, ((((arr_8 [i_2 - 1]) << (var_2 - 1404859539))))));
    }
    for (int i_6 = 3; i_6 < 14;i_6 += 1) /* same iter space */
    {
        var_28 += ((((((((arr_5 [i_6]) ? var_2 : 8)) / -33))) ? (((var_3 | -5783471237395381490) << 1)) : var_3));
        var_29 = (max(var_29, (((((~(var_5 | 1244300987))) < ((((arr_0 [i_6 - 1]) ? (arr_0 [i_6 - 3]) : (arr_0 [i_6 - 1])))))))));
    }
    #pragma endscop
}

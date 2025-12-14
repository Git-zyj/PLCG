/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_13 = (((((3300 ? (arr_1 [i_0] [i_0]) : var_10))) ? (((arr_0 [i_0]) ? var_2 : var_2)) : ((1653266453 ? 113 : 3300))));
        var_14 = (max(((var_6 ? (arr_0 [i_0]) : 688913383)), ((max((arr_0 [i_0]), 0)))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((((min((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1])))) ? ((max(688913381, var_3))) : ((var_0 ? var_10 : var_0))));
        var_15 = (max(((((((2147483647 ? (arr_0 [i_1]) : var_12))) ? -3293 : ((2505430063484715484 ? var_4 : var_0))))), (((((2505430063484715507 ? 65518 : 2505430063484715461))) ? var_7 : (max(var_10, 688913383))))));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_16 = (max(((max(-2505430063484715481, -688913384))), (max(0, (arr_0 [i_2])))));
        var_17 = (max((min(var_8, (arr_4 [i_2] [i_2]))), ((var_6 ? -2505430063484715513 : (arr_4 [i_2] [i_2])))));
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {
        var_18 = ((74 ? 14465986425510322596 : -105));
        arr_12 [i_3] [1] = ((62 ? (arr_9 [i_3] [i_3]) : var_7));
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
    {
        var_19 = (max((max(2505430063484715511, 2505430063484715511)), (((arr_1 [i_4] [i_4]) ? 2505430063484715499 : (arr_1 [i_4] [i_4])))));
        arr_17 [i_4] = (((max(var_3, (arr_7 [i_4] [i_4])))) ? (min(8817770799416013311, 17522182029319952835)) : ((65535 ? 8707950284510315244 : -105)));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
    {
        var_20 = ((((max((arr_7 [i_5] [i_5]), var_3))) ? (((arr_9 [i_5] [9]) ? -2505430063484715491 : (arr_9 [i_5] [i_5]))) : ((var_8 ? (arr_9 [i_5] [i_5]) : var_9))));
        arr_21 [i_5] = (max((((arr_14 [i_5] [i_5]) ? var_1 : var_5)), ((((arr_19 [i_5] [i_5]) ? var_7 : -116)))));
        arr_22 [i_5] [i_5] = ((((max(var_9, 12288))) ? (((var_8 ? 1 : (arr_11 [i_5] [i_5])))) : (max(253, 9738793789199236366))));
        var_21 = ((0 ? ((613303409 ? 4 : 938510724)) : -74));
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
    {
        arr_25 [i_6] = ((((max(var_1, var_9))) ? (((arr_13 [i_6]) ? 1 : var_11)) : (((arr_13 [i_6]) ? var_11 : var_4))));
        var_22 &= min((max((arr_7 [i_6] [i_6]), var_5)), (((arr_19 [i_6] [i_6]) ? (arr_7 [i_6] [i_6]) : var_0)));
    }
    var_23 = (min(var_4, (min(65534, 13326619376426487982))));
    var_24 -= var_4;
    var_25 = var_6;
    #pragma endscop
}

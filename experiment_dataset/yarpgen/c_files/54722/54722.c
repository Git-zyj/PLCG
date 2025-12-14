/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            var_19 *= (min((max((arr_2 [i_1 + 1]), (max((arr_2 [i_0]), (arr_0 [14]))))), (arr_1 [i_1 - 1] [i_1 - 2])));
            var_20 = (min(((~(arr_1 [i_1 - 2] [i_1 - 1]))), ((~(arr_1 [i_1 - 2] [i_1 - 1])))));
            arr_5 [i_1] [i_0] [i_0] = (~996166940259671619);
            arr_6 [i_0] [i_0] [i_1] = ((+(((arr_3 [i_1 - 2] [i_1 - 1]) ? (arr_3 [i_1 + 1] [i_1 - 2]) : var_3))));
        }
        var_21 = ((~(((var_0 && (arr_4 [i_0] [i_0]))))));
        var_22 = (((((var_5 ? (arr_2 [i_0]) : (arr_2 [i_0])))) ? ((((min(-16, 415712373))))) : (arr_1 [8] [i_0])));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] [16] = min((((((arr_9 [i_2]) ? (arr_4 [i_2] [i_2]) : (arr_7 [i_2]))) >> ((((7931387812723543844 ? (arr_3 [i_2] [i_2]) : (arr_4 [i_2] [i_2]))) - 173)))), (((((~(arr_0 [i_2])))) % (17450577133449879997 * -3395358032130358282))));
        arr_12 [i_2] [i_2] = (max(((65535 ? 17450577133449879990 : 1)), 18446744073709551588));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        var_23 = min((max((arr_3 [i_3] [i_3]), 996166940259671618)), ((min((arr_9 [i_3]), (arr_9 [i_3])))));
        arr_16 [i_3] [i_3] |= (min(((-(arr_4 [i_3] [i_3]))), (arr_0 [i_3])));
    }
    var_24 = -var_4;
    var_25 = (!17450577133449879970);
    #pragma endscop
}

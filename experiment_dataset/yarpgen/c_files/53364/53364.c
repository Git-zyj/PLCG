/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_14 = (arr_2 [i_0]);
            var_15 = (((!var_2) || ((!(arr_4 [i_0] [i_1])))));
        }
        arr_5 [i_0] = (!((((!var_1) + (((arr_4 [i_0] [i_0]) ? var_8 : 24401))))));
        var_16 = (max(var_8, ((((((var_12 ? 5952242870062567893 : -27279))) ? -var_6 : 19611)))));
        var_17 = (min(var_17, ((((var_13 + 9223372036854775807) << (arr_1 [i_0] [i_0]))))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = (((arr_4 [10] [i_2]) ? 1552288257 : (min((var_5 % var_2), (((112 ? (arr_0 [i_2]) : (arr_2 [11]))))))));
        arr_9 [i_2] = ((-((min((arr_6 [i_2]), (!var_2))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {
        var_18 = (((arr_10 [i_3]) ? (arr_10 [i_3]) : (arr_10 [i_3])));
        var_19 = (min(var_19, (arr_4 [i_3] [i_3])));
    }
    var_20 = ((((((min(9223372036854775807, var_0))) ? ((var_2 ? var_5 : var_3)) : ((536870911 ? 21561 : 14438542062564026383)))) * ((max(var_4, (var_8 >= var_6))))));
    #pragma endscop
}

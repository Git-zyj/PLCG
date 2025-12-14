/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((!(((var_9 ? 11564243906455836190 : var_6))))) || (((~(max(10605190826827628809, 13128518580618352242))))));
    var_15 = var_2;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 23;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_1] [i_0] = 0;
            arr_7 [i_1] = (~var_9);
        }
        for (int i_2 = 2; i_2 < 23;i_2 += 1) /* same iter space */
        {
            var_16 = (((~((((arr_8 [i_0]) <= 41780))))));
            arr_10 [i_0] [i_2 + 2] = 17079622075695910296;
            var_17 = 2777;
        }
        var_18 = ((((min(255, 1981156324991747151))) ? (((min(var_6, 8)) + 13128518580618352242)) : ((2412126293504388887 ? (!149) : ((-6999 ? 18251892947036292799 : -1543272750))))));
        arr_11 [i_0] = (1 ? 945 : (arr_4 [i_0] [i_0]));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        var_19 = var_4;

        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            arr_17 [i_3] = 1;
            arr_18 [i_3] = -932;
            var_20 |= (-1 & 1);
            var_21 = (-8080160940791055088 ^ 2766);
            var_22 = (min(var_22, (arr_15 [i_3 + 2] [i_4])));
        }
        var_23 = (-28897 >= var_2);
        arr_19 [i_3] = ((-((-435783789 ? var_3 : 1))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_22 [5] [2] = (~29259);
        arr_23 [1] = ((!((!(arr_16 [i_5])))));
        var_24 = (max((((-(1 <= 1900766234)))), (((((-6087296892576828261 ? -38 : -171159753))) ? 3376107407 : 8055767364094792084))));
        var_25 = min((((72 ? 52 : 204))), (((arr_20 [i_5]) / var_10)));
    }
    #pragma endscop
}

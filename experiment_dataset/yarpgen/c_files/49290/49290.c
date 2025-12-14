/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_19 -= 3974675495;
        arr_4 [i_0] = (max(((134152192 ? 1749588796425124142 : 1691127137)), 1));
        var_20 = (min((!320291801), -3974675505));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_21 = (((~(arr_7 [i_1]))));
        var_22 = ((-134152192 ? (((~var_13) ? ((958365042 ? 7840 : (arr_6 [i_1]))) : ((var_16 ? (arr_0 [i_1] [5]) : (arr_7 [i_1]))))) : 31697));
        var_23 = var_9;
        var_24 = (var_7 ? (max(2017612633061982208, 1691127137)) : ((((!(((var_0 ? (arr_3 [i_1]) : 32767))))))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_25 = ((63 ? (!-641662652435243297) : ((min((arr_0 [i_2] [i_2]), (arr_0 [i_2] [4]))))));
        var_26 = ((65408 ? ((max((!57696), (arr_2 [i_2])))) : (31697 && var_8)));
    }
    var_27 = var_11;

    for (int i_3 = 4; i_3 < 23;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 24;i_5 += 1)
            {
                {
                    var_28 = ((((((-1 ? -111 : 123)) | 2017612633061982208)) % var_9));
                    arr_19 [i_3 - 1] [i_3 - 1] [i_3] [i_3] = (max((((((43 ? var_14 : 18446744073709551609))) ? (~var_15) : var_3)), var_9));
                }
            }
        }
        var_29 = (arr_18 [i_3 - 2] [i_3 + 1] [8] [11]);
    }
    #pragma endscop
}

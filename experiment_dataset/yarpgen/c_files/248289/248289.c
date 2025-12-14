/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((min((max(12, -12)), -6484107668810046400)), ((~(~var_8)))));
    var_18 = ((((max(var_12, (!var_14)))) ? var_8 : (max(var_14, -var_15))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_19 = ((~(arr_0 [i_0])));
        var_20 = 9020791232291401556;
    }
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 17;i_2 += 1)
        {
            {

                for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
                {
                    var_21 = (max((min((arr_6 [i_1] [i_1 + 1] [i_2 - 3]), (min(var_10, (arr_7 [i_1] [i_2 + 1]))))), ((((arr_6 [i_1] [i_1] [i_1]) == var_11)))));
                    var_22 = (max(var_22, ((min(-var_11, -4294967277)))));
                }
                for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                {
                    arr_12 [i_2] [i_2 - 2] [i_4] = (arr_10 [i_2] [i_2]);
                    var_23 = ((-((3997820081 + ((((!(arr_9 [i_1 - 2] [i_2])))))))));
                }
                for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                {
                    var_24 = (min(var_24, (max((~var_10), (((~var_11) ? (arr_13 [i_1 - 2] [i_1] [i_2 + 2]) : var_3))))));
                    arr_17 [i_1] [i_2] [i_5] = (min(var_2, (min((!576460748008456192), (max((arr_11 [i_1] [1] [i_5] [i_2 + 2]), -6484107668810046400))))));
                }
                arr_18 [i_2] [i_2] = (!var_14);
            }
        }
    }
    #pragma endscop
}

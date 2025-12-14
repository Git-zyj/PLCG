/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_17 = -3;
        arr_2 [i_0 + 1] = ((var_16 * (((((var_6 ? 55712 : (arr_1 [i_0] [i_0]))) > (var_3 | var_4))))));
        var_18 = (((((var_16 ? var_3 : (arr_0 [i_0 + 1])))) > (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0 + 2] [i_0]) : var_13))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_19 = ((-((61440 ? 9824 : 9823))));
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 23;i_4 += 1)
                {
                    {
                        var_20 = ((((1 ? 11739294367282392167 : ((((!(arr_5 [i_1] [i_2] [i_3]))))))) < (((min(var_10, (arr_9 [i_1] [i_2 - 1] [i_3])))))));
                        var_21 = ((239 << (13207 - 13203)));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
    {
        arr_15 [i_5] [i_5] = 15;
        var_22 = ((((11739294367282392154 / ((6707449706427159449 ? (arr_6 [i_5] [i_5]) : var_8)))) >> ((-(((98 > (arr_10 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                {
                    var_23 = (min(var_23, ((11739294367282392165 / (arr_4 [i_5])))));
                    arr_21 [i_7] [i_6] [i_5] [i_5] = (1116094516 ? 11739294367282392174 : 1);
                    var_24 = var_15;
                }
            }
        }
    }
    var_25 = (max(var_25, 0));
    var_26 *= var_10;
    #pragma endscop
}

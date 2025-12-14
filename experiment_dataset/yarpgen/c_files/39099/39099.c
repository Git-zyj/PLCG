/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((!var_19) ? (min(var_19, -2810637577256913425)) : var_14))) ? var_1 : (((((min(-7061032737226878273, var_3))) ? var_5 : var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_21 = (min((((max(-93473437, -2810637577256913425)))), (((arr_3 [i_0]) ? (((((arr_4 [i_0] [i_0]) || 93473409)))) : -7061032737226878273))));
                var_22 = ((-(((arr_3 [i_0]) ? 15084409343209972950 : (arr_2 [i_0])))));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_23 = ((((1099511496704 | (arr_4 [i_0] [i_0]))) != 470733428));
                    arr_8 [i_0] [i_1] = (-9874 == -9874);
                }
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    arr_12 [i_1] [i_0] [i_3] = arr_4 [i_0] [i_0];
                    arr_13 [i_0] = ((-7061032737226878290 % ((min((arr_6 [i_3 + 2] [i_3]), (arr_6 [i_3 + 2] [i_3]))))));
                }
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    arr_16 [i_0] [i_0] [i_0] = (-7061032737226878290 / 8002277627396686386);
                    var_24 = (arr_4 [i_0] [i_0]);
                    arr_17 [i_0] [16] [i_0] [i_4] = ((!(~-93473437)));
                }
                var_25 -= ((((var_11 ? 1024842122438225039 : (16 | -2810637577256913417)))) ? var_3 : ((((((((arr_1 [i_1]) + 2147483647)) >> (((((-9223372036854775807 - 1) - -9223372036854775792)) + 18)))) - ((((arr_4 [i_0] [16]) <= 5725032142750841205)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            {
                var_26 = (min(((((!(arr_0 [i_6] [i_6]))))), (~-1182012090)));
                arr_23 [i_6] [i_6] = (((min(9223372036854775807, -6976289807676296213)) > (arr_10 [i_6] [i_6] [8])));
            }
        }
    }
    #pragma endscop
}

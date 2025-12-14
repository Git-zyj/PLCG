/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 8751203631309957766;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = -9256605038547163026;
                arr_6 [i_0] [i_0] [3] = (max(var_19, var_3));

                for (int i_2 = 3; i_2 < 8;i_2 += 1)
                {
                    var_21 = ((+(((arr_7 [i_2 + 2] [i_2 - 1] [i_2 + 4]) - (~9256605038547163038)))));
                    var_22 = ((-((~(arr_4 [i_2] [i_2 - 1])))));
                }
                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    var_23 = (var_4 & (min(9256605038547163022, ((9190139035162388595 ? (arr_9 [i_0] [i_1] [i_3]) : 65528)))));
                    var_24 = (i_0 % 2 == zero) ? ((((arr_4 [i_0] [i_1]) * ((((((var_9 << (((arr_0 [i_0]) - 1056775298))))) ? ((((arr_8 [i_0]) == var_0))) : (arr_7 [i_3 - 1] [i_3 - 1] [i_3 + 1]))))))) : ((((arr_4 [i_0] [i_1]) * ((((((var_9 << (((((arr_0 [i_0]) - 1056775298)) - 538221629))))) ? ((((arr_8 [i_0]) == var_0))) : (arr_7 [i_3 - 1] [i_3 - 1] [i_3 + 1])))))));
                    var_25 |= ((((9190139035162388590 << (20397 - 20347)))) ? (min((min(var_0, 9190139035162388596)), ((9190139035162388593 ? 9190139035162388573 : 7093496348798634844)))) : (((((((arr_8 [0]) - 18))) ? 39631 : (((!(arr_1 [i_1] [i_0]))))))));
                    var_26 = ((max(((((arr_4 [i_1] [i_1]) ? var_15 : var_4))), (arr_3 [i_0]))));
                }
                var_27 -= (arr_9 [i_0] [i_0] [i_1]);
                arr_11 [i_1] [i_0] = ((((((var_18 * var_16) ? (min(var_4, 9190139035162388590)) : ((((var_13 + 2147483647) >> (8277611222547444626 - 8277611222547444609))))))) ? var_8 : (arr_2 [i_1])));
            }
        }
    }
    var_28 = (((min(((((((-127 - 1) + 2147483647)) << (1 - 1)))), 9256605038547163020))) ? 6391996400816912572 : var_16);
    var_29 = var_0;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (((((min(var_17, ((min(-3213, var_8)))))) && ((min((var_14 < var_10), 18050))))))));
    var_19 &= (max((max((var_16 / 4758381059488907832), ((min(1, 0))))), var_4));

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_20 += min((~102), (((((~(arr_2 [i_0 - 2]))) == (arr_2 [i_0 + 2])))));
        var_21 -= ((((-11627 || ((min(-20155, (arr_1 [i_0])))))) ? ((max((min(71, (arr_1 [i_0]))), (arr_1 [i_0 + 3])))) : (min(1, (min((arr_2 [i_0]), (arr_0 [i_0])))))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            var_22 = (arr_1 [i_0]);
            var_23 += (arr_2 [i_1]);
        }
        for (int i_2 = 4; i_2 < 12;i_2 += 1)
        {
            var_24 = (((min((arr_6 [i_0] [i_0]), ((((arr_5 [i_2] [i_2]) != 1958658271))))) <= (min((max((arr_6 [i_0] [i_2 - 4]), (arr_3 [i_0] [i_2] [i_2 - 1]))), ((((arr_5 [i_0 + 1] [i_2]) ? (arr_0 [i_0]) : (arr_3 [i_2 - 3] [i_2] [i_0]))))))));
            var_25 += (((max((~-3200), (arr_2 [10]))) << (((((((arr_3 [i_0] [i_0 + 1] [i_0]) >= 90)) ? (~134217727) : (((max((arr_1 [1]), (arr_4 [0]))))))) + 134217740))));
        }
    }
    var_26 = (7983079123758343457 * 0);
    #pragma endscop
}

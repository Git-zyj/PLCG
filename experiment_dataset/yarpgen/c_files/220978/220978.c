/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = ((((max(((62973 ? 52140 : (arr_0 [i_0] [i_1]))), -var_19))) ? (max(((var_0 >> (7402173904407991537 - 7402173904407991521))), (arr_1 [i_0] [i_1]))) : ((((3134205648 > (arr_1 [i_0] [i_0])))))));
                var_21 &= -36862;
            }
        }
    }
    var_22 *= var_2;

    for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
    {
        var_23 = ((~(max((var_5 != var_18), var_2))));
        var_24 = max((((~17298832773372001791) ? 26 : var_10)), (arr_7 [i_2]));
        var_25 |= var_12;
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {
        var_26 = (((arr_8 [i_3]) - (((arr_7 [i_3]) ? (arr_7 [i_3]) : (arr_7 [i_3])))));
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {
                        var_27 *= (((2907940046 / 11044570169301560078) >> (min((var_7 || 845475903), 2907940058))));
                        var_28 = ((-((20 ? -5098436079029385662 : var_0))));
                        var_29 = ((arr_19 [4] [i_3] [i_4 - 1] [i_4 + 1] [i_4 - 1]) & ((min(5098436079029385646, 4294967272))));
                        var_30 = 5098436079029385631;
                        var_31 = 65535;
                    }
                }
            }
        }
    }
    #pragma endscop
}

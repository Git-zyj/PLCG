/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_5 ? ((((!((max(60, var_4))))))) : ((-192167570911819017 | (~73)))));
    var_13 = ((((~61) + 2147483647)) << ((((((var_11 ? 60 : var_1))) < var_9))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((var_1 * ((max((-1636136764 / var_10), ((-(arr_1 [i_0]))))))));
        var_14 ^= ((-((((((!(arr_1 [i_0])))) > 66)))));
        var_15 = (((((-((188 ? 15521198628249888199 : 208))))) || (arr_0 [2])));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {
            var_16 = (max(var_16, ((((arr_5 [i_1] [i_2]) ? var_2 : (max((!3341852875276697962), var_10)))))));
            var_17 = (~-7064347150686518197);
            /* LoopNest 3 */
            for (int i_3 = 3; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_17 [i_1] [i_4] [i_3] [i_2] [i_1] = (-(((var_11 || (arr_6 [i_1] [i_4])))));
                            var_18 = (((arr_14 [i_5] [11] [i_3 + 3] [i_1] [i_1]) % (arr_10 [i_1] [i_2] [i_3])));
                            var_19 = (max((min((arr_3 [i_1]), (min(var_7, var_0)))), ((7064347150686518199 - (((arr_0 [i_1]) ? var_7 : var_9))))));
                        }
                    }
                }
            }
        }
        arr_18 [i_1] = ((((!(!var_4))) ? ((((max(33292288, (arr_5 [i_1] [i_1]))) % (((var_6 + (arr_1 [i_1]))))))) : (((arr_3 [i_1]) ^ 3341852875276697949))));
        var_20 = (max(var_20, var_3));
        var_21 = 125;
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] = (arr_14 [i_6] [i_6] [i_6] [i_6] [i_6]);
        arr_24 [i_6] = var_6;
    }
    #pragma endscop
}

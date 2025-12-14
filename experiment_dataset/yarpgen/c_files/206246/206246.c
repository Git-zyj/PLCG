/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_11 -= (((((3 ? ((var_4 - (arr_0 [i_0]))) : (max(22, 2636795151))))) ? ((((((arr_2 [i_0] [i_0]) + (arr_2 [i_0] [i_0]))) == ((4522824539224889919 ? var_0 : 19431))))) : (arr_3 [i_0])));
        arr_4 [i_0] [i_0] = (arr_0 [i_0]);
        arr_5 [i_0] = ((!(((2043178247 << (9672 - 9672))))));
        arr_6 [i_0] = var_6;
        arr_7 [i_0] [i_0] = ((!(~1)));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_12 += ((-((490742067 ? (max(var_9, var_0)) : var_6))));

        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            var_13 = var_5;
            var_14 = var_5;
            var_15 = -1628469949;
            arr_14 [i_1] = (arr_13 [i_2 + 1] [i_2 + 1] [i_1]);
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_18 [i_1] [1] [i_3] &= -40;
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {
                        arr_26 [i_1] [i_3] [i_1] [i_4] [i_5] [i_5] = (((!5905799285887039295) ? var_1 : (var_4 - var_8)));

                        for (int i_6 = 1; i_6 < 18;i_6 += 1) /* same iter space */
                        {
                            arr_30 [i_1] [i_3] [i_4] [i_3] [i_4] [i_6] [i_6] &= (~-19453);
                            arr_31 [i_1] [i_3] [i_1] = var_8;
                            arr_32 [i_6] [i_5] [i_1] [i_1] [i_3] [i_1] = (min((((490742056 ? -57 : 5905799285887039283))), ((((!9369) * -68)))));
                            arr_33 [i_5] [i_5] [i_4 + 1] [i_1] [i_1] [i_4] [i_6] = ((5449113021404655574 - 5) ? 127 : ((((var_7 + (arr_1 [i_1] [i_1]))) + 119)));
                        }
                        for (int i_7 = 1; i_7 < 18;i_7 += 1) /* same iter space */
                        {
                            arr_36 [i_1] [i_1] = ((-(((!(((var_6 ? (arr_11 [i_7] [i_1] [i_7 + 1]) : var_8))))))));
                            arr_37 [i_1] [i_1] [i_5] = (5449113021404655574 ^ var_2);
                        }
                        arr_38 [i_1] [i_1] [i_4 + 3] [i_5] = ((((-(((arr_25 [i_1] [i_4 - 1] [i_1] [i_5] [i_5]) ? 33 : -29956)))) + 36));
                    }
                }
            }
            var_16 = (arr_2 [i_1] [i_3]);
            var_17 += (+(((arr_13 [i_3] [i_3] [i_3]) ? 6008544280584761042 : (arr_13 [i_1] [i_3] [i_3]))));
        }
    }
    #pragma endscop
}

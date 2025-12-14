/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = (arr_1 [i_0]);
                arr_6 [i_1] = ((((!((min(var_2, -1731939578))))) ? (min(((var_3 ? var_11 : (arr_5 [i_0] [i_1] [i_1]))), ((~(arr_3 [6]))))) : (((((arr_1 [i_0]) != 55968)) ? (arr_1 [i_0]) : (((arr_2 [i_0]) ? (arr_5 [i_0] [i_0] [i_1]) : (arr_4 [14] [i_0] [i_1])))))));
                var_21 = (min(var_21, ((((((arr_0 [i_0]) ? 55968 : var_13))) ? (min((arr_0 [i_0]), (arr_0 [i_0]))) : ((((max(-1731939578, (arr_2 [i_1])))) ? ((-582989300 ? var_15 : 912486025)) : (arr_0 [i_0])))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_9 [i_1] [i_1] = (~(arr_2 [i_0]));
                    var_22 = 912486025;
                    var_23 = (min(var_23, var_13));
                    var_24 = ((!(!55964)));
                }
            }
        }
    }
    var_25 = ((((min((!var_14), var_14))) ? var_6 : (((var_3 > var_13) ? (min(var_7, var_4)) : var_16))));
    var_26 = var_6;
    #pragma endscop
}

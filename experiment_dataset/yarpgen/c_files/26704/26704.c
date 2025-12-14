/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_11 = (-1422016732 * 0);

                    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_3] = 0;

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_12 = (arr_11 [i_0] [i_1] [i_0] [i_0] [i_3] [i_4]);
                            var_13 *= ((min(-var_5, 9827)));
                        }
                        var_14 = 1181686308;
                        var_15 &= (((((1 ? var_5 : ((29738 | (arr_6 [i_0] [i_2] [i_2])))))) ? (((!(arr_0 [i_0] [i_2])))) : var_9));
                    }
                    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                    {
                        var_16 &= (((!0) ? var_4 : -1688));
                        var_17 &= (max(((-19 ? var_1 : (max(1, var_1)))), ((((arr_2 [i_1]) >> (((arr_6 [i_0 - 2] [i_2] [i_2]) ? (arr_13 [i_1] [i_2] [i_5]) : (arr_13 [i_0] [i_1] [i_2]))))))));
                    }
                }
            }
        }
    }
    var_18 &= (min(((var_10 ? ((var_6 ? var_4 : var_1)) : var_7)), var_1));
    var_19 = 4294967295;
    var_20 = ((12181633985936822578 ? 1 : -23567));
    #pragma endscop
}

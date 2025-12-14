/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_0 ? (min(-3544845170045928230, 5193)) : 1));
    var_13 &= 0;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_9 [i_3] [i_3] [i_2] &= ((-var_4 * (((arr_1 [i_0 + 1] [i_1]) ? (arr_1 [i_0 + 1] [i_1]) : (arr_1 [i_0 + 1] [i_0])))));
                        var_14 = (arr_3 [i_0 + 1] [1] [i_0]);
                        arr_10 [i_0 + 3] [i_1] [i_3] [i_3] [i_3] &= ((arr_6 [i_0 + 1] [i_0 - 1] [i_3]) ? (~15) : var_4);
                        arr_11 [i_0] [i_0] [i_2] [i_3] &= (min(((1054468003 ? 2473545250 : (1072693248 && 3565043100638454189))), 3544845170045928230));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                    {
                        var_15 = arr_0 [23] [i_1];
                        arr_14 [i_0] [i_0 + 2] [i_0] [i_1] [i_0] [i_0] = (((((min(var_11, var_1)))) ? var_9 : ((((min((arr_6 [i_1] [20] [i_1]), var_10))) ? 1 : ((~(arr_8 [1] [i_1] [10])))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_5] [i_1] = (((arr_0 [1] [i_0 - 1]) ? ((((!(arr_8 [8] [i_2] [i_2]))))) : (arr_4 [i_1] [i_1] [i_1])));
                        arr_18 [i_0] [i_1] [i_1] [i_2] [i_1] [i_5] = (((((arr_16 [12]) & var_4)) < var_11));
                    }
                    arr_19 [i_1] [i_1] = (((8938371301955800482 || 35447) || 1));
                }
            }
        }
    }
    #pragma endscop
}

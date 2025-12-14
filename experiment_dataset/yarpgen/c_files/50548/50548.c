/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_0;
    var_14 = ((((-(max(2487625251, var_12)))) > (~3930780398)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0 + 1] [i_0 + 1] = (max(6, (max((min(4294967295, 364186898)), (((!(arr_0 [i_0 - 1] [i_1]))))))));
                arr_6 [i_0 - 3] [i_1] = (((arr_3 [i_0 + 1] [i_0 - 1] [i_0 - 1]) && ((((min(var_3, (arr_0 [i_1] [i_0 + 1]))) - (arr_1 [i_0 - 2]))))));
                var_15 = (max((min((arr_3 [i_0] [i_0] [i_0 + 1]), (3930780398 && var_10))), (arr_2 [i_1] [i_0])));
                var_16 -= (((((!(arr_4 [i_1] [i_1] [i_0 - 1]))))) >= 1667009906);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
                    {
                        var_17 += (arr_3 [i_0 - 2] [i_1] [i_2]);
                        arr_12 [i_0 - 3] = ((364186894 ? var_12 : (arr_0 [i_0 - 3] [i_3])));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                    {
                        arr_17 [i_2] [i_0 - 1] = ((var_3 ? (!0) : (arr_0 [i_0 - 3] [i_0 - 2])));
                        arr_18 [i_0 - 3] [i_1] [i_4] = (((arr_0 [i_0 + 1] [i_1]) ? ((((arr_9 [i_0 - 2] [i_2]) ? (arr_15 [i_0] [i_1] [i_2] [i_4] [i_0 - 2] [i_4]) : var_8))) : (10811930700268152280 % 3930780397)));
                    }
                    var_18 = (min(var_18, var_4));
                    var_19 += 14856;
                }
            }
        }
    }
    #pragma endscop
}

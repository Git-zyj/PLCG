/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;
    var_19 *= var_6;

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [1] = (~63);
        var_20 = (~60);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_21 = (((min((((3610859556112454964 ? 1 : 0))), (arr_0 [i_1])))) ? ((((arr_3 [i_1] [i_1]) + (arr_1 [i_1])))) : (max((~3610859556112454983), (arr_3 [15] [i_1]))));
        var_22 = (((~(((arr_0 [12]) ? 1 : 14835884517597096652)))));
        var_23 = 3610859556112454985;
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 15;i_4 += 1)
                {
                    {
                        var_24 = (min((((3552898269 >= 8565141453681850681) | (((arr_9 [i_1] [i_2 - 1] [i_3]) ? (arr_9 [2] [6] [i_4 + 1]) : (arr_12 [1] [i_3] [i_3]))))), (((((max((arr_7 [i_4]), (arr_1 [1])))) != 3610859556112454991)))));
                        arr_13 [i_1] [1] [i_2] [1] [i_3] = (~1);
                        var_25 -= ((63 ^ 0) - ((~(arr_12 [i_4 - 1] [8] [i_3 + 1]))));
                        arr_14 [i_3] [i_2] [i_3] [i_4 - 2] [18] = ((arr_4 [i_3 + 1] [i_2 - 1]) ? 1 : (2261300670495806497 ^ 255));
                        var_26 *= max(8105604677169545110, ((-8762162499897546422 ? (!-6721689028200299065) : (min(8105604677169545110, (arr_10 [13] [i_3] [16] [i_1]))))));
                    }
                }
            }
        }
        arr_15 [1] [i_1] = ((~((1 << (((arr_7 [i_1]) - 87))))));
    }
    #pragma endscop
}

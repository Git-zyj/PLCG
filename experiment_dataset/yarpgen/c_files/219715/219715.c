/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((var_14 ? var_11 : 2934111854)))) ? (((~(-32767 - 1)))) : ((var_8 ? var_9 : var_12))));
    var_20 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    arr_10 [i_2] [4] [4] [i_2] = (min(-var_1, (((arr_1 [i_2 - 1]) ? (arr_3 [i_2 + 2] [i_1 - 1]) : 0))));
                    arr_11 [i_0] [i_1] [i_1 + 3] [i_2] = 1360855441;
                }

                for (int i_3 = 4; i_3 < 13;i_3 += 1)
                {
                    arr_14 [i_3] = ((((((!(!633251187))))) / (((((max(1, 42493)))) ^ (((arr_4 [12] [i_1]) - (arr_7 [i_0] [i_0] [i_0])))))));
                    var_21 = (!1360855465);
                    var_22 = (min(var_22, (((-(((((0 ? 15 : 42493))) + ((2934111848 ? var_3 : 2934111848)))))))));
                }
                var_23 = (~-98);
            }
        }
    }
    #pragma endscop
}

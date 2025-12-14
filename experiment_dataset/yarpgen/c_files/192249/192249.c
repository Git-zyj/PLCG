/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (((var_0 || var_7) ? 13438 : ((13436 ? 1 : -13432))));
                var_13 = (((((min(var_8, 13444))) ? var_1 : (((arr_2 [i_1] [i_0]) ^ var_4)))));
                var_14 = ((((!(arr_0 [i_0]))) || (((min(var_6, (arr_3 [i_0] [i_0] [3])))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_3] = ((((((!(arr_4 [i_2]))) && ((min(var_2, var_7))))) ? ((var_6 ? ((((arr_7 [i_0] [i_1] [16]) ? -13439 : (arr_0 [i_3])))) : -13412)) : (((var_0 || var_8) ? (min(var_4, var_7)) : ((max(1965459170, -13412)))))));
                            var_15 = 13412;
                            arr_11 [i_0] [i_1] [2] [i_3] [i_2] [i_1] = (((((((-29138 ? (arr_7 [0] [0] [0]) : (arr_0 [i_0])))) ? ((-4637580799080388848 + (arr_7 [i_0] [17] [i_2]))) : 13439))) ? (arr_5 [i_0]) : ((((arr_0 [i_2 - 2]) ? ((max(var_9, var_9))) : 3816))));
                        }
                    }
                }
                arr_12 [i_0] = (((74 ? var_7 : (arr_0 [5]))));
            }
        }
    }
    var_16 = 1;
    #pragma endscop
}

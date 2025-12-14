/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] [i_3] [i_0] &= ((((max(-7741636223534695326, var_7))) ? (min((arr_10 [i_0] [i_2] [i_2] [i_3]), var_14)) : ((((2395089667 || (arr_11 [i_0] [i_2] [i_2])))))));
                                arr_15 [i_0] [i_1] [1] [i_3] [i_4] = (max(((-var_0 ? ((8191 ? (arr_10 [i_3] [i_3] [i_3] [i_3]) : var_3)) : (((var_6 ? var_7 : var_11))))), (max(var_6, 8191))));
                                var_16 = (max(var_13, (((arr_6 [i_1 - 1] [i_1] [i_1 - 1]) ? (max(-7741636223534695326, var_7)) : ((max(3005514620, 8191)))))));
                                arr_16 [2] [13] [13] [i_3] [5] [i_4] [i_4] = (((~var_7) && (var_3 + -7741636223534695325)));
                                var_17 = (((arr_13 [i_3] [i_1] [i_3] [i_1]) ? (((((var_7 ? -7741636223534695326 : var_8))))) : (min(-7741636223534695325, (6160765516600929096 + var_4)))));
                            }
                        }
                    }
                    arr_17 [3] [i_0] = (((arr_8 [i_0]) % var_3));
                    var_18 = (arr_4 [i_0] [i_0] [i_2]);
                    var_19 = (min((min(var_8, ((-111 ? 16609146481545041476 : var_13)))), ((((arr_2 [i_1]) == ((111 ? -7741636223534695326 : 100)))))));
                }
            }
        }
    }
    var_20 = var_3;
    #pragma endscop
}

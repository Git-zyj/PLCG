/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [17] = ((((((var_7 > (arr_0 [i_0])) || var_1)))));
                    arr_8 [i_1] [i_1] [2] = (((((-(max((arr_3 [i_1] [i_2] [i_2]), var_3))))) ? ((max((((arr_6 [i_1]) ? -303815233377972421 : var_9)), (var_12 == var_9)))) : (min((max(-280648197, (arr_4 [i_0] [i_0] [i_2]))), (arr_0 [i_0 - 2])))));
                    var_14 = ((((min((max(var_12, -280648190)), (arr_5 [i_1] [i_1])))) <= (((arr_1 [i_2 + 1]) ^ (var_13 > var_8)))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    arr_15 [i_4] = ((~(min(var_8, (arr_14 [i_3] [i_3] [i_3])))));
                    arr_16 [i_3] [i_3] [i_4] [i_4] = -var_3;
                    var_15 = (((((303815233377972414 ? 6959673248449365517 : 61380))) ? (!var_11) : (arr_5 [i_4] [i_4])));
                    var_16 = (((((((min(var_11, var_12))) - (max((arr_13 [i_5] [4] [i_3]), var_6))))) ? (var_10 % var_3) : (!var_13)));
                    arr_17 [i_4] [i_4] [i_4] [i_4] = (arr_2 [i_4] [i_4]);
                }
            }
        }
    }
    var_17 += (((((((min(var_12, -1)) > (!var_5))))) == (((min(var_7, -15625)) | ((min(var_12, 1751504235)))))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~(max(var_14, ((max(var_5, var_7))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_7 [i_2] = ((-(((!(arr_6 [i_1] [i_1 - 1] [i_1 + 1]))))));
                    var_19 = var_13;
                    var_20 = (min(var_20, ((((((((var_6 && (arr_3 [i_1] [i_0] [i_0]))) ? ((~(arr_4 [9] [i_1]))) : -var_5))) || var_14)))));
                }
                var_21 = (min(var_21, (max(((((arr_6 [4] [4] [i_1 - 1]) ? (arr_6 [i_1] [12] [i_1 - 1]) : (arr_6 [i_0] [i_1] [i_1 - 1])))), (min((min(-3372418205305712632, var_17)), var_3))))));
            }
        }
    }
    #pragma endscop
}

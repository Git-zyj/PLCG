/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_3 + 1] = (arr_2 [i_0]);
                            arr_13 [i_2] [i_2] [i_2] [i_2] = (min(((((min(var_10, (arr_11 [i_2] [i_2 + 3] [i_2 + 2] [i_2 + 2])))) ? var_4 : (arr_9 [i_0] [i_2 - 1] [i_2 + 2]))), ((min(((39 >> (arr_1 [i_1]))), (~var_12))))));
                            arr_14 [i_0] [i_0] [i_1] [i_2 + 3] [i_3] [i_1] = (max(((max(var_14, ((max((arr_2 [i_0]), var_0)))))), ((-(arr_1 [i_0 - 2])))));
                        }
                    }
                }
                arr_15 [i_1] = (((((-((-(arr_4 [i_1] [i_0] [i_0 + 1])))))) ? (arr_4 [i_0 + 3] [i_0 + 3] [i_0]) : ((((max(var_1, var_11))) ? 3652974007 : (arr_7 [i_0])))));
                arr_16 [i_0 - 1] [i_1] [i_0 - 1] = ((((((arr_0 [i_0 - 2]) ? -875298695 : var_12))) ? (((max((arr_2 [i_0 + 3]), (arr_0 [i_0 + 3]))))) : (max(7, 1023))));
                arr_17 [i_0] [i_0] = (((min((~var_5), (min(var_0, 5500253335814328539))))) && 3652974007);
            }
        }
    }
    var_16 = ((var_7 ? var_11 : ((min(var_15, var_7)))));
    var_17 = var_6;
    var_18 = var_3;
    var_19 = ((min(-var_2, var_6)));
    #pragma endscop
}

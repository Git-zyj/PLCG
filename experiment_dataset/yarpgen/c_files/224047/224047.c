/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 = (max(((((((-4177686970330381076 ? var_7 : var_14))) || 10012))), (((-4177686970330381077 ? var_2 : (arr_3 [i_0] [2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_16 = var_14;
                                arr_12 [i_0] [i_1] [i_1] [i_2] [i_3] [i_1] [1] = ((arr_3 [i_0] [18]) ^ ((max((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_1])))));
                            }
                        }
                    }
                    var_17 = ((((max(((var_0 ? (arr_8 [12] [i_1] [i_2] [18] [i_1]) : (arr_6 [i_2] [i_1] [i_0]))), (((var_4 ? (arr_3 [14] [i_1]) : (arr_6 [i_0] [i_1] [i_1]))))))) <= ((55523 ? -4177686970330381073 : 2819269533))));
                }
            }
        }
    }
    var_18 = var_9;
    var_19 = (max((((var_3 && 2457509256) ? var_7 : var_7)), var_13));
    var_20 |= var_4;
    #pragma endscop
}

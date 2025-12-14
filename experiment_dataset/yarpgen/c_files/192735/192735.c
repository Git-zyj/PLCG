/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_11 = (max(var_11, ((max(1, 2267869108484387093)))));
                arr_6 [i_1] = var_9;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    var_12 = (max(var_12, ((-var_5 ? (((((var_0 || 9691313835896836392) && (arr_11 [i_2] [i_2] [5]))))) : ((var_5 + (((32992 ? 1087091567 : var_8)))))))));
                    arr_17 [2] [i_4] [i_4] [i_3] = (((arr_14 [i_2] [i_2] [i_2] [i_2]) == ((~(24262 / 65519)))));
                }
            }
        }
    }
    #pragma endscop
}

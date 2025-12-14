/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] = (arr_1 [i_1]);
                arr_7 [i_0] [i_1] = (((((min((arr_0 [i_0] [i_0]), (arr_1 [i_1]))))) ? ((((((2939537752 ? 2939537752 : 1355429549)) != ((2939537747 ? 2912539325 : 6151)))))) : var_7));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    arr_17 [15] [i_3] = (((arr_9 [i_2 - 1]) <= ((-(min(var_6, 9223372036854775807))))));
                    arr_18 [1] [i_3 + 1] [i_3 + 1] = (arr_11 [i_2] [i_2]);
                    arr_19 [i_4] [i_4] [i_3] [i_2] = var_6;
                    arr_20 [i_2] [i_3] [16] = var_2;
                    arr_21 [i_2 - 2] [15] = (arr_9 [i_2 - 2]);
                }
            }
        }
    }
    var_10 = (max(((~(-105 * var_3))), var_2));
    #pragma endscop
}

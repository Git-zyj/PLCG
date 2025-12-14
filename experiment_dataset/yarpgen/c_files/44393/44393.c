/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((!(((5518285489562126913 ? 7201365031618565152 : var_2))))))) == (max(5518285489562126913, (1 / var_6)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_11 = ((((~(~65522)))) ? (min((min(10581, 5118896491105711230)), var_3)) : ((((arr_2 [i_0]) | ((max(var_8, 54966)))))));
                    var_12 = ((!(((~(!54954))))));
                    arr_9 [1] = (max(255, (min((((var_1 && (arr_1 [i_1])))), (min(var_6, var_7))))));
                    var_13 = (((((-2009408308 ? 169738948 : 1))) ? 52585 : 16378824817405457797));
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_7));
    var_12 = (max((((!(11921 && var_2)))), var_0));
    var_13 = max(var_6, var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = (max(((~((27124 >> (255 - 237))))), (arr_4 [i_0])));
                arr_6 [i_0] [i_0] [i_1] |= ((((((65519 ? -1536890491 : (arr_5 [i_0] [i_0]))) < -356539265))) >> (max((arr_5 [i_1 + 1] [i_1]), var_6)));
                var_15 += 22044;
                var_16 = (max(var_16, (((1 ? 524160 : 4142750841517679148)))));
                arr_7 [i_0] = ((((((arr_2 [i_0] [i_0]) | (arr_5 [i_1 + 4] [i_1 + 1])))) ? var_4 : ((max(var_8, (max(0, 8)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                var_17 = (max(((((249 / 2147483631) * ((4294967295 ? 2147483647 : -356539266))))), (min(((((arr_8 [i_2]) ? var_4 : var_7))), (max((arr_8 [i_3]), -2820))))));
                arr_12 [i_2] [i_2] [i_2] = ((arr_8 [i_2]) ^ (((max(var_1, (max(var_8, var_0)))))));
                arr_13 [i_2] = (max(((32765 ? 32754 : 1)), var_2));
            }
        }
    }
    #pragma endscop
}

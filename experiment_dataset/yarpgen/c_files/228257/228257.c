/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((max(8016522294106930525, 7019974791605053141)), var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_3] [i_1] = (arr_2 [i_1]);
                                arr_12 [i_1] [i_1] [i_2] [i_1] [i_1] = (((min((((arr_7 [i_4] [i_3] [i_2] [i_1] [i_1] [i_0]) * 13171866141119452023)), (arr_0 [i_3 - 3])))) || (((arr_10 [i_2] [i_1] [i_0] [i_1] [i_3 - 2]) != var_11)));
                            }
                        }
                    }
                }
                arr_13 [i_1] = 0;
            }
        }
    }
    var_21 = ((((max(((var_16 ? var_17 : var_2)), -64))) ? ((max(((var_7 ? var_8 : var_17)), ((14259369168517066710 ? var_17 : var_15))))) : var_10));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = (max(var_18, (((0 <= ((((4 ? var_4 : 1401952963)) % 73)))))));
                arr_4 [i_1] [i_1] = ((((((arr_2 [i_0] [i_1] [i_1]) ^ ((var_16 ? -6757 : 4294967275))))) ? (min(((((arr_0 [i_1]) | var_15))), (min(13867266039810513457, var_15)))) : (((~((var_9 ? (arr_3 [i_0] [i_1]) : 2893014333)))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_4] [i_4] [i_1] [0] [i_0] [i_2] = (max(((4294967295 * (!1401952963))), (max((max(-20017, 4294967280)), (((-(arr_9 [i_4] [6] [7] [i_3] [i_1] [i_4]))))))));
                                arr_13 [5] [i_1] [i_2] [i_1] [i_0] = (arr_5 [i_0] [i_1] [4] [i_3]);
                                var_19 = (min(var_19, (((((min(((56 ^ (arr_6 [i_0] [i_1] [7]))), (max((arr_1 [i_2]), -8674953580334686689))))) ? (((!(arr_0 [i_0])))) : ((228 ? 168 : 228)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = ((~(((!(((9223372036854775784 ? -8674953580334686708 : var_2))))))));
    var_21 = ((((max((min(240, -8674953580334686696)), (((199 ? var_9 : 18)))))) ? ((var_14 ? -9223372036854775784 : var_14)) : ((((~var_7) ? 4294967278 : (~2748382126))))));
    #pragma endscop
}

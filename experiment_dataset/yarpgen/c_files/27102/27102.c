/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_13 += ((137438953472 ? (((!18645) ? 869865916 : (1 | 1571940857))) : (min(((16414760123611824798 ? 3484072358 : 3484072380)), (-117 & 9871)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] = (min(((((((1 ? 1 : 13394))) ? ((min(1, -9871))) : ((53377 ? 25244 : 4397))))), ((-120 ? 4294967288 : 4612))));
                                var_14 = (max(var_14, 1));
                                var_15 ^= ((!((((-114 || 4294967268) ? 29675 : ((max(44013, 29687))))))));
                                arr_14 [i_0] [i_1 + 2] [i_2] [i_2] [i_2] = ((!((!(((18440519528797564762 ? 255 : 117)))))));
                                arr_15 [i_0] [i_2] = (~1979274546);
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = ((~((var_8 ? var_7 : -20637))));
    var_17 += (!var_7);
    #pragma endscop
}

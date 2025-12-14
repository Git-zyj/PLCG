/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [7] = ((-(max((12108410 - 228), (arr_1 [i_0] [i_0])))));
                var_19 |= (((arr_4 [i_0]) != ((min(4389870115314971202, 127018322)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            {
                var_20 *= 9611366222646485174;
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_21 = (max((min(((-523631288 ? 18446744073709551614 : (arr_13 [i_2] [i_3] [i_4]))), (!118))), 1));
                            var_22 = var_1;
                            var_23 = ((((228 || (arr_15 [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_3 - 1] [i_2]))) ? (arr_15 [19] [i_3 - 1] [i_5 + 1] [i_3 - 1] [i_2 - 1]) : (!86)));
                            var_24 = (((!var_13) % (max(((~(arr_15 [i_4 + 2] [i_4 + 2] [i_4] [i_4 - 1] [i_4]))), (((!(arr_14 [1]))))))));
                            var_25 = 88;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

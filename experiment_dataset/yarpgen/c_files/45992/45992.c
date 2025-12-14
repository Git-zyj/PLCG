/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= (!-43);
    var_19 = (!var_6);
    var_20 = ((~(~var_1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [0] [i_0] = (((((!((!(arr_3 [4] [i_1])))))) / ((~((28 ? var_15 : 42673))))));
                arr_7 [i_0] [9] [i_0] = ((108 ? -1 : 50755));
                var_21 = (min(((!(arr_3 [i_0] [19]))), ((85 != (arr_2 [11] [i_1 - 4])))));
                arr_8 [i_0] [i_1] [i_1] = ((!(((~(arr_3 [i_1] [13]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_15 [14] [i_1] [i_2] [i_0] &= 105;
                            var_22 = ((((-1 != (!var_16))) ? ((((arr_12 [i_0] [i_1 + 1] [11] [13]) != (arr_3 [i_0] [i_1 + 3])))) : -1));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((var_5 ? (~4194303) : var_2));
    var_12 = (max(var_12, (((!((max(var_10, var_5))))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_13 = (min(var_13, (~50753)));
                            var_14 &= (((((-var_3 ? (arr_10 [i_0 - 4] [i_1 - 2] [i_2 - 1]) : ((~(arr_9 [i_3] [i_3] [i_3])))))) ? (arr_4 [i_2]) : ((((max(-5748034236285497987, (arr_2 [i_1 + 1] [i_3])))) ? (128 / 106) : (((!(arr_9 [i_2] [i_2] [i_3]))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_15 = var_3;
                            var_16 = ((-144 ? (((-(arr_0 [i_0] [i_0 - 3])))) : (((~var_4) ? ((18446744073709551609 ? (arr_11 [i_0] [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_0]))) : ((((arr_2 [i_4] [i_0]) ? (arr_2 [i_0 - 1] [i_0]) : 144)))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!16673) >= var_1);
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0 - 1] [i_1] [i_2] = (-(arr_2 [i_0 - 4] [i_2 + 2]));
                    arr_8 [i_0] [i_2] [i_2 + 2] = (((arr_5 [i_2] [i_1] [i_2] [i_1]) || (arr_3 [i_2 + 2])));
                    var_11 = (((((((((arr_6 [i_2] [i_1] [i_2]) + 2021344699))) && ((!(arr_3 [i_1])))))) << (min(((((arr_0 [i_2]) ? (arr_1 [i_0]) : (arr_1 [i_1])))), ((var_3 ? var_0 : -773259482638639000))))));
                    var_12 = (((5504957198962208372 ? var_0 : 32767)));
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_11 = (min(var_11, ((((max(-var_8, ((max(-599528315, 5255124612273011988))))) / (max((arr_3 [i_0]), (~6421))))))));
                var_12 -= ((-(min((~var_1), (arr_2 [i_0])))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = (((((!(arr_7 [i_2])))) << (((min((max(-944772917, 9783)), -65)) + 82))));
        arr_9 [i_2] = arr_7 [i_2];
    }
    #pragma endscop
}

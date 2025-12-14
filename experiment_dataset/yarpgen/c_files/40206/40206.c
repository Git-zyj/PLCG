/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (253 || 84);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 += ((((((arr_2 [14] [i_1 + 2] [14]) ? (arr_2 [6] [i_1] [i_1 + 4]) : (arr_2 [4] [i_0 + 2] [i_0 + 2])))) ? (!255) : (arr_2 [14] [14] [14])));
                    arr_7 [i_1] [i_1 + 1] [i_1] = arr_5 [i_1] [i_1] [i_1];
                }
            }
        }
    }
    var_20 = ((var_16 << ((((var_4 * ((171 ? 251 : 41)))) - 4745))));
    #pragma endscop
}

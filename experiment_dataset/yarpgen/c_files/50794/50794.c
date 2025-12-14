/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] = (((arr_0 [7]) & ((((max((arr_3 [i_0]), (arr_0 [i_0])))) ? ((-(arr_5 [i_2] [i_1] [i_0]))) : (arr_7 [i_1 + 1] [i_2 - 1])))));
                    arr_9 [i_1] [i_1 + 1] [i_2] = ((((-2147483634 - (((arr_3 [i_0]) ? (arr_7 [i_0] [i_1]) : (arr_7 [i_0] [i_0]))))) - (((max((arr_2 [i_0] [0] [i_2]), (arr_6 [i_2] [i_1] [i_0])))))));
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        arr_12 [i_3] = (((((arr_3 [3]) < (arr_6 [i_3] [i_3] [i_3]))) ? (arr_3 [i_3 - 1]) : (((~(((arr_2 [i_3] [i_3] [i_3]) >> (((arr_0 [i_3 - 1]) + 54)))))))));
        var_20 -= ((((max((arr_0 [i_3]), ((((arr_6 [i_3] [0] [i_3]) > (arr_7 [i_3 - 1] [i_3]))))))) % ((((((14480838828860166498 << (3768887694039864109 - 3768887694039864048)))) || 38631)))));
    }
    var_21 -= var_19;
    #pragma endscop
}

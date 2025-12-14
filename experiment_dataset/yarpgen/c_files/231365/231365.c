/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (((((!(arr_1 [i_0] [i_0])))) == ((1 ? (arr_1 [i_0 - 3] [13]) : 32764))));
        var_14 -= ((((-46 < -5369256472673358660) * (255 < 40))));
        arr_3 [i_0] [i_0] = 5369256472673358659;
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 8;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 6;i_2 += 1)
        {
            {
                arr_10 [i_1] [i_2 + 4] [i_2] = var_6;
                arr_11 [i_2] = -5369256472673358661;
                arr_12 [i_1 - 3] [i_1] [i_2 + 4] |= (((var_11 < var_13) >> (((~67) + 87))));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((214 ? 59794 : 53132));
                arr_5 [i_0] [i_0] = (((-(arr_2 [i_0] [i_1 - 1]))));
                arr_6 [i_0] [i_0] [i_0] = (-((-(5741 && 5742))));
            }
        }
    }
    var_10 = var_0;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_11 = (max(var_11, (((arr_9 [i_2] [i_2]) ? 2615011966 : 4713840138460776631))));
        var_12 = (min(var_12, (((((((arr_10 [i_2] [i_2]) ? 18446744073709551608 : (arr_0 [i_2])))) ? (arr_1 [i_2]) : (((arr_9 [10] [i_2]) ? (arr_7 [i_2]) : 5754)))))));
        arr_11 [i_2] = ((-(arr_9 [i_2] [i_2])));
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_13 &= (-(min(-var_6, -var_8)));
                    var_14 = ((max((arr_1 [i_3 + 1]), 1122064279)));
                    var_15 = (arr_16 [i_3] [i_3 - 1]);
                }
            }
        }
    }
    #pragma endscop
}

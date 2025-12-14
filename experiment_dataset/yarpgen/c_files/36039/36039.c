/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (--1);
    var_14 = (min(var_14, (((!(((4615473751541894070 << (((-112 + 114) - 2))))))))));
    var_15 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] = (((((1952192885 * (min(var_12, 4615473751541894070))))) ? ((-112 ? 16 : (min(-1952192885, 31629)))) : (~14632)));
                    var_16 = (min((((max(31482, 4615473751541894092)) % var_10)), (((!(0 && 188895067))))));
                    var_17 &= ((((((arr_7 [i_1 - 1] [12] [16]) ^ (arr_8 [i_0] [i_1] [i_2])))) ? (arr_10 [i_0] [16] [16]) : (((((111 ? var_11 : (arr_6 [12] [12] [12])))) ? 1 : (arr_8 [i_0] [i_2] [i_2 + 2])))));
                }
            }
        }
    }
    #pragma endscop
}

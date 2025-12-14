/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 ^= ((-(max((arr_4 [i_1] [i_0]), 5590164630376538379))));
                var_14 = (((~(arr_1 [i_0]))));
                var_15 = (~3890119405);
                var_16 = 1826465483;

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    arr_7 [i_2] [i_1] [i_2] = (arr_5 [i_0] [i_1]);
                    var_17 *= ((((-(arr_6 [i_0])))));
                    arr_8 [i_0] [i_1] [0] |= (arr_5 [i_0] [i_1]);
                    var_18 = ((((max(2468501813, 62414))) && (((((min(3121, var_11))) ? ((var_8 / (arr_6 [i_1]))) : var_11)))));
                    var_19 = ((+(((-1949155891 + 2147483647) >> 9473925891908295627))));
                }
            }
        }
    }
    #pragma endscop
}

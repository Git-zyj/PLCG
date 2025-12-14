/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= ((-3 + ((min(18446744073709551615, 313897376)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_6 [i_0] [2] [i_2] |= 3838563922062618434;
                    var_18 = (((var_10 && var_2) ? 739141025 : ((((2999087966 && ((min(-32, 15728640)))))))));
                    arr_7 [i_0] [i_0] [9] [i_1] = (((((3838563922062618434 < (arr_3 [i_1] [i_2])))) >= (arr_1 [4])));
                    arr_8 [i_0] [i_1] [3] [12] = (((~-5065289700934227205) << ((((+(((arr_5 [i_0] [i_1] [i_2] [i_2]) ? var_3 : 18446744073709551615)))) - 4425024628760089508))));
                }
            }
        }
    }
    #pragma endscop
}

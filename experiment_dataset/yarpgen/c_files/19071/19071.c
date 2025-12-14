/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_11 = var_8;
                    var_12 = (var_0 ^ var_0);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 12;i_4 += 1)
        {
            {
                var_13 = ((((((var_8 != (arr_13 [i_4] [i_3]))))) == (min((4 % var_4), (244 == 750578763)))));
                arr_14 [i_4] [i_3] = ((-4294967283 ? var_6 : (arr_2 [i_3])));
                arr_15 [i_3] = ((!((((((12 ? var_4 : 4580))) ? 6 : (var_6 == var_3))))));
                arr_16 [i_3] [i_3] [i_3] = (-var_4 * -var_8);
            }
        }
    }
    #pragma endscop
}

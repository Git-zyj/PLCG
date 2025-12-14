/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_17 = (max(var_17, (arr_8 [i_0] [i_0] [i_2])));
                    var_18 = (max(var_18, (((-(arr_7 [i_1] [i_2]))))));
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    arr_12 [i_0 - 2] [i_1] [i_1] [i_3] = ((!(arr_3 [i_0])));
                    var_19 = 11;
                    arr_13 [i_3] [i_1] [i_0 - 2] = ((((((979437908 ? 255 : (arr_4 [i_0 - 1] [i_1]))))) ? 237 : (arr_0 [i_1])));
                }
                var_20 *= (max(255, 128));
                arr_14 [i_1] [i_0] = 1;
            }
        }
    }
    var_21 += (((((var_8 ? var_13 : var_14))) ? (((((-28653 ? 255 : 139))))) : (((((16614 ? var_2 : var_0))) ? var_16 : var_13))));
    #pragma endscop
}

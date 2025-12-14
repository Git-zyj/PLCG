/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-var_0 >= (((var_7 ? 28437 : ((min(35236, var_3))))))));
    var_11 = 171;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
                {
                    var_12 ^= (arr_3 [i_0]);
                    arr_8 [i_0] [i_0] [i_2] [8] = 96;
                }
                for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                {
                    var_13 = (((min(172, var_6)) == (((arr_7 [i_0] [i_0] [i_0]) ? (arr_7 [i_0] [i_1] [i_0]) : var_7))));
                    arr_11 [i_0] [i_1] [i_1] [i_3] = (min(8346, (arr_3 [i_1])));
                    var_14 = (((((-(arr_4 [i_0] [13])))) || (arr_3 [i_1])));
                }
                var_15 = ((((65527 || ((((arr_6 [i_0] [i_1] [i_1]) ? var_3 : var_2))))) ? ((6311755508119011994 ? 173 : 186)) : (((min(var_8, 94))))));
            }
        }
    }
    #pragma endscop
}

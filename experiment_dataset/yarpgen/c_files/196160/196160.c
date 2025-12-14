/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (var_14 - 4705);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (min(-96, (arr_0 [i_2])));
                    var_19 = (max(var_19, ((min((min(14212317952892973990, ((min(var_9, 255))))), ((min((!var_10), ((!(arr_2 [i_0] [i_2])))))))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 8;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                {
                    arr_13 [i_0] = (((arr_11 [i_0]) ? -4722 : (max((arr_5 [i_0] [i_0] [i_0] [i_0]), (arr_6 [i_3])))));
                    arr_14 [i_0] [i_0] [i_3 + 2] [i_4] = (((((1 & var_1) - (var_15 < var_16))) < (((((arr_11 [i_4 + 1]) && -49))))));
                }
            }
        }
    }
    var_20 = (min(4234426120816577625, var_16));
    #pragma endscop
}

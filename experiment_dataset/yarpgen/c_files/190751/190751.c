/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(25, ((var_8 << (var_0 + 25)))));

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_13 = 65535;
                        var_14 = ((-127 || ((((((-(arr_1 [i_0])))) ? ((7730789287174943380 | (arr_7 [i_0] [i_1] [i_2] [14]))) : (((2075488413 ? 47 : (arr_6 [i_0] [i_0] [i_2])))))))));
                        var_15 = (min((1 - 26), (((122 < (((var_5 != (arr_3 [i_0])))))))));
                    }
                }
            }
        }
        var_16 = (((min(69996910023127355, 16504034743563358161)) % (arr_3 [i_0])));
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (-1189520723155448325 ? var_4 : 16368);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_21 = (min(var_21, (arr_4 [i_1])));
                arr_5 [i_0] = ((-(((~8796091973632) % (((-7905903908914959801 ? var_10 : var_2)))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 13;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        var_22 = (arr_2 [i_2]);
                        var_23 = (max(18446735277617577983, -1));
                        var_24 = (min((max(-118, (min(250, (arr_1 [i_4] [i_5 + 1]))))), (max(32640, (((arr_4 [i_4]) ^ (arr_0 [i_5])))))));
                    }
                    arr_14 [i_2] [i_3] [i_3] [i_3] = var_19;
                    var_25 = ((((((max(var_16, 1))))) ^ (((((var_0 ? (arr_8 [i_2] [i_2]) : 83))) | (arr_4 [i_2])))));
                    var_26 = (max(((8796091973639 ? 4900 : 18446735277617577999)), (var_13 + var_8)));
                }
            }
        }
    }
    var_27 = (min(var_3, var_4));
    #pragma endscop
}

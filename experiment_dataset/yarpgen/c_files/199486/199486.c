/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((max(var_9, 0)) & (var_10 && 0)))) ? 13307523669163129471 : ((((((-2147483647 - 1) / var_5)) / var_11))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_14 = (((((arr_5 [i_1 + 2] [i_1 + 2] [i_2]) / (arr_8 [i_1 + 3] [i_1 + 1]))) / (min((arr_8 [i_1 - 1] [i_1 - 1]), (arr_5 [i_1 + 2] [i_1 + 2] [i_1 + 2])))));
                    var_15 = (max(var_15, ((((max((arr_0 [i_1 + 1]), 0)) << ((((max((arr_6 [i_0] [i_1 + 2] [2] [i_1 + 3]), (arr_6 [i_0] [i_0] [3] [i_1 + 2])))) + 12833)))))));
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    var_16 *= (3458764513820540928 << 0);
                    arr_11 [i_3] [i_0] [i_0] = ((min(2958261462016442970, 0)));
                }
                var_17 = (((((arr_5 [i_1 + 3] [i_1] [i_1 - 1]) >= -3458764513820540929)) ? (max(-62, 3458764513820540929)) : ((((6354617937945144425 && (arr_9 [i_0] [i_1] [i_1 + 1] [i_0])))))));
            }
        }
    }
    #pragma endscop
}

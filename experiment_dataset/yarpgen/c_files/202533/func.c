/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202533
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                var_20 -= ((/* implicit */short) (+(((/* implicit */int) (short)16383))));
                arr_4 [i_0] [i_1] = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (1665946093) : (((/* implicit */int) var_11))))))) ? (((((/* implicit */int) arr_2 [i_0] [i_1 - 1])) | (((/* implicit */int) arr_2 [i_0] [i_1 + 1])))) : (max((arr_3 [i_1 + 1]), (((/* implicit */int) arr_2 [i_1 + 2] [i_1 + 2])))));
                arr_5 [i_0] = max((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) ((524287) != (2147483647)))) : (((/* implicit */int) ((short) (short)-14631))))), (((/* implicit */int) var_7)));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 18; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [17] [i_0] [i_0] [i_0] = min((((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_1 - 1] [i_1 + 1] [i_2 - 3])) : (-43750515))), (((((/* implicit */_Bool) max((((/* implicit */int) (short)-28682)), (arr_14 [17] [i_1 - 1] [i_2 + 1] [17] [i_4] [i_1 - 1])))) ? (((/* implicit */int) (short)13150)) : (arr_15 [i_1 + 1] [i_1] [i_1 + 1] [i_2 - 3] [i_1 + 1]))));
                                var_21 = (~(arr_7 [i_0] [10] [i_2 - 3]));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */short) (~(((/* implicit */int) ((short) arr_6 [i_0] [9] [9] [i_1])))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) var_10);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39738
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
    var_18 &= ((/* implicit */short) (+(1193584050U)));
    var_19 = ((/* implicit */int) ((var_15) << (((var_5) - (2862829129U)))));
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_13))));
    var_21 = ((/* implicit */int) min((736631874U), (4116487447U)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */int) var_16);
                    arr_8 [i_0] [i_1] [4] |= var_16;
                    var_23 = ((int) ((unsigned int) 1402458043));
                    var_24 *= ((/* implicit */int) min((((((arr_5 [i_0] [i_1 - 1]) << (((((/* implicit */int) var_10)) - (18953))))) << (((var_0) - (3090884587U))))), (((/* implicit */unsigned int) min((((((((/* implicit */int) arr_2 [i_1] [i_2])) + (2147483647))) << (((((/* implicit */int) var_6)) - (29450))))), (((/* implicit */int) ((short) 0))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_13 [i_2] [i_3] [i_3] [i_1 - 1] [i_1] [i_1 - 1] [i_2] = ((int) (short)-1997);
                                arr_14 [i_2] = ((/* implicit */short) var_12);
                                var_25 = (-(((((arr_9 [i_0] [i_0] [i_0] [i_0] [7]) / (var_1))) / (((-996151698) / (((/* implicit */int) arr_2 [i_0] [i_0])))))));
                                var_26 = ((/* implicit */int) (~(((var_5) | (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 - 2] [i_1 - 2])))))));
                                var_27 = arr_10 [i_0] [i_0] [i_0] [i_2];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

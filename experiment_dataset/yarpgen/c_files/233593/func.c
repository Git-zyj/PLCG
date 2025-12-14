/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233593
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
    var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_18))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((((/* implicit */int) arr_7 [i_2 + 1] [i_1] [i_1 + 1] [i_0])) ^ (((((/* implicit */int) arr_0 [i_1 + 1] [i_2 - 1])) << (((((/* implicit */int) arr_0 [i_1 + 2] [i_2 + 3])) - (50526))))));
                    var_21 = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 - 1]))))), (((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned char)240))))) : (((/* implicit */int) (unsigned char)140))))));
                    arr_9 [i_1] [i_2] = var_18;
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) min((var_22), (var_2)));
                                arr_15 [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned char) arr_4 [i_0] [i_0]);
                                var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_2 + 2] [i_2 + 1] [(unsigned char)5] [i_3 - 1])) > (((/* implicit */int) arr_11 [i_2 - 2] [i_2 - 2] [i_3] [i_3 + 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((((/* implicit */int) ((((((/* implicit */int) (unsigned char)244)) + (((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) var_5))))) + ((+(((/* implicit */int) (unsigned char)163)))));
}

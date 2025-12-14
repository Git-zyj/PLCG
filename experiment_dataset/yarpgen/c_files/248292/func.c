/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248292
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
    var_11 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((var_3), (var_1)))) ? (((((/* implicit */int) var_7)) / (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) 1189119395)) ? (((/* implicit */int) var_9)) : (10))))), (((/* implicit */int) var_7)))))));
    var_13 = var_10;
    var_14 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = (unsigned char)192;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_15 ^= ((unsigned char) var_3);
                                var_16 = max((((unsigned char) var_1)), (min(((unsigned char)150), (arr_8 [(unsigned char)8] [i_3] [i_4]))));
                                var_17 = ((/* implicit */unsigned char) min((min((((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [(unsigned char)11] [i_4])), (arr_4 [i_0] [i_3]))), (((/* implicit */int) arr_8 [i_0] [i_1] [(unsigned char)9]))));
                                arr_13 [i_0] [i_0] [i_0] [(unsigned char)10] [i_0] [i_0] = (unsigned char)82;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

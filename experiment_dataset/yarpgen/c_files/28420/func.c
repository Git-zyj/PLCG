/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28420
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
    var_16 = ((unsigned char) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))), (((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [i_3] [i_0] = ((/* implicit */unsigned char) (((+(((/* implicit */int) max((arr_4 [i_2] [i_0]), (var_6)))))) > (((((/* implicit */int) var_10)) >> (((((/* implicit */int) arr_4 [i_1] [i_3])) - (89)))))));
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((unsigned char)114), ((unsigned char)114)))) ? (((/* implicit */int) max((var_0), (var_2)))) : (((((((/* implicit */int) arr_4 [i_1] [i_2])) <= (((/* implicit */int) var_4)))) ? (((/* implicit */int) ((unsigned char) var_11))) : (((((/* implicit */int) arr_4 [(unsigned char)2] [i_2])) | (((/* implicit */int) arr_4 [i_3] [i_2])))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        {
                            var_18 = ((unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_0))))) > ((+(((/* implicit */int) (unsigned char)37))))));
                            var_19 -= arr_11 [i_0] [(unsigned char)16] [i_0] [i_5];
                            var_20 *= ((/* implicit */unsigned char) max((((/* implicit */int) arr_5 [i_0 + 1] [i_0 - 1] [i_0 - 2])), (((((/* implicit */int) arr_2 [i_0 - 1])) * (((/* implicit */int) arr_2 [i_0 - 1]))))));
                            var_21 -= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)43)) - (((/* implicit */int) (unsigned char)195))));
                        }
                    } 
                } 
                arr_14 [i_0] [(unsigned char)11] = var_1;
            }
        } 
    } 
    var_22 = min(((unsigned char)199), ((unsigned char)53));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43213
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
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        var_18 += ((/* implicit */long long int) min((min(((((_Bool)1) ? (((/* implicit */int) arr_0 [(unsigned short)0])) : (((/* implicit */int) (signed char)-121)))), (((/* implicit */int) arr_2 [i_0] [i_0 - 1])))), (((/* implicit */int) max((var_10), (((/* implicit */unsigned char) arr_2 [i_0 - 3] [i_0 + 1])))))));
        var_19 = (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)54545))))));
        arr_3 [i_0 - 2] = ((/* implicit */short) ((unsigned char) max((((var_4) << (((var_16) - (674294593))))), (((/* implicit */unsigned int) max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                {
                    arr_11 [i_1] [i_1] = ((/* implicit */long long int) (((~(((/* implicit */int) arr_8 [i_1] [i_1])))) * (((/* implicit */int) arr_5 [(unsigned char)1]))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 2; i_4 < 23; i_4 += 1) 
                    {
                        for (signed char i_5 = 1; i_5 < 24; i_5 += 4) 
                        {
                            {
                                arr_20 [i_1] [i_2] [i_3] [i_5] = ((/* implicit */unsigned short) (signed char)104);
                                var_20 = ((/* implicit */signed char) var_0);
                                arr_21 [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)3912))))) ? (((/* implicit */unsigned int) min((((((/* implicit */int) arr_5 [i_2])) / (((/* implicit */int) var_6)))), (min((1631777360), (((/* implicit */int) arr_6 [i_1]))))))) : (max((arr_15 [i_1] [i_2] [i_3] [i_5 - 1]), (arr_15 [(unsigned char)8] [i_3] [i_2] [i_1])))));
                            }
                        } 
                    } 
                    var_21 = (~(min((max((((/* implicit */unsigned int) arr_13 [i_2] [i_2] [i_2] [i_2] [i_2])), (var_11))), (((/* implicit */unsigned int) ((((((/* implicit */int) var_12)) + (2147483647))) << (((((/* implicit */int) (unsigned short)12)) - (12)))))))));
                    arr_22 [i_1] [i_1] = ((/* implicit */short) arr_4 [i_2]);
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) min((arr_7 [i_1] [i_1] [(short)11]), (((-1631777373) == (((/* implicit */int) (!((_Bool)1)))))))))));
                }
            } 
        } 
        var_23 -= ((/* implicit */unsigned short) (short)18901);
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_1] [i_1])) | (((/* implicit */int) arr_8 [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) (((~(var_11))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1])))))) : (((((/* implicit */_Bool) arr_5 [(unsigned short)10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_3)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(unsigned char)17] [(unsigned char)17] [i_1]))) | (arr_9 [i_1] [i_1] [i_1])))))));
    }
    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) var_15)) : (((min((3785685699U), (((/* implicit */unsigned int) (_Bool)1)))) % (((/* implicit */unsigned int) var_15))))));
}

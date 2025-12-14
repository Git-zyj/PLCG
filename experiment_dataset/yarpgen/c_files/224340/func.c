/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224340
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 8; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 |= ((((/* implicit */_Bool) (short)-14120)) ? (((((/* implicit */int) arr_4 [i_0] [i_1 - 4] [i_2])) - (var_18))) : (((((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) - (((/* implicit */int) arr_7 [i_2] [i_1] [i_2])))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) (+(min((((((/* implicit */int) var_14)) | (((/* implicit */int) var_12)))), (max((((/* implicit */int) (short)-8192)), (arr_9 [i_0] [i_0] [(short)3] [i_0])))))));
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) arr_5 [i_1] [i_1]))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) min(((-(((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1] [(unsigned char)1])))), (((/* implicit */int) min((arr_4 [i_0] [i_0] [i_0]), (var_5))))));
                        arr_13 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_3] [i_0] [i_2]))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_1 + 1] [i_2] [i_1 + 1] [i_3])) : (((/* implicit */int) (signed char)-92))))));
                    }
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_10))));
                    arr_14 [i_0] [i_2] [i_0] [(unsigned short)8] = ((/* implicit */short) ((int) var_18));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((var_10) == ((+((-(((/* implicit */int) (_Bool)0))))))));
    var_23 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)8192))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (var_9)))));
}

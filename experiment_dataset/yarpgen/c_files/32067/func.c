/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32067
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 13; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (unsigned short)26051)) ? (((/* implicit */int) (unsigned short)50267)) : (((/* implicit */int) (unsigned short)65021)))) : (((/* implicit */int) min((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_1 + 1]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 2; i_3 < 11; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [(unsigned short)1] [i_1] [i_3])) * (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_9)) : ((~(((/* implicit */int) arr_8 [i_0] [i_0] [i_2]))))));
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? ((+(((/* implicit */int) var_11)))) : ((+(((/* implicit */int) arr_2 [i_1] [(unsigned short)14]))))));
                        arr_13 [i_0] [i_1 - 3] [i_1 - 3] [i_3] = arr_4 [i_1] [i_1 - 1];
                        var_21 = ((unsigned short) ((unsigned short) arr_7 [i_3]));
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_3])) : (((/* implicit */int) var_0)))) / (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_3 - 2] [(unsigned short)8])) || (((/* implicit */_Bool) arr_11 [i_1 - 2] [i_1] [i_2] [(unsigned short)13]))))))))));
                    }
                    var_23 = ((unsigned short) (-(((/* implicit */int) arr_6 [i_0] [i_2] [i_2] [i_0]))));
                }
            } 
        } 
    } 
    var_24 = var_1;
    var_25 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_17)) | (((/* implicit */int) var_2))))) ? (((/* implicit */int) max((var_6), (var_14)))) : ((-(((/* implicit */int) var_4))))))));
    var_26 = var_5;
}

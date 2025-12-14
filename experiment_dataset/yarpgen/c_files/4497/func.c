/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4497
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        var_14 = ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)));
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_15 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned short)0)) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))));
            arr_6 [i_0 - 1] [i_1] = ((/* implicit */_Bool) (((+(4294967295U))) + (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1])) | (((/* implicit */int) arr_4 [i_1])))))));
            arr_7 [i_0] [i_1] = ((/* implicit */signed char) ((4294967277U) << (((((/* implicit */int) (signed char)-1)) + (23)))));
            arr_8 [i_0 - 1] [i_1] [(unsigned short)0] = ((/* implicit */signed char) arr_5 [i_0]);
        }
    }
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            {
                var_16 *= ((/* implicit */signed char) ((unsigned char) 4294967277U));
                arr_15 [i_2] [i_2] [(signed char)3] = ((((/* implicit */_Bool) ((min((1407399165), (((/* implicit */int) arr_2 [i_2])))) / (((/* implicit */int) var_2))))) ? (max((((/* implicit */unsigned int) (_Bool)1)), (min((((/* implicit */unsigned int) arr_14 [i_2] [i_3])), (19U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [(_Bool)1])) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) (!((_Bool)1))))))));
                var_17 = ((/* implicit */unsigned short) arr_1 [i_3]);
            }
        } 
    } 
}

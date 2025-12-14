/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53577
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
    var_12 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-90)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */int) var_7)) | (((/* implicit */int) var_4)))) : (((/* implicit */int) min(((signed char)-22), ((signed char)-1))))))));
    var_13 = ((/* implicit */_Bool) min(((signed char)-97), ((signed char)33)));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (((var_3) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_5))))))) ? (min((((((/* implicit */int) var_0)) | (((/* implicit */int) var_7)))), (((/* implicit */int) (signed char)-104)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)107)), (var_11)))) : (((((/* implicit */int) (signed char)97)) >> (((((/* implicit */int) var_1)) + (66)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 4; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */signed char) min((((/* implicit */int) max(((signed char)31), (((/* implicit */signed char) (!((_Bool)1))))))), (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned short)228)) : (((/* implicit */int) (signed char)-76)))) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_4 [i_0] [i_0] [i_1]))))))));
                    arr_10 [i_1] = (!(var_8));
                }
            } 
        } 
    } 
}

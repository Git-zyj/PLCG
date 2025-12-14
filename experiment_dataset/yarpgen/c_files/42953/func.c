/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42953
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
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_13 &= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_2 [i_1])) ? ((~(arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))))), (((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((((/* implicit */_Bool) (signed char)-96)) ? (arr_1 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_1])))))))));
                var_14 = ((/* implicit */unsigned int) (unsigned char)69);
                arr_5 [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)40146)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_3 [i_0])))), (((((/* implicit */_Bool) (unsigned short)40154)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) min(((unsigned short)25389), (((/* implicit */unsigned short) (short)-14169)))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) var_10);
    var_16 = ((/* implicit */signed char) (~(min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)0)) : (936062332))), (max((((/* implicit */int) var_8)), (var_10)))))));
    var_17 = ((/* implicit */unsigned char) var_10);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226739
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
    for (unsigned short i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) var_3);
                    var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) var_8)))), (((((/* implicit */int) (unsigned short)43808)) / (((/* implicit */int) (unsigned short)24622))))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)254))))) : (((((/* implicit */int) (unsigned short)40216)) | (((/* implicit */int) var_5)))))) : (((/* implicit */int) var_3))));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)15894))))) ? (((/* implicit */int) var_15)) : (((((/* implicit */_Bool) (unsigned short)56180)) ? (((/* implicit */int) (unsigned short)59465)) : (((/* implicit */int) (unsigned char)47))))))) ? ((~(((/* implicit */int) min((var_14), (arr_3 [i_0])))))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (((/* implicit */int) max((arr_0 [i_0] [i_1]), (((/* implicit */unsigned short) (unsigned char)114))))) : (((((/* implicit */_Bool) (unsigned short)31523)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)34013))))))));
                }
            } 
        } 
    } 
    var_20 += ((/* implicit */unsigned short) min((((/* implicit */int) var_16)), ((~(((/* implicit */int) (unsigned char)232))))));
    var_21 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)145)) : (((/* implicit */int) var_5)))), (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) var_15))))))) : (((((((/* implicit */_Bool) (unsigned short)10903)) && (((/* implicit */_Bool) var_7)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) var_15))))));
}

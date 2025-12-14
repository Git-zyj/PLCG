/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213650
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
    var_12 = ((/* implicit */unsigned short) ((((((((/* implicit */int) (unsigned char)249)) - (var_1))) / (var_1))) + (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)22999)) : (((/* implicit */int) var_11))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_6 [i_1] = max((((/* implicit */unsigned int) min((var_6), (((/* implicit */unsigned short) (unsigned char)0))))), (((unsigned int) max(((unsigned short)32131), (((/* implicit */unsigned short) arr_1 [i_0] [i_0]))))));
                var_13 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((unsigned short)65535), (((/* implicit */unsigned short) max((((/* implicit */unsigned char) var_9)), ((unsigned char)34))))))) ? (((/* implicit */int) min((var_8), (var_10)))) : (((/* implicit */int) (unsigned char)255))));
                var_14 = max((((/* implicit */unsigned int) (((!(var_9))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) == (((/* implicit */int) var_10))))) : (((/* implicit */int) arr_3 [i_0]))))), (((((/* implicit */unsigned int) arr_0 [i_1])) / (((((/* implicit */_Bool) (unsigned char)227)) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
            }
        } 
    } 
}

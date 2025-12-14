/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32368
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
    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_16))));
    var_20 |= ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) (unsigned short)31051))))) ? (((/* implicit */int) (unsigned short)65516)) : (((/* implicit */int) ((unsigned char) var_5)))))));
    var_21 = ((/* implicit */unsigned char) var_11);
    var_22 = max((4111612867U), (((/* implicit */unsigned int) (signed char)-94)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_8 [(short)4] &= ((/* implicit */unsigned long long int) var_7);
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        arr_12 [i_1] [i_1] = ((/* implicit */long long int) ((unsigned int) var_4));
                        arr_13 [i_3] [i_1] [i_1] [(unsigned short)11] = ((/* implicit */unsigned int) var_18);
                        arr_14 [i_0] [i_1] [i_2] [i_0] [i_2] [i_3] = ((/* implicit */unsigned short) ((long long int) (signed char)27));
                    }
                    for (short i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        arr_18 [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) max((3707403552U), (((/* implicit */unsigned int) (unsigned short)31070)))));
                        arr_19 [i_0] [i_1] [i_2] [15U] = ((/* implicit */long long int) ((short) min(((-(((/* implicit */int) (unsigned short)29)))), (((/* implicit */int) (unsigned short)51822)))));
                        arr_20 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3))) : (2607735231U))))));
                    }
                }
            } 
        } 
    } 
}

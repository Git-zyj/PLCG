/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209414
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
    var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_10)) >> (((var_8) - (2262968948U)))))) ? (((((/* implicit */int) (unsigned char)255)) >> (((var_17) - (14339727087780273106ULL))))) : (((/* implicit */int) var_0)))) >> (((((/* implicit */int) var_13)) - (24415)))));
    var_21 = ((/* implicit */unsigned short) ((((((((/* implicit */int) var_19)) >> (((((/* implicit */int) var_10)) - (114))))) >> (((/* implicit */int) (unsigned char)24)))) >> (((((/* implicit */int) (unsigned char)204)) - (191)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_6 [11U] = ((/* implicit */unsigned char) ((((((((/* implicit */int) var_5)) >> (((var_1) - (1419655898U))))) >> (((var_18) - (408602901936946349ULL))))) >> ((((-(((/* implicit */int) ((unsigned short) var_0))))) + (48748)))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) ((((((unsigned int) (unsigned char)116)) >> (((((/* implicit */int) max(((unsigned short)51271), (((/* implicit */unsigned short) (signed char)-26))))) - (65488))))) >> (((((((/* implicit */_Bool) ((var_6) >> (((/* implicit */int) var_15))))) ? (((var_8) >> (((((/* implicit */int) var_0)) - (48714))))) : (max((((/* implicit */unsigned int) var_15)), (var_8))))) - (34512U)))));
                            var_23 = ((/* implicit */unsigned long long int) var_16);
                            var_24 = ((/* implicit */unsigned int) ((unsigned long long int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_12)))) >> (((((/* implicit */int) (unsigned char)175)) - (151))))));
                        }
                    } 
                } 
            }
        } 
    } 
}

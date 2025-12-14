/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226675
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
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */int) var_11)) ^ (((((/* implicit */_Bool) -1640997159)) ? (((/* implicit */int) (unsigned char)110)) : (((/* implicit */int) (unsigned char)139)))))))));
    var_16 += ((/* implicit */int) (unsigned char)134);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 6; i_1 += 1) 
        {
            {
                var_17 -= (((_Bool)1) ? (((/* implicit */int) (unsigned char)145)) : (((/* implicit */int) (unsigned char)113)));
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 7; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((int) (unsigned char)146))))) ? (var_5) : (var_7)));
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (2097152) : (((/* implicit */int) arr_6 [i_2] [i_3]))))) - (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (var_4)))))) ? (max((((/* implicit */int) (unsigned char)32)), (1523506186))) : ((+(((/* implicit */int) (unsigned char)126))))));
                                arr_13 [i_0] [i_1 + 2] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_6);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */int) max((var_19), ((+((((-(((/* implicit */int) var_13)))) / (max((var_7), (var_5)))))))));
}

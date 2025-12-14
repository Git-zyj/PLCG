/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/472
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
    var_15 = ((/* implicit */_Bool) 194462180U);
    var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)61306))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */signed char) (-(max((((((/* implicit */int) var_1)) >> (((var_7) + (1899605960))))), (((/* implicit */int) arr_6 [i_2] [i_2] [i_2 - 1] [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((min((((/* implicit */long long int) (signed char)18)), (8333722876149288598LL))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [(unsigned short)15] [i_1])) ? (((/* implicit */int) (short)-27130)) : (((/* implicit */int) (unsigned short)36857)))))))) * (((/* implicit */int) ((short) var_13)))));
                                arr_12 [i_0] [i_2] [i_2] [i_3 + 1] [i_3 + 1] [i_4] = ((/* implicit */unsigned char) 281474976710655LL);
                                arr_13 [i_0] [i_2] [i_2] = (~(((/* implicit */int) (_Bool)1)));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) max((2697269918U), (((/* implicit */unsigned int) var_2))))) : (((((/* implicit */_Bool) 4120269932U)) ? (var_3) : (((/* implicit */unsigned long long int) arr_2 [i_0]))))))) ? (((unsigned int) min((var_2), (((/* implicit */int) (short)11458))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)36838)) && (((/* implicit */_Bool) var_7))))))));
                    arr_14 [i_2] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)58735))))) : (((((/* implicit */_Bool) var_9)) ? (var_6) : (var_6)))))), ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (var_3)))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (+(var_7)));
}

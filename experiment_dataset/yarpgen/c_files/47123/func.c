/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47123
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_7))))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (unsigned char)240)))) : ((+(var_17)))))) | ((+((+(var_5)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_4)))) / (((((/* implicit */_Bool) var_17)) ? (17905754753320789761ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
                                var_23 = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) (unsigned char)22)) ? (4075214316U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-22697))))) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63397))))), (min((((/* implicit */unsigned int) (unsigned char)255)), (6U)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_18)))) ? (((var_9) | (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))) ? (((((/* implicit */_Bool) ((1256081275U) >> (((((/* implicit */int) (unsigned char)211)) - (208)))))) ? (((((/* implicit */_Bool) 6U)) ? (6U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)221))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)85))))) : (var_4)));
}

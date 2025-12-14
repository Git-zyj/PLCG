/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31322
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
    var_11 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned char)220)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (max((var_9), (((/* implicit */unsigned int) var_6)))))), (((/* implicit */unsigned int) var_4))));
    var_12 = ((/* implicit */_Bool) var_10);
    var_13 = ((/* implicit */unsigned int) var_1);
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)35)) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) (short)10229))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_2)))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_7))) + (var_1))) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_15 += ((/* implicit */short) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */int) (short)-32756)) : (((/* implicit */int) (unsigned char)131))))) : (((var_3) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_16 *= ((/* implicit */_Bool) max(((signed char)33), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)3)) >= (((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */int) (unsigned char)175)) : (((/* implicit */int) (unsigned char)179)))))))));
                                var_17 += ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))) == (max((((/* implicit */unsigned int) var_7)), (var_9)))));
                                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((unsigned char) var_7)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

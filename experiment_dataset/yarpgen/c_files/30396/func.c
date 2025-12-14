/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30396
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-23)), (0U)))) ? (((((/* implicit */_Bool) (signed char)-77)) ? (20U) : (((/* implicit */unsigned int) -13274354)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) var_15)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -13274354)) ? (((/* implicit */unsigned int) 13274365)) : (845848493U)))))))) : (var_7)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 22; i_2 += 4) 
            {
                {
                    var_17 &= ((/* implicit */signed char) var_4);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [17LL] [i_0] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)35449)) || (((/* implicit */_Bool) (short)-1)))))))));
                                var_18 = ((/* implicit */unsigned int) (short)0);
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)789)) - (((/* implicit */int) var_8))))) ? (((((/* implicit */long long int) var_6)) & (var_11))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_4)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) min((var_21), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) >> (((2227769701756760942ULL) - (2227769701756760923ULL)))))) ? (((((/* implicit */_Bool) (short)-7)) ? (((/* implicit */int) (signed char)-38)) : (((/* implicit */int) var_8)))) : ((-(((/* implicit */int) var_5))))))) || (((/* implicit */_Bool) var_3))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41250
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
    var_11 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
    var_12 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) var_4)))))))) * (max((((/* implicit */int) min((var_2), (var_2)))), ((~(((/* implicit */int) var_8))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_13 &= ((/* implicit */int) (~(min((max((((/* implicit */long long int) (short)0)), (5996707297767991505LL))), (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)5250)) : (((/* implicit */int) (unsigned char)198)))))))));
                var_14 -= ((/* implicit */short) max((((((/* implicit */_Bool) 96877981)) ? (((/* implicit */int) (unsigned char)216)) : (68744062))), (((/* implicit */int) ((var_1) == (((/* implicit */unsigned long long int) arr_2 [i_1] [i_0])))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            arr_10 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (arr_6 [i_3]) : (((/* implicit */int) (signed char)-87))))), (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)3072))))) & (var_1)))));
                            arr_11 [i_1] [i_2] [i_2] [(unsigned char)1] [i_0] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2ULL))))), (min(((unsigned char)40), ((unsigned char)253)))));
                            var_15 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1739976800U)) ? ((-(((/* implicit */int) (short)-32741)))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) (unsigned char)40))))));
                            var_16 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)216))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) min((min((1426003687U), (1739976802U))), ((~(var_3))))))));
}

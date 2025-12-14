/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193390
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) ((var_9) - (7010434931167688379LL)))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_2), (((/* implicit */signed char) var_13)))))) : (((7010434931167688381LL) + (((/* implicit */long long int) 50923722U))))))))));
                                arr_14 [i_3] [(short)2] [(short)2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) (+(4244043573U)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        for (signed char i_6 = 2; i_6 < 10; i_6 += 4) 
                        {
                            {
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((max((max((((/* implicit */unsigned int) 1392859391)), (4244043574U))), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)167)) && (((/* implicit */_Bool) (short)146)))))));
                                var_20 = ((/* implicit */int) (((-(4294967272U))) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) ((var_18) != (((/* implicit */long long int) ((/* implicit */int) var_8)))))) : (((/* implicit */int) ((unsigned char) (unsigned char)89)))))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) var_5)) + (2147483647))) << (((((/* implicit */int) var_0)) - (154)))))) : (((((4294967249U) << (((8589934528LL) - (8589934507LL))))) / (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)144), (((/* implicit */unsigned char) var_11))))))))));
    var_22 = ((/* implicit */int) var_2);
}

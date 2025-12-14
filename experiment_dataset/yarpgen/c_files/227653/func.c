/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227653
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~((+(((/* implicit */int) (_Bool)0))))))) - (((((((/* implicit */_Bool) (unsigned char)240)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) / (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_15 = ((18446744073709551615ULL) == (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_3))))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_16 -= ((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) (!((_Bool)1))))))), (max((((var_12) ? (4494803534348288LL) : (((/* implicit */long long int) 1442846056U)))), (((/* implicit */long long int) ((signed char) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)107)) ? (var_11) : (((/* implicit */unsigned long long int) 2852121240U)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((-590090903052089824LL) == (((/* implicit */long long int) 3692347284U))))))));
                                arr_14 [i_1] [i_1] [i_0] [i_2] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (var_10)))) << (((/* implicit */int) ((2852121239U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1)))))))));
                                var_17 = ((/* implicit */unsigned short) max((max((var_9), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65533)) != (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    var_18 += ((/* implicit */unsigned int) ((((/* implicit */int) ((-1254887244) >= (((/* implicit */int) ((short) var_2)))))) + (((/* implicit */int) (unsigned short)1))));
                }
                var_19 = (_Bool)1;
                arr_15 [i_0] = var_11;
            }
        } 
    } 
}

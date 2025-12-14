/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213417
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
    var_14 = ((/* implicit */unsigned long long int) var_11);
    var_15 = ((/* implicit */unsigned char) ((((((/* implicit */int) max(((unsigned char)179), (((/* implicit */unsigned char) var_10))))) > (0))) ? (((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */_Bool) 13803372649297787770ULL);
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (short)-3954)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)70))) : (3830171903U))) : (((/* implicit */unsigned int) var_6)))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((((/* implicit */int) arr_11 [(unsigned short)1] [i_1] [i_2 - 1] [i_3] [(unsigned short)1])), (var_6)))) ? (((((/* implicit */_Bool) var_11)) ? (4328124687053941453LL) : (((/* implicit */long long int) 1312118864U)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967273U)))))))) | (((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-10368)), (4294967273U))))));
                                arr_14 [i_1] = ((/* implicit */_Bool) var_6);
                                var_19 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((/* implicit */int) max(((short)-17749), (((/* implicit */short) arr_10 [i_0] [10U] [i_2 + 2] [1ULL] [10ULL]))))) : (((/* implicit */int) var_3))))));
                                var_20 *= ((/* implicit */signed char) min(((+(((unsigned long long int) 4294967264U)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4294967273U)))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_1] [i_1] = ((/* implicit */short) arr_9 [i_0] [i_0] [i_1]);
                var_21 ^= max(((-(1655188113U))), ((~(((4294967273U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(signed char)2] [i_1] [i_0] [8ULL] [i_0]))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) max((var_9), (var_13)));
}

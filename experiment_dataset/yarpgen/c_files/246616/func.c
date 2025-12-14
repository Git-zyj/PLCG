/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246616
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
    var_12 = ((/* implicit */signed char) var_3);
    var_13 = ((/* implicit */unsigned long long int) ((var_9) ^ (var_7)));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                arr_4 [i_0 - 1] = ((/* implicit */int) (((+(7218869410051278280ULL))) != (((((/* implicit */_Bool) -8561035285359722816LL)) ? (7218869410051278260ULL) : (((/* implicit */unsigned long long int) var_2))))));
                arr_5 [i_0] = ((/* implicit */short) 0U);
                arr_6 [i_0] [i_0] = 141393336;
                /* LoopSeq 2 */
                for (int i_2 = 1; i_2 < 22; i_2 += 3) /* same iter space */
                {
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) 8561035285359722808LL);
                    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((var_7) + (9223372036854775807LL))) >> (((7218869410051278280ULL) - (7218869410051278280ULL))))))));
                    var_15 = ((/* implicit */unsigned short) ((short) 19ULL));
                    var_16 = ((/* implicit */unsigned long long int) (unsigned char)7);
                }
                for (int i_3 = 1; i_3 < 22; i_3 += 3) /* same iter space */
                {
                    var_17 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(524287)))) ? (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned int) -141393337))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)20200))))) ? (((((/* implicit */unsigned long long int) -1337532070)) % (11227874663658273336ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (_Bool)1))))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 2; i_4 < 22; i_4 += 1) 
                    {
                        arr_16 [i_0] [i_1 + 2] [i_0 - 1] [i_3] = ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) (_Bool)1)))));
                        arr_17 [i_3] [i_1] [i_3] [13ULL] [i_4] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)24)) / (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_2)) < (-4234264729322625848LL))))) : ((~(var_7))))) & (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)59)))))));
                        var_18 = ((/* implicit */unsigned short) (-((-((~(4294967295U)))))));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        arr_20 [i_3] [i_1] [i_3 - 1] [i_5 - 1] = ((/* implicit */short) (~((-(18446744073709551615ULL)))));
                        var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                    }
                    var_20 ^= ((/* implicit */unsigned int) (~(max((((/* implicit */int) (unsigned char)98)), (((((var_2) + (2147483647))) << (((8561035285359722808LL) - (8561035285359722808LL)))))))));
                    var_21 = ((/* implicit */int) min((((((/* implicit */_Bool) 524287)) ? (((var_10) >> (((11227874663658273342ULL) - (11227874663658273315ULL))))) : (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)115)), (var_11)))))), (((/* implicit */unsigned int) ((((-141393336) + (2147483647))) << (((1347028873U) - (1347028873U))))))));
                }
            }
        } 
    } 
}

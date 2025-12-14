/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222333
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
    var_18 = ((/* implicit */_Bool) ((unsigned short) 10656038986967704758ULL));
    var_19 = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((1131116168332707439ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1)))))), (((/* implicit */unsigned int) var_5))));
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_15))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_21 += ((/* implicit */unsigned int) arr_4 [i_1] [i_0] [i_0]);
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0 - 3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) var_7));
                                arr_15 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_3 + 1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_16))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)6726)) - (((/* implicit */int) (unsigned short)65535))))) : ((-(arr_12 [i_1] [(unsigned char)9])))));
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -1699725075166196746LL)), (max((((/* implicit */unsigned long long int) -1699725075166196746LL)), (1131116168332707439ULL)))))) ? (((((/* implicit */_Bool) var_3)) ? ((~(1ULL))) : (max((((/* implicit */unsigned long long int) var_14)), (arr_8 [i_0] [i_0] [10] [i_1]))))) : (((/* implicit */unsigned long long int) min((arr_3 [i_3] [i_3 - 1]), (arr_3 [i_3] [i_3 - 1])))))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned int) ((unsigned long long int) ((var_2) ? (arr_12 [i_1] [i_0 - 3]) : (arr_12 [i_0 - 3] [i_0 - 3]))));
                }
                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)43995))))), (var_1))))));
            }
        } 
    } 
}

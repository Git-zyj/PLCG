/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228476
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
    var_10 = ((var_9) < (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0)))), (((/* implicit */int) var_8))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) arr_0 [i_0]))));
        var_12 = ((/* implicit */signed char) ((unsigned int) min((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1]))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 23; i_3 += 1) 
                    {
                        for (short i_4 = 3; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */int) max(((+(((var_5) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_3]))))), (-8154431910873575325LL)));
                                var_14 |= ((/* implicit */int) (~(((((/* implicit */_Bool) arr_9 [i_4] [i_3] [i_1] [i_1])) ? (arr_6 [(unsigned char)6]) : ((~(9223336852482686976LL)))))));
                                var_15 ^= ((/* implicit */signed char) ((unsigned char) -8154431910873575325LL));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) min((max((((/* implicit */long long int) min((((/* implicit */unsigned int) var_7)), (var_9)))), (((((/* implicit */_Bool) (unsigned short)45858)) ? (((/* implicit */long long int) arr_10 [i_0] [i_0] [i_1] [i_2] [21] [i_2])) : (-8154431910873575325LL))))), (2137300418417266153LL)));
                    /* LoopNest 2 */
                    for (long long int i_5 = 3; i_5 < 21; i_5 += 4) 
                    {
                        for (long long int i_6 = 2; i_6 < 24; i_6 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_1] [(_Bool)1] [i_5] [(unsigned char)24] |= ((/* implicit */unsigned int) min((min((arr_1 [i_5 + 2]), (arr_1 [i_0 - 1]))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_14 [i_0] [i_0])) <= (arr_15 [i_5] [i_5] [i_5] [i_5] [i_6])))) == (((((/* implicit */int) (signed char)7)) << (((-8154431910873575345LL) + (8154431910873575350LL))))))))));
                                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) 12334531)) ? (2137300418417266153LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}

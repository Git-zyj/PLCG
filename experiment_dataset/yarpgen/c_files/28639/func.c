/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28639
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
    var_13 = ((/* implicit */signed char) max((var_13), (var_9)));
    var_14 &= ((/* implicit */_Bool) var_6);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) min((var_1), (arr_3 [i_1 - 1]))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    var_15 = ((/* implicit */unsigned int) min(((+(var_12))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0 + 1])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_1 + 2] [i_2] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_4 [i_3])) & (((var_7) & (arr_10 [(short)7] [i_1] [i_2] [i_2] [i_3] [i_4])))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 - 2] [i_1 - 2] [i_1 + 2]))) & (max((((/* implicit */long long int) -2147483637)), (var_7))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))));
                                var_16 *= ((/* implicit */unsigned long long int) ((_Bool) ((unsigned long long int) ((var_5) / (3339181853U)))));
                                var_17 = ((/* implicit */unsigned char) var_5);
                            }
                        } 
                    } 
                    arr_15 [i_2] = ((/* implicit */_Bool) 3339181854U);
                }
                var_18 ^= ((/* implicit */short) ((((/* implicit */int) arr_11 [i_1 - 1] [(_Bool)1] [15ULL] [i_0] [i_0 + 2])) < (((/* implicit */int) (signed char)127))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((unsigned int) var_10)))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        for (long long int i_7 = 3; i_7 < 16; i_7 += 3) 
                        {
                            {
                                arr_25 [i_7 + 1] [i_6] [i_1] [i_5] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_10);
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-1))))) ? (((((/* implicit */unsigned long long int) var_6)) % (var_12))) : (((/* implicit */unsigned long long int) (~(arr_2 [i_0 + 1]))))))));
                                var_21 |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3170406973426141878LL)) ? (955785437U) : (1665251242U)))) | (((var_12) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46320)))))));
                            }
                        } 
                    } 
                }
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_29 [i_0] [i_0 - 1] = ((/* implicit */unsigned char) ((((var_7) & (arr_10 [i_0] [i_0 - 2] [i_0] [i_0 + 2] [i_1] [i_1 - 2]))) + (var_7)));
                    var_22 |= ((/* implicit */short) min((((/* implicit */unsigned int) var_1)), (((((/* implicit */unsigned int) arr_7 [i_0 + 1] [i_8] [5LL] [i_8])) * (var_2)))));
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (~(2629716053U))))));
                    arr_30 [i_0 + 1] [i_1] [i_8] [i_8] = ((/* implicit */unsigned char) ((_Bool) (signed char)0));
                    var_24 = ((/* implicit */int) max((((unsigned int) -667093824)), (arr_24 [i_0 + 1] [i_1] [i_0] [i_1])));
                }
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) var_8);
}

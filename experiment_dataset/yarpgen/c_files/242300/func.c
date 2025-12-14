/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242300
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) (signed char)-125)))))));
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 13712979985310551509ULL))));
    }
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        for (unsigned char i_2 = 1; i_2 < 8; i_2 += 3) 
        {
            {
                arr_6 [i_1] [i_2 - 1] [i_1] |= ((/* implicit */unsigned int) var_1);
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 3; i_4 < 8; i_4 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
                            {
                                arr_16 [i_1] [i_2] [i_3] [i_2] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_1])) ? ((+(((((/* implicit */_Bool) 13712979985310551516ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_13 [(signed char)4] [(signed char)4] [i_3] [i_4] [i_4] [i_5]))))) : (((/* implicit */unsigned long long int) (-((~(var_6))))))));
                                arr_17 [i_2] [i_4 - 3] [i_3] [i_1] [i_5] [i_2] [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((arr_5 [i_4 - 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */int) (signed char)104)) - (((/* implicit */int) arr_10 [i_1] [i_3] [i_4 + 1] [i_5])))) : (((/* implicit */int) arr_3 [i_3]))))));
                            }
                            for (unsigned long long int i_6 = 3; i_6 < 7; i_6 += 2) 
                            {
                                var_20 *= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) arr_19 [i_3] [2ULL] [i_1] [i_3] [i_3] [i_3] [i_3]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)120)) * (((/* implicit */int) (signed char)-120))))) : (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
                                var_21 ^= ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-126))));
                                arr_20 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((unsigned int) max((arr_2 [i_1]), (((/* implicit */unsigned long long int) var_8)))));
                                arr_21 [(signed char)2] [i_6] [i_6 - 1] [i_2] [i_6] [i_6 + 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_14 [i_6] [i_4] [i_1] [i_1] [i_1] [i_1] [i_1])))) ? (((/* implicit */int) arr_7 [i_1] [i_3] [i_4 - 2] [i_6 + 1])) : (((((((/* implicit */_Bool) arr_7 [i_2] [i_3] [i_4 + 1] [i_6 + 2])) && (((/* implicit */_Bool) arr_2 [i_1])))) ? ((+(((/* implicit */int) (unsigned char)0)))) : (arr_18 [i_2] [i_6 - 3] [i_6] [(signed char)2] [i_6])))));
                                arr_22 [i_2] [i_3] = ((/* implicit */unsigned long long int) arr_4 [i_1] [i_2] [i_2]);
                            }
                            var_22 = ((/* implicit */unsigned char) min((var_22), (var_0)));
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_3))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1] [i_2] [i_2 - 1])))))));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231080
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
    var_13 = var_3;
    var_14 = min((((((/* implicit */_Bool) ((((/* implicit */int) (short)7168)) - (((/* implicit */int) (short)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (min((((/* implicit */unsigned int) 1628230926)), (2456033606U))))), (((/* implicit */unsigned int) var_11)));
    var_15 = ((/* implicit */long long int) (+(min((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (var_4)))))));
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_4))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 11; i_2 += 2) 
                {
                    var_17 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 18446744073709551609ULL)))) ? (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) -4113402297564392LL)) : (arr_3 [i_2 - 1] [i_0]))), (((/* implicit */unsigned long long int) ((arr_2 [i_0] [2LL]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0] [i_2])))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_4 [i_2 + 1] [i_2 - 1] [i_2 + 2] [i_2 + 2]))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        arr_8 [i_2] = ((/* implicit */short) var_4);
                        var_18 = ((/* implicit */_Bool) arr_4 [i_2 + 1] [i_1] [i_1] [10ULL]);
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_8)))))))));
                        arr_9 [i_3] [i_2 + 1] [i_2 + 1] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_2 + 2] [i_2] [i_2 + 1] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((~(((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) var_0)))))) : (min((((/* implicit */unsigned long long int) (+(-593273167)))), (min((0ULL), (var_10)))))));
                        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 1]))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_12 [i_0] [i_1] [i_1] [(unsigned char)4] [i_2 - 1] [i_4] = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [(unsigned char)6]);
                        arr_13 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0] [i_0]))));
                    }
                    for (int i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        arr_16 [i_0] [i_2] [i_5] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_0))))) ? (((unsigned int) (short)12178)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))));
                        arr_17 [i_0] [i_1] [i_1] [0] [i_5] = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) ((/* implicit */int) var_1))) + (arr_5 [8LL] [8LL] [i_2])))))) : (min((min((30ULL), (((/* implicit */unsigned long long int) var_0)))), (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_10))))));
                        arr_18 [i_0] [(unsigned char)6] [(unsigned char)6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-122)) + (((/* implicit */int) (unsigned char)213))))) ? (((/* implicit */int) (unsigned char)232)) : ((-(((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_2] [i_2 + 1])))) : (((((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_5])) || (((/* implicit */_Bool) arr_2 [i_1] [i_2])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
                    }
                }
                arr_19 [i_0] [i_1] = ((/* implicit */unsigned char) var_3);
            }
        } 
    } 
}

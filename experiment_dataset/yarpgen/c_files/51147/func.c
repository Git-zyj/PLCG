/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51147
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
    var_16 |= ((/* implicit */unsigned short) var_0);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) var_12))))))));
                var_18 &= ((/* implicit */int) (~(max((((/* implicit */long long int) arr_0 [i_0] [i_1])), (var_4)))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((((/* implicit */int) var_15)), (arr_3 [i_0] [i_1] [i_2]))), (((/* implicit */int) min((((/* implicit */unsigned char) var_2)), (var_1))))))) ? (max((max((((/* implicit */unsigned long long int) -1598428716927553481LL)), (10436611179515349660ULL))), (((arr_0 [i_1] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : (var_10))))) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (8010132894194201962ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))));
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_4))));
                    var_21 = ((/* implicit */long long int) max((var_14), (((((/* implicit */_Bool) (signed char)60)) ? (8010132894194201953ULL) : (((/* implicit */unsigned long long int) 9223372036854775789LL))))));
                    var_22 -= ((/* implicit */unsigned short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) 328767798)))))), (((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_2] [i_1]), (arr_1 [i_1] [i_0])))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_23 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [14LL] [i_0] [i_3] [i_1] [i_3] [i_4])) ? ((~((-(var_6))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_0 [i_3] [i_4])), (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) var_11)) ? (var_11) : (var_13))))))));
                                var_24 = ((/* implicit */unsigned long long int) min(((~(min((var_0), (((/* implicit */long long int) var_5)))))), (((/* implicit */long long int) ((unsigned char) min(((signed char)-60), ((signed char)33)))))));
                                var_25 ^= ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [(unsigned char)16]))))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                            }
                        } 
                    } 
                }
                for (int i_5 = 1; i_5 < 19; i_5 += 3) 
                {
                    arr_14 [i_5] = ((/* implicit */unsigned long long int) arr_13 [i_1] [i_5]);
                    var_26 = min((var_5), (((/* implicit */int) var_7)));
                    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 2176926025U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3072))) : (204426057U))))));
                }
            }
        } 
    } 
}

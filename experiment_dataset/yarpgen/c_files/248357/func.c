/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248357
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
    var_12 = ((/* implicit */unsigned int) ((unsigned short) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) var_10)) : ((-2147483647 - 1)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        var_13 += ((/* implicit */long long int) var_5);
                        var_14 = ((((/* implicit */int) var_5)) + (((/* implicit */int) (!(((/* implicit */_Bool) 2047611559))))));
                        arr_9 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_1] [4]))));
                        var_15 &= ((/* implicit */short) arr_3 [i_2]);
                    }
                    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        var_16 += ((/* implicit */unsigned short) arr_1 [i_2]);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_5 = 2; i_5 < 9; i_5 += 2) 
                        {
                            var_17 = var_2;
                            var_18 = (!(((/* implicit */_Bool) arr_12 [i_0] [i_1] [10ULL] [i_0] [11])));
                            var_19 ^= ((/* implicit */short) (~(((((/* implicit */_Bool) var_4)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                        }
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 12; i_6 += 4) 
                        {
                            var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3104007819173597482ULL)) && (((/* implicit */_Bool) 2047611559))));
                            arr_19 [i_0] = ((/* implicit */long long int) (-((+(((/* implicit */int) (unsigned short)22603))))));
                            arr_20 [i_0] [10ULL] [i_4] [4LL] [i_4] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_6)))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            var_21 += ((/* implicit */int) ((unsigned short) (unsigned short)22603));
                            var_22 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) min(((unsigned short)22603), (((/* implicit */unsigned short) arr_17 [i_0] [i_0] [2U]))))) ? (max((127), (var_2))) : (max((127), (((/* implicit */int) (unsigned short)21930)))))));
                            var_23 = ((/* implicit */signed char) (unsigned short)22591);
                        }
                    }
                    var_24 += ((max(((+(15342736254535954141ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3758096384U))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))));
                }
            } 
        } 
    } 
    var_25 = var_0;
    var_26 = ((/* implicit */unsigned long long int) (unsigned short)37900);
    var_27 = ((/* implicit */unsigned short) var_5);
}

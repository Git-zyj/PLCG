/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32550
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
    var_13 &= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((unsigned short) ((signed char) (unsigned short)0)))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (((/* implicit */_Bool) var_6))))), (var_4)))));
    var_14 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) var_9);
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                for (signed char i_3 = 2; i_3 < 20; i_3 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3])) ? (max((var_4), (((/* implicit */unsigned long long int) (unsigned short)5)))) : (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */long long int) var_0)))))))) ? (((((/* implicit */_Bool) ((long long int) arr_1 [i_0] [7LL]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2] [i_3] [i_4]))) : (var_3))) : (((/* implicit */long long int) (((+(((/* implicit */int) (unsigned short)35541)))) - (-835597618)))))))));
                            var_16 = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_13 [i_0 + 2] [i_1 + 3] [i_3 + 1] [i_4] [i_4])))) > (((/* implicit */int) ((unsigned short) var_0)))));
                        }
                        arr_15 [i_0] [i_1] [i_3] [i_3] &= ((/* implicit */long long int) var_8);
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 1; i_5 < 20; i_5 += 4) 
                        {
                            arr_19 [i_0] [0ULL] [i_2] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((arr_8 [i_1] [i_2 + 2]) < (arr_2 [i_3 - 2])));
                            arr_20 [10] [i_1 - 1] [i_2 + 3] [i_2 + 3] [i_3] [i_5] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 + 3])) ? (arr_3 [i_2 + 3]) : (var_4)))) ? (((/* implicit */unsigned long long int) arr_11 [i_0] [i_5 + 1])) : (var_7)));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 2) 
                        {
                            var_17 *= ((/* implicit */unsigned int) arr_7 [i_3] [i_3] [i_6]);
                            arr_24 [i_0] [i_1] [i_1] [i_3] [i_0] = ((/* implicit */unsigned short) ((var_2) >> (((arr_11 [i_2 + 2] [i_0 + 2]) + (3879748321365904811LL)))));
                        }
                        arr_25 [(unsigned short)4] [i_1] [i_2 + 2] [i_1] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5)))) - (((/* implicit */int) arr_1 [i_3] [i_1])))) == (((/* implicit */int) (((-9223372036854775807LL - 1LL)) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)235))))))));
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */long long int) var_9);
}

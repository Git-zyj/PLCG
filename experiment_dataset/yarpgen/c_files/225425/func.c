/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225425
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_18 = arr_3 [1LL];
                arr_6 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) (unsigned short)255)) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))))));
                arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [(_Bool)1])) ? (((long long int) arr_1 [i_1] [i_0])) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
                            {
                                arr_16 [i_4] [i_3] [i_2] [i_2] [i_1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_0]))) ? (((/* implicit */unsigned long long int) ((long long int) ((signed char) arr_15 [i_0])))) : ((+(((((/* implicit */_Bool) arr_5 [i_0])) ? (15803542827183714759ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))))));
                                arr_17 [i_4] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */int) arr_13 [i_3] [(short)7])), (max((arr_3 [i_0]), (((/* implicit */int) arr_1 [i_2] [i_3]))))));
                                arr_18 [8] [i_4] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) ((unsigned long long int) (+(((/* implicit */int) arr_11 [i_1])))));
                            }
                            for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) 
                            {
                                var_19 = ((/* implicit */int) arr_4 [i_5] [i_2] [(short)15]);
                                var_20 = 15803542827183714765ULL;
                            }
                            var_21 *= ((/* implicit */short) (~(min((((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_0] [i_0] [i_3]))))), (((((/* implicit */_Bool) arr_21 [i_3] [12ULL] [14ULL] [i_1] [i_0] [8LL])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */short) var_13);
}

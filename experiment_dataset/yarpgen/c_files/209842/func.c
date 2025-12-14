/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209842
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
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            {
                arr_6 [i_0 + 3] [i_0 + 3] [(unsigned short)2] = ((/* implicit */unsigned int) ((min((max((7906622530627746245ULL), (((/* implicit */unsigned long long int) -2147483636)))), (((/* implicit */unsigned long long int) -2114349376)))) << (((min(((~(((/* implicit */int) (short)16156)))), (((/* implicit */int) ((_Bool) arr_3 [i_0] [i_1]))))) + (16169)))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (short i_4 = 0; i_4 < 12; i_4 += 1) 
                            {
                                arr_14 [i_3] [i_1 - 1] [i_3] [i_4] [i_4] [i_4] [i_3] = ((/* implicit */unsigned long long int) 9223372036854775784LL);
                                var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((unsigned int) var_9)))));
                                var_12 *= (short)-16156;
                                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-16157))) : (arr_2 [i_0 - 2] [i_2])))) ? (10540121543081805371ULL) : (((/* implicit */unsigned long long int) -5068775684681659113LL))));
                            }
                            for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                            {
                                arr_17 [i_0] [i_1] [i_2] [(short)0] [i_5] = ((/* implicit */short) ((arr_0 [(unsigned char)1]) ? (((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_0 - 1] [i_1] [i_2] [i_5] [i_1 - 3] [i_1])) ^ (((/* implicit */int) arr_10 [i_0] [i_0] [i_0 - 2] [i_0] [i_0 + 3] [i_0]))))) : (((((/* implicit */_Bool) arr_2 [i_3] [(short)6])) ? (((/* implicit */long long int) ((int) arr_0 [i_0]))) : (arr_3 [i_0 + 1] [i_1 - 3])))));
                                var_14 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 + 3] [i_0 + 3] [i_1 - 2] [i_1 - 3] [i_1]))) / (max((((/* implicit */unsigned long long int) (((_Bool)0) ? ((-9223372036854775807LL - 1LL)) : (1950718226124453099LL)))), (10540121543081805354ULL)))));
                                var_15 = arr_5 [(unsigned short)2];
                            }
                            arr_18 [i_1 + 1] [i_1 + 1] [i_1 + 1] = ((/* implicit */unsigned short) arr_16 [i_0] [i_1] [i_2] [i_2] [i_0] [i_3]);
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) 5068775684681659097LL))));
                            var_17 = ((/* implicit */short) min((var_17), (((short) var_2))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_8);
}

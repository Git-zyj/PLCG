/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231110
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
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                            {
                                var_16 &= ((/* implicit */short) ((arr_11 [i_0] [i_1 + 1] [6LL] [i_3]) > (((/* implicit */unsigned long long int) var_5))));
                                var_17 = ((/* implicit */int) ((long long int) ((((/* implicit */int) arr_3 [i_0])) >= (((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_3] [(unsigned short)5])))));
                            }
                            arr_16 [i_1] [i_1 + 2] [i_2] [(unsigned short)6] = ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */_Bool) arr_11 [i_1 - 1] [(signed char)0] [i_1 + 1] [i_2])) ? (arr_11 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1]) : (arr_11 [i_1 + 1] [i_1] [i_1 + 1] [i_3]))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 7ULL)) ? (602623314) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_2] [(unsigned short)18] [i_3]))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */_Bool) (short)27678);
                    var_19 = ((/* implicit */int) max((((/* implicit */long long int) ((var_4) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_1])) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_5] [i_1])) : (((/* implicit */int) arr_18 [i_1] [i_1]))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1])))))))), (((long long int) var_12))));
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (short)27688))) ? (min((18446744073709551595ULL), (((/* implicit */unsigned long long int) arr_1 [i_1 + 2])))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)127)), (624883259U))))));
                    arr_19 [i_0] [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_5])) : (((/* implicit */int) arr_9 [i_1] [i_1 - 1] [i_1 + 1] [i_5]))))));
                }
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((_Bool) (unsigned char)255)) ? (((var_7) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_3))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 + 2]))))))));
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_0 [i_1 + 2] [i_1 + 2])) : (((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 2]))));
                    arr_24 [(_Bool)0] [i_1] [i_1] = ((/* implicit */_Bool) -3327822289927719631LL);
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        for (long long int i_8 = 0; i_8 < 25; i_8 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) (short)-32759);
                                var_24 *= ((/* implicit */unsigned long long int) ((short) arr_28 [i_0] [i_1 + 2] [i_6] [i_8] [i_8] [i_7]));
                            }
                        } 
                    } 
                }
                var_25 = ((/* implicit */unsigned char) arr_5 [i_1]);
            }
        } 
    } 
    var_26 *= ((/* implicit */short) max((min(((unsigned short)48134), (((/* implicit */unsigned short) var_11)))), (((/* implicit */unsigned short) (_Bool)1))));
}

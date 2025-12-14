/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220387
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
    var_11 &= ((/* implicit */long long int) var_7);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 14; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        {
                            arr_12 [7U] [i_2] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_6)), (((((arr_9 [i_0] [i_0] [i_2 - 1] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned short)61440))))))));
                            var_12 = ((((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_2 + 4] [i_2 - 2] [i_3 - 1])) || (((/* implicit */_Bool) arr_9 [i_1 + 1] [i_2 + 1] [i_2 + 4] [i_3 + 1])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_2 + 3] [i_2 - 1] [i_3 - 1])) ? (arr_9 [i_1 + 1] [i_2 + 4] [i_2 + 2] [i_3 + 1]) : (arr_9 [i_1 - 1] [i_2 + 3] [i_2 + 4] [i_3 + 1]))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned char i_4 = 3; i_4 < 17; i_4 += 3) 
                            {
                                arr_16 [15U] [i_0] [i_0] [i_2] [15U] [i_4] = ((/* implicit */int) var_1);
                                var_13 = ((/* implicit */signed char) arr_15 [i_0] [i_2] [i_2] [i_2]);
                            }
                            /* vectorizable */
                            for (signed char i_5 = 3; i_5 < 17; i_5 += 4) 
                            {
                                arr_20 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)489)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                                var_14 = ((/* implicit */unsigned char) ((long long int) (~(3153923631U))));
                            }
                            for (unsigned short i_6 = 1; i_6 < 16; i_6 += 3) 
                            {
                                arr_23 [i_0] [8ULL] [i_2] [(signed char)0] [(signed char)0] |= ((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4095)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61440)))))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-116))) : (908297233U))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((short)32752), (((/* implicit */short) (_Bool)1))))))))));
                                var_15 += ((/* implicit */unsigned int) arr_15 [i_0] [i_2 + 3] [i_3] [i_2 + 3]);
                                arr_24 [i_0] [i_2] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((arr_14 [i_6 - 1] [i_2] [(unsigned char)1] [(unsigned char)1] [7ULL]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))))))));
                            }
                        }
                    } 
                } 
                arr_25 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1 + 1])) || (((/* implicit */_Bool) 0U))))) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [6U] [(unsigned char)14] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [(short)6] [(short)6] [(short)6] [(unsigned char)12] [(short)6] [(short)6]))) * (arr_17 [2LL] [i_1 - 1] [i_0] [i_1] [i_0] [(unsigned char)12] [i_0])))))))));
                var_16 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_2 [i_0] [i_1 + 1]))))));
                arr_26 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((13620486153667694305ULL) << (((-483785126) + (483785148)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_10 [i_0] [i_0] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? ((~(var_3))) : (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) var_5))));
                var_17 += ((unsigned int) ((unsigned char) arr_19 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1]));
            }
        } 
    } 
}

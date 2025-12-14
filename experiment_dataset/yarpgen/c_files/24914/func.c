/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24914
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
    var_13 = ((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (12112180862898616346ULL) : (((/* implicit */unsigned long long int) var_11))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) : (var_5)))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            arr_4 [i_0] [i_1] [i_1 - 1] = ((/* implicit */unsigned int) (-(894065290)));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                /* LoopSeq 3 */
                for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_15 [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) (~(var_6)))))));
                        arr_16 [(signed char)6] [i_2] [i_1] = ((/* implicit */unsigned char) ((894065290) - (((/* implicit */int) (short)-13121))));
                    }
                    arr_17 [i_3] [i_1] [i_1] [6ULL] = ((/* implicit */short) ((((((((/* implicit */_Bool) var_11)) ? (var_6) : (var_6))) ^ (((/* implicit */long long int) ((/* implicit */int) ((short) var_4)))))) + (((/* implicit */long long int) (~(((((/* implicit */_Bool) 894065290)) ? (var_10) : (((/* implicit */int) var_1)))))))));
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (-((+(((/* implicit */int) var_4)))))))));
                }
                for (unsigned int i_5 = 1; i_5 < 13; i_5 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (1536925000) : (var_11)))) ? (((/* implicit */long long int) -894065290)) : (((long long int) (unsigned char)0)))) ^ (((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) var_8))))))));
                        arr_22 [i_0] [i_1] [i_2] [i_2] [i_2] [(signed char)7] = ((/* implicit */int) var_0);
                        arr_23 [i_0] [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)5)) >> (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) var_12)) : (((var_11) | (-894065290)))))));
                        arr_24 [i_1] [i_1] [i_2] [i_5] [i_6] = ((((/* implicit */_Bool) (~(((((/* implicit */long long int) var_7)) ^ (var_9)))))) ? (((/* implicit */int) (signed char)127)) : (((var_7) * (((/* implicit */int) ((((/* implicit */int) (unsigned char)249)) <= (var_11)))))));
                        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((var_9) & (((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */long long int) var_10))))))) ? (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_4)))), ((~(((/* implicit */int) (short)0))))))) : (((unsigned long long int) (~(((/* implicit */int) var_2))))))))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_17 *= ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) % (4415532530778544619ULL)))) ? (var_9) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_6)))))));
                        arr_28 [7LL] [(_Bool)1] [i_1] [i_5] [4U] = ((/* implicit */_Bool) ((((long long int) ((((/* implicit */int) (_Bool)1)) ^ (894065290)))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) >> (((var_5) - (5688022688695791788LL)))))) >= ((~(var_8)))))))));
                        arr_29 [i_0 - 2] [i_0] [i_1] [8U] [1ULL] = ((/* implicit */unsigned int) min((((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) < (4294967266U))) ? (((((/* implicit */_Bool) var_12)) ? (-70076571) : (var_11))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)21)) : (var_10))))), ((+(((((/* implicit */_Bool) (signed char)-40)) ? (var_7) : (((/* implicit */int) (short)-15469))))))));
                        arr_30 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (+(max(((+(((/* implicit */int) var_2)))), (((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_4))))))));
                    }
                    arr_31 [i_1] [(short)3] [i_2] [i_2] [(short)3] = ((/* implicit */short) min((var_8), (((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned long long int) var_3))))));
                }
                for (unsigned int i_8 = 1; i_8 < 13; i_8 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? ((-(-1562480515))) : (((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))));
                    arr_34 [(unsigned char)4] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) (signed char)-35);
                    arr_35 [(short)12] [0ULL] [(signed char)5] [i_2] [(signed char)5] [i_1] = ((/* implicit */short) var_11);
                    arr_36 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (var_7))) & (((var_7) / (var_11)))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) var_3)) ^ (var_9)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 3189451902U)) ? (var_3) : (((/* implicit */unsigned int) var_11))))) : (((((/* implicit */_Bool) var_12)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (short)-31278))))))) : (((/* implicit */long long int) var_10))));
                }
                arr_37 [i_1] [i_1] = ((/* implicit */short) max((((/* implicit */int) (unsigned char)252)), (((((var_9) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)42))))) ? (var_11) : (var_11)))));
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((signed char) var_4)))));
            }
            var_20 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((~(var_6)))))) ? ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) | (var_8))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) 25ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_1)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) ^ (var_3))))))));
        }
        var_21 = ((/* implicit */short) (~(((((((/* implicit */unsigned long long int) var_10)) ^ (var_8))) >> (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2)))) - (25)))))));
    }
    var_22 *= ((short) (unsigned short)22641);
}

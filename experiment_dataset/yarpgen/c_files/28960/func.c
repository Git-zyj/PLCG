/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28960
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
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) (!((_Bool)1))))))) && (((/* implicit */_Bool) ((unsigned char) (unsigned char)17)))));
                arr_6 [i_1] |= ((/* implicit */int) ((((/* implicit */_Bool) min(((short)-17608), (((/* implicit */short) (unsigned char)239))))) || (((/* implicit */_Bool) min((var_1), (arr_0 [i_0 - 1]))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned int i_3 = 2; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_21 *= ((((/* implicit */_Bool) 11515980187530935436ULL)) && (((/* implicit */_Bool) -410191376)));
                            /* LoopSeq 3 */
                            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                            {
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min((2647182890U), (((/* implicit */unsigned int) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))), (((/* implicit */unsigned int) ((var_18) && (((/* implicit */_Bool) 1226255266)))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_9 [i_0] [i_1 + 1] [i_0] [i_3])) || (((/* implicit */_Bool) 6930763886178616171ULL)))) && (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_3 - 2] [i_4 + 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1 + 2] [i_1 - 1] [i_2 + 1] [i_2 + 1])))))));
                                var_23 = ((unsigned int) ((max((((/* implicit */unsigned int) (unsigned char)253)), (arr_0 [i_3 - 1]))) != ((~(3148642925U)))));
                                var_24 = ((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned short) (short)16095)), (arr_8 [i_1] [i_1] [i_1 + 1] [i_2 + 1]))));
                                arr_15 [i_4 + 1] [i_0] [i_2] [i_3] [i_1 + 2] [i_0] [i_0 + 2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (1146324370U)))) - (((unsigned long long int) arr_1 [i_2 - 1]))));
                                var_25 *= (!(((/* implicit */_Bool) (unsigned short)65535)));
                            }
                            for (unsigned char i_5 = 3; i_5 < 12; i_5 += 4) /* same iter space */
                            {
                                var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (unsigned short)65535)), (((unsigned long long int) arr_1 [i_0 - 1])))))));
                                var_27 ^= ((/* implicit */int) max((((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_3 - 2] [i_5 - 1])), (arr_0 [i_0 - 2])));
                                arr_18 [i_1] [i_3] [i_3] [i_3] = (+(((/* implicit */int) (!(var_18)))));
                                var_28 = ((/* implicit */int) ((unsigned int) arr_1 [i_1 - 1]));
                                var_29 = ((/* implicit */int) (+(((var_12) | ((+(var_19)))))));
                            }
                            for (unsigned char i_6 = 3; i_6 < 12; i_6 += 4) /* same iter space */
                            {
                                var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) 6930763886178616157ULL))));
                                var_31 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_17 [i_0] [i_3] [i_6 - 1])) : (((/* implicit */int) arr_17 [i_1] [i_3] [i_6 - 1])))));
                                var_32 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (unsigned char)149)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)121)))))));
                            }
                            var_33 -= ((/* implicit */unsigned int) arr_10 [i_0] [i_1 - 1] [i_2 - 1] [i_3]);
                            var_34 *= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1146324370U)) ? (11515980187530935461ULL) : (((/* implicit */unsigned long long int) 4043266883U))))) || (((/* implicit */_Bool) 2890400722U)))));
                            var_35 |= arr_20 [i_0] [i_0] [i_2 + 1] [i_2];
                        }
                    } 
                } 
            }
        } 
    } 
    var_36 = ((/* implicit */int) var_4);
    var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? ((~(max((var_4), (((/* implicit */unsigned long long int) (unsigned char)244)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
}

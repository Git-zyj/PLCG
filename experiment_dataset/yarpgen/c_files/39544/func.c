/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39544
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
    for (signed char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    arr_7 [i_1] [i_1] [i_2 + 1] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 - 1] [i_1 - 1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57754))) : (var_10)))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        arr_11 [i_1] [i_1] = ((/* implicit */unsigned int) var_12);
                        var_20 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_3] [i_2] [i_1 + 1] [i_0]))))) | (3152653002U))), (((/* implicit */unsigned int) (unsigned char)247))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) max((((/* implicit */int) arr_10 [i_4] [i_3] [i_2] [i_0 - 1])), (((((/* implicit */_Bool) ((arr_1 [i_0 - 1] [i_0 - 1]) ? (((/* implicit */int) arr_1 [(unsigned short)8] [i_2])) : (((/* implicit */int) arr_2 [i_1]))))) ? (((/* implicit */int) (unsigned char)8)) : (min((arr_6 [i_1] [i_2] [i_3] [i_1]), (((/* implicit */int) (unsigned char)26))))))));
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) 2047LL)) && (((/* implicit */_Bool) (signed char)25))))))));
                            var_22 ^= ((/* implicit */unsigned char) arr_3 [i_4]);
                            var_23 |= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65308)) << (((((/* implicit */int) (unsigned char)107)) - (100)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0 + 1] [i_0 + 1])))), (((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */int) arr_9 [i_1 - 1] [i_1] [i_1 - 1] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_9 [i_1 - 2] [i_1] [i_2] [i_0 + 1] [i_4]))))));
                        }
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_0] = ((signed char) min((arr_2 [i_1 - 1]), (arr_2 [i_1 - 2])));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_24 = ((/* implicit */long long int) ((_Bool) (unsigned char)145));
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 3; i_6 < 13; i_6 += 2) 
                        {
                            var_25 = ((/* implicit */long long int) (_Bool)1);
                            var_26 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) <= (137438953344LL)))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                            arr_23 [i_0 + 1] [i_0 - 1] [10U] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */unsigned short) ((arr_3 [i_1]) >> (((arr_3 [i_1]) - (736344130U)))))) : (((/* implicit */unsigned short) ((arr_3 [i_1]) >> (((((arr_3 [i_1]) - (736344130U))) - (1825658633U))))));
                        }
                        for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
                        {
                            var_27 ^= arr_2 [i_0];
                            var_28 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))) - (((/* implicit */int) (unsigned short)61731))));
                            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_1 - 1] [i_7] [i_7] [i_1 - 1] [i_1] [i_1])) - (((/* implicit */int) arr_18 [i_2 + 1])))))));
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) var_17))));
                        }
                        /* LoopSeq 3 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            arr_29 [i_0] [i_1] [i_0] [i_8] [i_0] [i_5] [4LL] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)4095)) && (((/* implicit */_Bool) (short)-12343))));
                            arr_30 [i_2] [i_1] [i_2] [i_2] [i_8] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_8 [i_0] [i_1] [i_2] [i_5] [i_8] [i_5]))) ? (((((/* implicit */int) arr_22 [i_1] [(unsigned char)7] [i_2] [i_2] [i_1])) * (((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) var_15))));
                            var_31 = var_12;
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            var_32 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */int) (signed char)44)) : (((/* implicit */int) ((var_0) && (((/* implicit */_Bool) (signed char)-103)))))));
                            var_33 = ((/* implicit */unsigned int) var_16);
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)18))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5522))) : (arr_17 [i_1 - 1] [i_2] [i_1] [i_2] [i_2 + 1] [i_9])));
                            arr_33 [i_0] [i_0] [i_0 - 1] [i_0] [i_1] = ((/* implicit */unsigned char) ((_Bool) arr_28 [i_2 + 1] [i_1] [i_2 + 1] [i_1 + 1] [i_9] [i_0 + 1]));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            var_35 = ((/* implicit */signed char) (-(((/* implicit */int) arr_20 [i_0] [i_0] [i_1] [i_0] [i_2 + 1]))));
                            var_36 += ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((-5304672443430012504LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) (!(var_16)))))));
                            var_37 = ((/* implicit */signed char) (unsigned char)252);
                        }
                    }
                }
                /* LoopNest 3 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (short i_12 = 0; i_12 < 16; i_12 += 2) 
                    {
                        for (signed char i_13 = 3; i_13 < 14; i_13 += 4) 
                        {
                            {
                                arr_46 [(unsigned char)8] [i_1] [i_0] = ((/* implicit */unsigned int) min((min((3211714549887225275LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) (signed char)105))));
                                arr_47 [i_0 + 1] [i_0] [i_1] [i_0 + 1] [(signed char)5] [i_0] = ((/* implicit */_Bool) (+((((_Bool)1) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_38 = ((/* implicit */_Bool) ((var_18) + (((/* implicit */long long int) (~(((((/* implicit */int) (signed char)-1)) / (var_3))))))));
    var_39 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)107)) * (((/* implicit */int) (unsigned char)127))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39538
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
    var_20 = ((/* implicit */unsigned char) var_3);
    var_21 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_22 ^= ((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0]);
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned int) arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_2]);
                    var_24 = ((/* implicit */int) (-(11933278610710150935ULL)));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        arr_10 [i_0 - 1] [i_1] [4LL] [i_3] = ((/* implicit */int) (unsigned short)36155);
                        var_25 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_0 [i_0 + 1] [i_1]))));
                        var_26 ^= arr_1 [i_0];
                        arr_11 [i_0] [i_1] [i_3] [i_0] = ((/* implicit */int) (unsigned short)29381);
                    }
                    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (short i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            var_27 *= ((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned short)29366))))));
                            arr_19 [i_0 - 2] [i_0] [i_0] [i_0 - 2] [i_0 - 2] = ((/* implicit */int) ((unsigned char) 5699798996928688883LL));
                            var_28 = ((/* implicit */unsigned int) (-(arr_7 [i_0] [4] [i_0 - 1] [i_1])));
                            var_29 = ((/* implicit */signed char) (unsigned short)36139);
                        }
                        for (short i_6 = 3; i_6 < 10; i_6 += 2) 
                        {
                            arr_24 [i_0 + 1] [4U] [i_6] = ((/* implicit */signed char) ((arr_0 [i_0 - 1] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 1]))) : (((((/* implicit */_Bool) (short)-9)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) (short)2047)))))));
                            var_30 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_2] [i_4] [i_6 + 2])) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4] [(unsigned short)11] [i_6 + 1] [i_4] [0U] [i_0]))))) / (((/* implicit */long long int) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_14 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1])))))));
                        }
                        arr_25 [i_0 - 1] [i_0] [i_1] [i_2] [i_4] [i_4] = ((/* implicit */short) (unsigned short)29389);
                    }
                }
                for (unsigned int i_7 = 0; i_7 < 13; i_7 += 4) /* same iter space */
                {
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned short)63361)) & (var_9)))))) ? (((int) max((var_7), (((/* implicit */unsigned long long int) arr_20 [i_0] [i_0 - 2] [i_0] [i_0] [(unsigned char)2] [i_0 - 2] [(_Bool)1]))))) : (((((/* implicit */int) (_Bool)1)) >> (((1092348807) - (1092348780)))))));
                    arr_28 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-11)) ? (((/* implicit */int) arr_18 [i_0] [i_1] [i_0] [i_0 - 2] [i_1])) : (((/* implicit */int) arr_18 [i_0] [i_7] [i_0] [i_0 - 2] [i_7]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_19))) : (2334224156U)));
                    var_32 *= ((/* implicit */unsigned char) (-(((/* implicit */int) var_3))));
                    var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)36147)) ? (((/* implicit */int) (short)-17)) : (((/* implicit */int) (unsigned short)36155)))))) ? (((((/* implicit */_Bool) min((var_18), (((/* implicit */long long int) (unsigned short)64954))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 - 2] [i_0 - 2] [i_1] [i_7]))) : (((((/* implicit */_Bool) arr_16 [i_7] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1])) ? (5U) : (arr_12 [i_0] [i_0] [i_7] [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_19))) || (((/* implicit */_Bool) min(((unsigned short)29389), (((/* implicit */unsigned short) (unsigned char)22))))))))))))));
                }
                for (signed char i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
                {
                    var_34 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)582))));
                    var_35 = var_19;
                }
                for (signed char i_9 = 0; i_9 < 13; i_9 += 2) /* same iter space */
                {
                    var_36 += ((/* implicit */short) arr_33 [i_0] [i_0] [i_9]);
                    var_37 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_9] [i_1] [i_9] [i_9] [i_9])) ? (1268359279) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [(unsigned char)11] [i_0 - 2]))))) ? (((((/* implicit */int) (short)7761)) * (((/* implicit */int) (unsigned char)254)))) : ((-(((/* implicit */int) var_10)))))));
                    var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) max((((/* implicit */int) min((arr_2 [i_0 + 1] [i_0 - 1]), (arr_2 [i_0 - 2] [i_0 + 1])))), ((-(((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 2])))))))));
                    var_39 = ((/* implicit */long long int) var_3);
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_10 = 0; i_10 < 24; i_10 += 2) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            {
                arr_38 [i_10] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_34 [i_10] [i_11])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10)))) - (((/* implicit */int) ((short) var_10))))) << (((((/* implicit */_Bool) arr_35 [i_11])) ? (((/* implicit */int) ((17487164539830783615ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_10])))))) : (arr_34 [i_10] [i_11])))));
                var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_35 [i_10])), ((-(var_7)))))) ? (((((/* implicit */_Bool) arr_35 [i_10])) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)251))))) : (((long long int) arr_35 [i_11])))) : (min((((/* implicit */long long int) var_3)), (((long long int) var_5))))));
                var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)596))))) ? (((long long int) (unsigned char)166)) : (min((((/* implicit */long long int) var_9)), (3LL)))))) ? (((int) ((((/* implicit */_Bool) 5208151342548797620ULL)) ? (((/* implicit */int) (short)-5)) : (((/* implicit */int) (unsigned short)65533))))) : (((((((/* implicit */int) arr_36 [i_10])) > (((/* implicit */int) (unsigned short)63360)))) ? (((/* implicit */int) arr_35 [i_11])) : ((-(var_11)))))));
                arr_39 [i_10] [i_10] [i_10] = arr_36 [i_11];
            }
        } 
    } 
}

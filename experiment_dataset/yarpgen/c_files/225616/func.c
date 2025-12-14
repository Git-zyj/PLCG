/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225616
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
    var_14 = ((/* implicit */unsigned char) ((unsigned short) var_1));
    var_15 = ((/* implicit */signed char) ((short) min((((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */int) var_6)))), (((/* implicit */int) var_6)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_13))) ? (min((var_7), (((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) arr_2 [i_1])))))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_7) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) arr_3 [i_1] [i_3])) : (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))))), (min((min((((/* implicit */unsigned int) var_2)), (arr_4 [i_1]))), (((/* implicit */unsigned int) arr_0 [i_0]))))));
                        arr_13 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */int) min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_1]), (((/* implicit */unsigned short) min(((signed char)-100), (((/* implicit */signed char) var_10)))))))), ((+(((/* implicit */int) var_5))))));
                    }
                    for (signed char i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */short) (unsigned short)38003);
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_0))));
                    }
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopSeq 4 */
                    for (short i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_9 [i_0] [i_1] [i_5] [i_1]))));
                        var_20 = ((/* implicit */unsigned int) min(((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_2)))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)8))))));
                        var_21 = ((((/* implicit */_Bool) var_12)) ? (min((((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_5] [i_6])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)32303)))), (((/* implicit */int) (signed char)-40)))) : ((~(((/* implicit */int) var_2)))));
                    }
                    /* vectorizable */
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        arr_24 [i_0] [i_0] [i_5] [i_7] [i_7] [i_5] |= var_11;
                        arr_25 [i_0] [i_1] = var_4;
                        arr_26 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((unsigned short) ((_Bool) var_12)));
                        var_22 = ((/* implicit */unsigned short) arr_21 [i_0]);
                    }
                    for (unsigned int i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        arr_31 [i_1] = ((/* implicit */_Bool) var_2);
                        var_23 *= (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)157)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11))))), (min((arr_4 [i_0]), (((/* implicit */unsigned int) var_13))))))));
                        var_24 ^= ((/* implicit */unsigned int) var_7);
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_10 = 0; i_10 < 22; i_10 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(min((((/* implicit */int) var_8)), (arr_27 [i_1] [i_9] [i_1] [i_9])))))) ? (var_7) : (min((((/* implicit */int) min((var_0), (((/* implicit */short) arr_8 [i_9] [i_9] [i_9] [i_9]))))), ((~(((/* implicit */int) var_9))))))));
                            arr_39 [i_1] [i_9] [i_5] [i_9] [i_10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_7), (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
                            var_26 = ((/* implicit */signed char) arr_17 [i_1] [i_1] [i_1] [i_1]);
                        }
                        /* vectorizable */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_27 = ((/* implicit */_Bool) var_7);
                            arr_43 [i_1] [i_1] [i_1] [i_5] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)107)) : (((/* implicit */int) var_13))));
                            arr_44 [i_1] [i_1] [i_1] [i_0] [i_11] = ((/* implicit */_Bool) var_2);
                            var_28 = ((/* implicit */signed char) var_12);
                        }
                        /* vectorizable */
                        for (unsigned char i_12 = 0; i_12 < 22; i_12 += 1) 
                        {
                            arr_47 [i_9] [i_1] [i_1] [i_9] [i_12] = arr_10 [i_0] [i_0] [i_5] [i_9] [i_1];
                            arr_48 [i_0] [i_1] [i_1] [i_9] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_9]))));
                            var_29 &= ((/* implicit */_Bool) var_5);
                        }
                        var_30 &= ((/* implicit */int) min((var_12), (((/* implicit */unsigned int) arr_33 [i_0] [i_0] [i_9] [i_9]))));
                    }
                    arr_49 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) arr_45 [i_5]);
                    arr_50 [i_1] [i_1] [i_1] [i_5] = ((/* implicit */unsigned char) min((((/* implicit */int) var_3)), (((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_11))))));
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        arr_53 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) var_13);
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_19 [i_0] [i_0] [i_1] [i_1] [i_5] [i_13 - 1]))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)14359))));
                        arr_54 [i_0] [i_1] [i_5] [i_13 - 1] = (_Bool)1;
                        arr_55 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)26)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)4))));
                    }
                    arr_56 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_46 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
                }
                arr_57 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((unsigned short) arr_46 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]));
                /* LoopNest 2 */
                for (unsigned int i_14 = 2; i_14 < 21; i_14 += 2) 
                {
                    for (unsigned char i_15 = 0; i_15 < 22; i_15 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned long long int) arr_34 [i_15] [i_0] [i_0]);
                            arr_63 [i_0] [i_1] [i_1] [i_15] = ((/* implicit */int) arr_28 [i_1] [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
}

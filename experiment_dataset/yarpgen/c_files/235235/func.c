/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235235
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) / (((/* implicit */int) (unsigned char)241))));
        arr_3 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min(((unsigned char)26), (((/* implicit */unsigned char) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((signed char) (unsigned char)14))))), (((/* implicit */int) arr_1 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (unsigned short i_2 = 4; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) var_15);
                                arr_13 [i_0] [i_0] [i_2 + 1] [i_0] [i_3] [i_2] = (+(min(((~(9223372036854775785LL))), (((/* implicit */long long int) (unsigned short)56036)))));
                                var_18 = ((/* implicit */signed char) (unsigned char)244);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        arr_16 [i_0] [i_2] [i_2] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_2]))));
                        /* LoopSeq 4 */
                        for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            arr_19 [i_0] [i_1 + 1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)211))));
                            arr_20 [i_0] [i_2] [i_1 - 1] [i_2 - 1] [i_1 - 1] [i_6] = ((/* implicit */signed char) arr_12 [i_0] [i_1 - 1] [i_2 - 4] [i_2] [i_6]);
                            arr_21 [i_6] [i_2] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) min((arr_18 [i_2 - 2] [i_1 - 1] [i_1 - 1] [i_1] [i_0] [i_0]), (arr_18 [i_2 + 1] [i_1 - 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1]))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (unsigned short)9971))));
                            arr_24 [i_2] [i_1 - 1] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) arr_10 [i_2 - 2] [i_1] [i_2 - 4] [i_2 - 2] [i_1 - 1] [i_1]))));
                            arr_25 [i_2] [i_7] [i_2] [i_2] [i_2] [i_0] [i_0] = (signed char)30;
                        }
                        for (long long int i_8 = 0; i_8 < 15; i_8 += 3) /* same iter space */
                        {
                            var_20 += ((signed char) (+(((/* implicit */int) arr_18 [i_0] [i_1 + 1] [i_1 + 1] [i_2 - 2] [i_1 + 1] [i_1 + 1]))));
                            var_21 += ((/* implicit */signed char) max(((unsigned char)236), (((/* implicit */unsigned char) ((signed char) min((4631903915858213461LL), (((/* implicit */long long int) (unsigned char)129))))))));
                            var_22 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) (unsigned char)201)))), (((/* implicit */int) (unsigned char)37))));
                        }
                        for (long long int i_9 = 0; i_9 < 15; i_9 += 3) /* same iter space */
                        {
                            var_23 *= ((/* implicit */signed char) max(((!(((/* implicit */_Bool) arr_30 [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_2 - 4])))), ((!(((/* implicit */_Bool) (unsigned short)9988))))));
                            var_24 += ((/* implicit */long long int) ((signed char) ((unsigned short) arr_10 [i_2 - 2] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_0])));
                            arr_32 [i_9] [i_2] [i_2] [i_1] [i_2] [i_0] = ((/* implicit */long long int) ((unsigned char) (~((~(((/* implicit */int) (unsigned char)192)))))));
                        }
                    }
                    for (unsigned char i_10 = 2; i_10 < 14; i_10 += 2) 
                    {
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_34 [i_10 - 2] [i_2 - 4] [i_1 + 1] [i_0])))))));
                        arr_35 [i_1 - 1] [i_2] [i_0] [i_1 - 1] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)80)) && (((/* implicit */_Bool) 5103632100237635640LL))));
                        /* LoopSeq 1 */
                        for (signed char i_11 = 0; i_11 < 15; i_11 += 3) 
                        {
                            arr_39 [i_0] [i_1] [i_0] [i_10 + 1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)234)) || (((/* implicit */_Bool) -5958805221400115340LL))));
                            arr_40 [i_0] [i_2] [i_2 + 1] [i_2] [i_0] = ((/* implicit */unsigned char) -5958805221400115343LL);
                        }
                    }
                    for (unsigned char i_12 = 0; i_12 < 15; i_12 += 4) 
                    {
                        var_26 *= ((/* implicit */unsigned char) min((((((/* implicit */int) arr_11 [i_1] [i_1 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 2] [i_2 - 4] [i_12])) & (((/* implicit */int) arr_11 [i_0] [i_1 - 1] [i_2 - 3] [i_12] [i_12] [i_12] [i_12])))), (((/* implicit */int) (signed char)56))));
                        var_27 -= ((/* implicit */signed char) (+(min((((/* implicit */int) ((unsigned char) (unsigned char)59))), ((-(((/* implicit */int) arr_28 [i_12] [i_1] [i_2 - 1] [i_1] [i_12]))))))));
                        arr_43 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)69)) && (((/* implicit */_Bool) arr_8 [i_1] [i_1 - 1] [i_1 - 1] [i_2 - 1] [i_2 - 1]))));
                        var_28 = ((/* implicit */unsigned short) min((var_28), ((unsigned short)37888)));
                        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) arr_9 [i_0] [i_1] [i_1 - 1] [i_2] [i_12]))));
                    }
                }
            } 
        } 
    }
    for (signed char i_13 = 1; i_13 < 16; i_13 += 2) 
    {
        arr_48 [i_13] = arr_45 [i_13];
        var_30 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-50)) | ((~(((/* implicit */int) arr_47 [i_13]))))));
        arr_49 [i_13] = (unsigned char)21;
    }
    var_31 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_2))) ^ (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)9517))) ^ (5958805221400115352LL))))));
}

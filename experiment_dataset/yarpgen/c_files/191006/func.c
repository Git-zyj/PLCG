/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191006
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
    var_15 = var_8;
    var_16 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */long long int) arr_6 [i_2] [i_3]);
                        arr_11 [i_0] [i_1] = ((/* implicit */short) arr_3 [i_0]);
                    }
                    for (int i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned int) min((905387929), (((((/* implicit */_Bool) 3600240507402638036LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)26667))))));
                        arr_15 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */unsigned int) (((+(((/* implicit */int) (short)-2)))) & (((/* implicit */int) arr_8 [i_4] [i_4] [i_2] [i_1] [i_0] [i_0]))));
                        var_18 = ((/* implicit */_Bool) (-(((int) ((unsigned char) var_6)))));
                    }
                    for (int i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
                    {
                        var_19 += ((/* implicit */signed char) var_9);
                        var_20 = ((/* implicit */long long int) arr_12 [i_0] [i_1] [i_2] [i_2] [i_0] [i_2]);
                        var_21 -= ((/* implicit */_Bool) var_4);
                        /* LoopSeq 4 */
                        for (short i_6 = 1; i_6 < 14; i_6 += 3) 
                        {
                            var_22 -= ((/* implicit */short) var_0);
                            arr_22 [i_6] [i_6] [i_0] [i_0] [i_1] [i_0] = (~(((/* implicit */int) ((((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_12)))) < (((/* implicit */int) var_1))))));
                            var_23 += ((/* implicit */_Bool) (short)26687);
                            arr_23 [i_5] [i_2] [i_5] &= ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_7 [i_2] [i_5] [i_6])))) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) arr_16 [i_6 + 4] [i_6] [i_5] [i_6 + 2] [i_6 + 2]))));
                        }
                        for (signed char i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -6809568532023685372LL))));
                            var_25 = ((/* implicit */short) ((int) 905387929));
                            arr_27 [i_0] = ((/* implicit */unsigned char) var_14);
                            arr_28 [i_0] [i_0] [i_0] [i_5] [i_7] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2])) ? (((-6809568532023685372LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) arr_14 [i_7] [i_5] [i_2] [i_2] [i_1] [i_0])))));
                            arr_29 [i_1] [i_5] [i_7] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_6 [i_2] [i_5])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_0] [i_5] [i_7]))))))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_7] [i_5] [i_2] [i_1] [i_0])))))));
                        }
                        for (short i_8 = 0; i_8 < 18; i_8 += 2) 
                        {
                            var_26 *= ((/* implicit */signed char) (((!(((/* implicit */_Bool) (short)26654)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((arr_25 [i_8] [i_1] [i_5] [i_5] [i_8] [i_1] [i_5]) >= (((var_9) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))))));
                            arr_33 [i_5] [i_0] = ((/* implicit */unsigned int) ((signed char) (short)32767));
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */int) (short)28040)) | (((/* implicit */int) var_14))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 2) 
                        {
                            var_28 -= ((/* implicit */short) (~(((/* implicit */int) (short)20125))));
                            arr_38 [i_0] [i_1] [i_2] [i_0] [i_2] [i_0] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(-905387915))))));
                            var_29 = ((/* implicit */short) var_4);
                        }
                        arr_39 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (!(var_5)));
                    }
                    var_30 -= ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_35 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_25 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_2])))))) ? (((/* implicit */int) ((((/* implicit */int) (short)32752)) != (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */int) var_10))))));
                    var_31 = var_13;
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 2) 
    {
        arr_43 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_40 [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_10]))) : (arr_41 [i_10]))))) ? (arr_41 [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
        var_32 = ((/* implicit */_Bool) var_7);
    }
    /* vectorizable */
    for (signed char i_11 = 0; i_11 < 15; i_11 += 2) 
    {
        arr_48 [i_11] [i_11] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_30 [i_11] [i_11] [i_11] [i_11] [i_11]))));
        arr_49 [i_11] |= ((/* implicit */short) -5032203625060798177LL);
        arr_50 [i_11] [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_35 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]))));
        arr_51 [i_11] = ((/* implicit */signed char) var_10);
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43091
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 7; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        arr_9 [i_1 + 2] [i_1] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (~(((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) var_10)))))))), (((((/* implicit */_Bool) arr_3 [i_2])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) % (4016785761U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0] [i_2])))))))));
                        arr_10 [0] [(unsigned char)8] [i_1] [i_3] [i_2] = ((/* implicit */unsigned char) arr_1 [i_0] [(short)1]);
                    }
                    for (unsigned char i_4 = 2; i_4 < 8; i_4 += 3) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned char) arr_12 [i_1] [i_1]);
                        var_18 += ((/* implicit */short) 4016785751U);
                        arr_15 [i_0] [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) ((signed char) (unsigned char)15))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) 278181535U)) : (9223372036854775807LL))))));
                        var_19 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0])) ? (max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) 2146435072U)), (9223372036854775803LL)))), (((unsigned long long int) arr_12 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((arr_1 [i_0] [i_1 - 1]) / (((/* implicit */long long int) ((((/* implicit */int) var_0)) | (((/* implicit */int) arr_5 [i_4] [i_4] [i_4]))))))))));
                    }
                    for (unsigned char i_5 = 2; i_5 < 8; i_5 += 3) /* same iter space */
                    {
                        var_20 = ((var_8) ? (((/* implicit */unsigned int) -1974468958)) : (((((/* implicit */_Bool) ((int) arr_4 [i_1] [i_2] [i_5]))) ? (((/* implicit */unsigned int) ((var_11) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))) : (arr_6 [i_5 - 2] [i_1] [i_1] [i_0]))));
                        arr_19 [i_1] = ((/* implicit */_Bool) ((unsigned char) ((unsigned char) ((unsigned int) 4016785780U))));
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            arr_22 [i_2] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) var_14);
                            var_21 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) var_10)))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-104))) : (min((((/* implicit */long long int) (unsigned char)39)), (arr_20 [i_1] [(_Bool)1] [i_2] [i_1] [i_2] [i_2])))))));
                            var_22 = ((/* implicit */unsigned long long int) (unsigned char)14);
                            var_23 *= ((/* implicit */unsigned char) ((signed char) var_0));
                            arr_23 [i_6] [i_1 - 4] [i_1] [i_5] [i_6] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(var_0))))))), (((unsigned long long int) ((arr_14 [i_1]) < (((/* implicit */int) arr_13 [i_1])))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 2; i_7 < 9; i_7 += 3) 
                        {
                            arr_26 [i_1] [i_1] [i_2] [5U] [i_7 - 2] = ((/* implicit */int) arr_21 [i_0] [(unsigned char)6] [i_0] [i_2] [i_5 + 1] [i_5] [i_7]);
                            arr_27 [i_1] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_20 [i_1] [9U] [i_2] [i_5] [9U] [(unsigned short)5])) ? (((/* implicit */int) var_0)) : (arr_14 [i_1]))));
                            arr_28 [i_1] = ((/* implicit */unsigned int) arr_20 [i_1] [i_5] [(unsigned char)8] [i_1] [i_1] [i_1]);
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)12)) : (((-1851265869) / (((/* implicit */int) arr_0 [i_0] [i_1]))))));
                        }
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) arr_5 [i_0] [i_1 + 2] [i_2]))));
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) arr_5 [i_0] [i_1] [i_2])))))) || (((/* implicit */_Bool) min((max((arr_1 [i_1] [i_5]), (((/* implicit */long long int) var_15)))), (((/* implicit */long long int) var_8))))))))));
                    }
                    for (unsigned char i_8 = 2; i_8 < 8; i_8 += 3) /* same iter space */
                    {
                        arr_32 [i_2] [(signed char)7] [(unsigned short)3] [i_1] [(signed char)1] = ((/* implicit */unsigned int) (unsigned char)236);
                        arr_33 [i_0] [i_1] [i_1] = ((/* implicit */short) arr_3 [i_8]);
                        arr_34 [i_0] [i_1 - 1] [i_2] [i_1] = ((/* implicit */signed char) var_2);
                        arr_35 [i_0] [i_0] [i_0] [i_1] = var_7;
                        var_27 = ((/* implicit */short) min((min((arr_17 [(_Bool)1] [i_1] [i_0]), (((/* implicit */unsigned long long int) (signed char)113)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((unsigned char) arr_2 [i_0] [i_1]))), (((var_0) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
                    }
                    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) arr_12 [i_0] [i_0]))));
                    arr_36 [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_3 [i_1 - 4])), ((unsigned char)93)))) ? (((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (((/* implicit */int) arr_3 [i_1 + 3])) : (((/* implicit */int) arr_3 [i_1 + 1])))) : (((((/* implicit */int) arr_3 [i_1 - 2])) | (((/* implicit */int) arr_3 [i_1 - 2]))))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned char) min((((long long int) max((-1969469597), (((/* implicit */int) var_10))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) max((var_15), (var_4)))) : (((var_8) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)62573)))))))));
    var_30 = ((/* implicit */int) var_6);
}

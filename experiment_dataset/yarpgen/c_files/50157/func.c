/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50157
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) (~(max((((/* implicit */int) arr_2 [i_1] [i_1] [i_1])), (((((/* implicit */_Bool) (short)-24955)) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) var_12))))))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0] [i_0] [6])))))))) != (((/* implicit */int) (unsigned char)240))));
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) arr_5 [i_1 - 1] [i_0]);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
    {
        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 25; i_5 += 2) 
            {
                {
                    var_20 = ((((((/* implicit */_Bool) (unsigned char)215)) ? (((((/* implicit */int) var_11)) ^ (((/* implicit */int) (short)32265)))) : (((((/* implicit */int) (unsigned char)166)) + (((/* implicit */int) (unsigned short)52390)))))) & (((((/* implicit */_Bool) ((short) arr_10 [i_3]))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (!((_Bool)1)))))));
                    /* LoopSeq 4 */
                    for (unsigned int i_6 = 3; i_6 < 24; i_6 += 1) 
                    {
                        arr_19 [i_3] [i_3] = min((((long long int) ((unsigned char) (signed char)8))), (((/* implicit */long long int) arr_14 [i_3] [(unsigned char)14] [i_5] [i_3])));
                        arr_20 [i_3] = ((/* implicit */unsigned char) min((((min(((_Bool)1), (arr_13 [i_3] [15LL] [i_5]))) ? (((long long int) (unsigned char)181)) : (((/* implicit */long long int) (~(((/* implicit */int) arr_18 [i_3] [i_4] [i_5] [i_6 - 3]))))))), (((/* implicit */long long int) ((((((/* implicit */int) arr_9 [i_3])) | (((/* implicit */int) arr_9 [i_3])))) * (((/* implicit */int) arr_11 [i_3])))))));
                    }
                    for (unsigned char i_7 = 1; i_7 < 22; i_7 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 1; i_8 < 23; i_8 += 3) 
                        {
                            var_21 -= ((/* implicit */int) arr_17 [i_3] [i_5] [i_3] [i_7]);
                            arr_26 [i_3] [i_4] [i_3] [i_7] [i_8] [i_4] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)11334))))), (arr_9 [i_3])));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 1) 
                        {
                            var_22 = var_8;
                            arr_29 [i_3] [i_3] [i_5] [i_3] [i_7] [i_3] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) arr_22 [i_7 + 1] [i_7 + 3] [i_7 + 2] [i_7])), (3U))) >= (((/* implicit */unsigned int) (-((+(((/* implicit */int) (unsigned char)13)))))))));
                            arr_30 [i_3] [i_3] [i_5] [i_3] [i_3] = ((/* implicit */unsigned char) (-(max((((((/* implicit */_Bool) arr_10 [i_3])) ? (8793926185443532769LL) : (arr_12 [i_3] [i_3]))), (((/* implicit */long long int) max(((short)-28042), (((/* implicit */short) (unsigned char)131)))))))));
                            var_23 = ((/* implicit */_Bool) max((var_23), ((_Bool)1)));
                            arr_31 [i_3] [16ULL] [i_5] [i_7] [i_3] [i_9] = ((/* implicit */short) max((((/* implicit */long long int) arr_21 [i_3] [i_4] [i_3] [i_7])), (((long long int) ((arr_15 [i_9] [i_9] [i_9] [i_9]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_3] [i_4] [i_4] [i_9] [i_9]))))))));
                        }
                        var_24 = ((/* implicit */unsigned char) (+((((!(((/* implicit */_Bool) -4394858823651034985LL)))) ? (((/* implicit */int) (unsigned char)140)) : ((+(((/* implicit */int) (_Bool)1))))))));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_21 [i_7 + 1] [i_7 + 1] [i_7 + 3] [i_7 + 3]), (arr_21 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 + 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)3), (((/* implicit */unsigned short) (short)-16753)))))) : (((var_14) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_7 + 3] [i_7 - 1] [i_7 + 1] [i_7 + 1])))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_10 = 0; i_10 < 25; i_10 += 1) /* same iter space */
                    {
                        arr_34 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned char)187)))));
                        var_26 = ((/* implicit */_Bool) min((var_26), (((_Bool) (_Bool)0))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 25; i_11 += 1) /* same iter space */
                    {
                        arr_38 [i_3] [i_3] = ((/* implicit */unsigned int) ((((arr_12 [i_3] [i_3]) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_17 [i_3] [i_3] [i_3] [i_3])) <= (((/* implicit */int) (_Bool)1)))))))) - (((/* implicit */long long int) ((((/* implicit */int) max((arr_17 [i_11] [i_3] [i_3] [i_3]), ((unsigned char)46)))) - (((/* implicit */int) arr_36 [i_3] [i_3] [i_3] [i_11])))))));
                        var_27 = ((/* implicit */long long int) max((var_27), (((((/* implicit */long long int) ((/* implicit */int) min((arr_24 [i_3] [i_3] [i_4] [i_5] [i_11] [i_11]), (arr_24 [i_3] [i_3] [i_4] [i_5] [i_11] [i_3]))))) % (min((8740787707349119693LL), (((/* implicit */long long int) min(((short)-32766), (((/* implicit */short) var_11)))))))))));
                        arr_39 [5LL] [i_3] [i_5] [i_3] [i_11] [i_11] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3] [i_11]))));
                        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */int) ((short) arr_35 [i_3] [i_4] [i_5] [i_11] [i_4] [i_3]))) / (((/* implicit */int) min((arr_36 [i_3] [i_4] [i_5] [i_3]), (arr_36 [i_3] [i_4] [i_5] [i_11])))))))));
                        arr_40 [i_3] [(short)22] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) arr_25 [i_3] [i_3] [i_4] [i_5] [i_11]);
                    }
                    var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) max(((+(((unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) min((((short) (unsigned char)245)), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) <= (arr_27 [i_3] [i_5] [i_4] [6ULL] [i_5] [6U] [i_5]))))))))))));
                    var_30 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_10 [i_5])) || (((/* implicit */_Bool) arr_22 [i_3] [i_4] [i_3] [i_3])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_10 [i_5])) : (((/* implicit */int) arr_22 [i_3] [i_4] [i_5] [i_5])))))));
                }
            } 
        } 
    } 
}

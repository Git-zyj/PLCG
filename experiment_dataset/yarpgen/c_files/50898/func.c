/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50898
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */long long int) max((var_14), (((/* implicit */unsigned int) arr_1 [i_0]))))) / (arr_0 [i_0]))))));
        var_17 = ((/* implicit */short) (~((-(arr_2 [i_0])))));
        arr_3 [i_0] = var_8;
    }
    for (short i_1 = 2; i_1 < 16; i_1 += 4) 
    {
        var_18 = ((/* implicit */signed char) var_11);
        var_19 = min((((/* implicit */int) ((signed char) var_3))), (((((/* implicit */int) ((signed char) arr_4 [i_1 - 1] [i_1]))) / (((/* implicit */int) arr_5 [i_1])))));
    }
    var_20 = (unsigned char)213;
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        arr_8 [i_2] = ((/* implicit */short) arr_4 [i_2] [i_2]);
        /* LoopNest 2 */
        for (short i_3 = 1; i_3 < 11; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                {
                    arr_16 [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) arr_11 [i_2] [i_3] [(unsigned short)5])))));
                    var_21 = ((/* implicit */unsigned short) ((signed char) (~(var_14))));
                    /* LoopSeq 3 */
                    for (short i_5 = 0; i_5 < 14; i_5 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((_Bool) (~(arr_11 [i_3 + 1] [i_3 + 1] [i_5]))));
                        /* LoopSeq 4 */
                        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            var_23 -= ((/* implicit */_Bool) ((arr_4 [i_3 - 1] [i_3 + 1]) | (arr_4 [i_3 + 1] [i_3 + 2])));
                            var_24 = ((/* implicit */short) (+(((/* implicit */int) arr_18 [i_2] [i_3 - 1] [8ULL]))));
                        }
                        for (unsigned int i_7 = 1; i_7 < 10; i_7 += 2) 
                        {
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) arr_7 [(short)0]))));
                            var_26 &= ((/* implicit */_Bool) arr_4 [i_3 - 1] [i_3]);
                        }
                        for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            arr_26 [i_2] [i_3 - 1] [i_4] [i_3] [i_8] [i_3 - 1] [i_8] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_12 [i_3] [i_3 + 2]))));
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((_Bool) var_9)))));
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) var_5))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            arr_29 [i_3] [11ULL] [i_3] [11ULL] [i_5] [(unsigned short)10] = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) >> (((arr_11 [i_3 - 1] [(_Bool)1] [i_3 + 3]) - (6750097231502096747ULL)))));
                            arr_30 [i_2] [i_3] [(signed char)9] [(signed char)9] [i_9] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                            var_29 += ((/* implicit */long long int) arr_4 [i_2] [i_2]);
                            var_30 = ((/* implicit */unsigned short) var_11);
                        }
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) | (var_12)))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-16812)) && (((/* implicit */_Bool) var_3))))))));
                        arr_31 [i_2] [(_Bool)1] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((short) -498398855));
                    }
                    for (short i_10 = 0; i_10 < 14; i_10 += 3) /* same iter space */
                    {
                        arr_34 [i_3] [i_3] [(signed char)9] [i_10] [i_10] [(unsigned short)9] = ((/* implicit */_Bool) var_3);
                        var_32 += arr_10 [i_3 + 1] [(unsigned short)10] [i_3 + 1];
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_2] [i_4] [i_4] [i_10] [i_2])) ? (((/* implicit */long long int) var_6)) : (var_12)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [(unsigned short)10] [i_3] [i_10])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_18 [i_4] [i_3] [i_4]))))) : (var_7)));
                    }
                    for (unsigned long long int i_11 = 1; i_11 < 12; i_11 += 1) 
                    {
                        arr_37 [i_2] [i_3 + 3] [i_4] [i_4] [i_3] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (short)-9146)) ? (((/* implicit */int) arr_15 [i_4] [i_11])) : (((/* implicit */int) arr_32 [(unsigned char)10] [i_3] [(unsigned char)10] [i_11]))))));
                        arr_38 [i_3] [i_3] [i_4] [i_4] [i_4] = ((/* implicit */short) (-(var_10)));
                    }
                    var_34 = ((/* implicit */unsigned short) arr_19 [i_2] [12LL] [i_4] [i_2] [(_Bool)1]);
                }
            } 
        } 
        arr_39 [i_2] = ((/* implicit */unsigned short) arr_22 [i_2] [i_2] [i_2] [i_2]);
    }
    var_35 = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned int) ((761274725U) >> (((/* implicit */int) var_5))))));
}

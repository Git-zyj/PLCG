/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206124
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
    var_14 = ((unsigned short) max((((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)148)), (1181076043U)))), (min((((/* implicit */long long int) var_12)), (var_0)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)170)) * (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (1188914891) : (((/* implicit */int) (_Bool)1))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) -2943175404882522840LL);
                        var_16 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 72040001851883520LL)) || (((/* implicit */_Bool) (unsigned short)36249))))) % (((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 2] [i_2 - 2] [i_2]))));
                        arr_11 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0] [i_3])) | (arr_2 [i_0])))) ? ((~(((/* implicit */int) (signed char)-70)))) : (((/* implicit */int) arr_6 [(short)8] [i_2 + 2] [i_2 + 1] [i_3]))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
                    {
                        arr_14 [15LL] [15LL] [i_1] = ((/* implicit */long long int) max(((((+(var_1))) << ((((+(((/* implicit */int) arr_1 [i_0] [i_0])))) - (32902))))), (((/* implicit */unsigned int) arr_3 [i_1]))));
                        var_17 += ((/* implicit */unsigned short) (unsigned char)255);
                        var_18 += ((((/* implicit */_Bool) (signed char)0)) ? (((((/* implicit */long long int) arr_9 [i_1 - 2])) | (arr_12 [i_1 - 1] [4LL] [i_2 + 1] [(unsigned short)14] [i_2 - 2] [(unsigned short)0]))) : (((long long int) (short)-3128)));
                        /* LoopSeq 2 */
                        for (int i_5 = 2; i_5 < 15; i_5 += 1) 
                        {
                            arr_17 [i_0] [i_1] [i_2 + 2] [i_1 - 2] [i_2 + 2] [i_1] = ((/* implicit */unsigned char) arr_1 [i_1] [i_4]);
                            var_19 = arr_8 [i_1];
                        }
                        for (unsigned long long int i_6 = 2; i_6 < 17; i_6 += 1) 
                        {
                            arr_22 [i_1] [i_1] [i_1] = ((/* implicit */signed char) var_7);
                            arr_23 [i_0] [i_1] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (max((((/* implicit */unsigned int) arr_1 [i_0] [i_1])), (var_1)))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) (signed char)69))))))))));
                        }
                    }
                    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 1) /* same iter space */
                    {
                        arr_28 [i_7] [i_1] [0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((_Bool) var_0));
                        var_20 = ((/* implicit */_Bool) arr_13 [i_7] [i_2 + 2] [i_2 + 2] [i_1] [i_0]);
                    }
                    arr_29 [i_1] [(short)1] [i_1] [i_1] = ((/* implicit */unsigned short) (~(((unsigned int) var_3))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) var_12);
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_5))));
}

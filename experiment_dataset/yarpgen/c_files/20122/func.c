/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20122
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
    var_12 = ((/* implicit */long long int) var_1);
    var_13 = var_6;
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned int) min((min((1390461524344773535LL), (1390461524344773535LL))), (-1390461524344773535LL)));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
        {
            var_15 = ((/* implicit */short) arr_1 [i_1] [i_0]);
            var_16 = ((/* implicit */long long int) (~((~(16790242889145419367ULL)))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
        {
            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_0 [i_2])))) ? (((/* implicit */int) (((~(arr_0 [(signed char)7]))) > (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))))) : (((((/* implicit */int) arr_9 [i_0] [i_0])) + (((/* implicit */int) (unsigned short)4272))))));
            var_18 = ((/* implicit */unsigned long long int) (+(((((((/* implicit */_Bool) var_10)) ? (arr_2 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_2]))))) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_2] [i_0])) < (((/* implicit */int) (short)-29267))))))))));
            arr_10 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (short)28968)) : (((/* implicit */int) (unsigned short)4272))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_2] [i_0]))) < (16790242889145419367ULL))))) : (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_3 [12ULL])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 3200474786831822699LL))))))))));
        }
        /* LoopSeq 4 */
        for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            var_19 = ((/* implicit */unsigned char) max(((((~(arr_4 [i_3]))) << (((/* implicit */int) (!((_Bool)1)))))), (((min((arr_4 [i_0]), (arr_12 [i_0]))) | (((/* implicit */unsigned long long int) (+(arr_5 [(_Bool)1]))))))));
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) -3415797144969280043LL)) ? (arr_11 [i_3] [(signed char)15]) : (min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)61277))) & (5918438752067937292LL))), (((/* implicit */long long int) (unsigned char)242))))));
            arr_13 [i_0] [i_0] = ((/* implicit */long long int) max((arr_5 [i_0]), (((/* implicit */int) ((((/* implicit */int) var_0)) >= (arr_5 [i_0]))))));
        }
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_5 = 1; i_5 < 16; i_5 += 3) 
            {
                for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) 
                {
                    {
                        var_21 = ((/* implicit */long long int) ((arr_17 [i_5] [i_5] [i_5] [i_5]) <= (((/* implicit */unsigned long long int) arr_20 [i_6] [i_5] [(short)1] [i_4] [i_0]))));
                        arr_23 [i_5] = ((/* implicit */unsigned long long int) ((arr_4 [i_4]) >= (arr_14 [i_5 + 3] [i_5])));
                        var_22 = (+(arr_22 [4LL] [(_Bool)1] [i_5 + 1] [i_0]));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 1) 
                        {
                            arr_26 [(signed char)10] [i_5] [i_5] [i_5 + 1] [12LL] [i_7] [i_5] = ((/* implicit */unsigned long long int) 1390461524344773534LL);
                            arr_27 [i_4] [i_5] [i_6] [i_5] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_6)) + (arr_12 [i_7]))) & (((/* implicit */unsigned long long int) arr_19 [i_5 + 2] [i_5 - 1] [i_5] [i_5 + 2]))));
                        }
                        var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (2316693179U)));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned short) arr_19 [i_0] [i_0] [i_0] [i_0]);
        }
        /* vectorizable */
        for (unsigned char i_8 = 0; i_8 < 19; i_8 += 4) 
        {
            arr_31 [i_8] [i_8] [i_0] = ((/* implicit */short) arr_3 [i_0]);
            arr_32 [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_5);
            var_25 = ((/* implicit */long long int) (+(((((/* implicit */int) (unsigned short)4259)) >> (((((/* implicit */int) arr_21 [i_0] [i_8] [i_8])) + (23)))))));
        }
        for (signed char i_9 = 1; i_9 < 16; i_9 += 2) 
        {
            var_26 = ((/* implicit */int) arr_3 [i_0]);
            arr_35 [i_9] = ((/* implicit */_Bool) var_4);
        }
    }
    for (signed char i_10 = 0; i_10 < 19; i_10 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3200474786831822697LL))));
        arr_39 [i_10] = ((((/* implicit */_Bool) min(((~(var_8))), (((/* implicit */long long int) arr_19 [(unsigned short)2] [(unsigned short)2] [(_Bool)1] [i_10]))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_10] [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_33 [i_10] [i_10])))) % (((((/* implicit */long long int) arr_19 [i_10] [i_10] [i_10] [i_10])) % (3097805109208173046LL))))) : (((/* implicit */long long int) var_1)));
        var_28 = ((/* implicit */unsigned int) min((((unsigned short) 2275590231931943791LL)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_15 [i_10] [i_10])))))));
    }
}

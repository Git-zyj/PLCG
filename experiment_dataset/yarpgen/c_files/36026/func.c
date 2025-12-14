/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36026
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
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (988789696538410215LL) : (((/* implicit */long long int) min(((-(arr_0 [i_0] [i_1]))), (((((/* implicit */_Bool) arr_6 [(signed char)13] [i_1] [i_0] [i_2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10)))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        var_12 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)11))))));
                        arr_10 [i_3] [i_0] [i_2 + 1] [i_1] [i_0] [(unsigned short)13] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0] [i_2 + 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) 6404543547149847023LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (5430676298099270809LL)))));
                        arr_11 [i_2] [i_1] [i_0] [i_3] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [(unsigned short)16] [i_1 + 1] [6U] [i_2 - 1])) ? (arr_9 [i_1 + 2] [i_1 + 1] [i_1] [i_2 - 1]) : (arr_9 [i_1] [i_1 + 2] [i_2 - 1] [i_2 + 1])));
                    }
                    for (unsigned char i_4 = 1; i_4 < 16; i_4 += 4) 
                    {
                        arr_14 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)143))));
                        var_13 = ((/* implicit */unsigned int) min((min((arr_6 [i_0] [i_0] [i_0] [i_0]), (arr_6 [i_4 - 1] [i_0] [i_0] [i_4 + 1]))), (((((/* implicit */_Bool) (short)-10951)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_6 [i_4 + 1] [i_0] [i_0] [i_1])))));
                    }
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        arr_17 [5U] [i_2 + 1] [i_2] [i_5] [i_0] = ((/* implicit */short) 18446744073709551589ULL);
                        var_14 = ((/* implicit */unsigned char) arr_2 [i_0]);
                        arr_18 [i_0] [i_5] [i_2] [i_2 - 1] [i_0] [i_0] = ((/* implicit */short) (unsigned short)20915);
                    }
                    var_15 = ((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6)))))), (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)105)) && (((/* implicit */_Bool) (short)1984))))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_15 [(unsigned char)7] [i_1] [i_2 + 1] [i_0])), ((unsigned char)127))))))));
                    var_16 = ((((/* implicit */int) ((((int) arr_16 [i_0] [i_2])) == (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [(short)6] [i_0])) > (((/* implicit */int) (short)-18876)))))))) / (((/* implicit */int) (signed char)60)));
                    arr_19 [(signed char)14] [(signed char)14] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned char) (signed char)-54)), (((unsigned char) ((unsigned short) var_8)))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_6 = 1; i_6 < 18; i_6 += 1) 
    {
        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            for (int i_8 = 0; i_8 < 20; i_8 += 1) 
            {
                {
                    var_17 |= ((/* implicit */unsigned long long int) max(((unsigned char)94), (((/* implicit */unsigned char) (signed char)110))));
                    arr_26 [i_6 + 2] [i_7] [i_7] [i_6] = ((/* implicit */_Bool) (-(((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32767))) < (18341939997441425205ULL))), (((((/* implicit */_Bool) (short)-5)) && (((/* implicit */_Bool) var_3)))))))));
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (~(((/* implicit */int) min((arr_23 [i_6 + 1]), (arr_23 [i_6 + 2])))))))));
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_22 [i_6] [(_Bool)1] [i_6 + 2]))) | (((/* implicit */int) arr_22 [i_6 + 2] [i_7] [i_8]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 1; i_9 < 18; i_9 += 4) 
                    {
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned short)12143), (((/* implicit */unsigned short) arr_23 [i_6]))))) % ((~(((/* implicit */int) (short)-23429))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_6 + 1] [i_9 + 2] [i_6] [i_9]))) : (max((((/* implicit */unsigned long long int) min(((unsigned char)0), (arr_21 [i_6 + 1])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)111))) & (var_4)))))));
                        var_21 = ((/* implicit */unsigned int) (-(min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [15LL] [i_6] [i_8])) ? (((/* implicit */int) arr_29 [16U] [i_7] [i_8] [i_6])) : (((/* implicit */int) (unsigned short)0))))), (min((386312354236814453LL), (((/* implicit */long long int) (_Bool)1))))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 4) 
                        {
                            var_22 = ((/* implicit */short) (_Bool)1);
                            arr_32 [i_6] [i_7] [i_6] [i_7] [i_10] |= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) max(((unsigned char)38), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */int) (signed char)(-127 - 1))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)28)) : (((/* implicit */int) (_Bool)1))))))));
                        }
                        for (unsigned short i_11 = 0; i_11 < 20; i_11 += 1) 
                        {
                            var_23 = ((/* implicit */short) (-(((((/* implicit */unsigned long long int) (((_Bool)1) ? (arr_27 [i_6] [i_9 - 1] [i_8] [i_9 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))) / (min((((/* implicit */unsigned long long int) arr_21 [(unsigned short)8])), (arr_35 [i_11] [i_9] [i_9] [i_6] [i_7] [i_6])))))));
                            var_24 = ((/* implicit */long long int) ((short) var_0));
                        }
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_24 [i_6 + 2] [i_6]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_1)))))))) ? ((~(((/* implicit */int) arr_29 [i_6] [i_7] [i_8] [i_6])))) : (((/* implicit */int) ((short) ((unsigned short) arr_29 [i_6] [i_6] [i_8] [i_6]))))));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2361449424U)) ? (((/* implicit */int) (unsigned short)20915)) : (((/* implicit */int) (signed char)42))))) / (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_8])) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) (unsigned short)18012))))), (((arr_20 [i_9]) >> (((((/* implicit */int) (signed char)-55)) + (57)))))))));
                    }
                    /* vectorizable */
                    for (short i_12 = 0; i_12 < 20; i_12 += 1) 
                    {
                        var_27 = ((/* implicit */int) (-(arr_20 [i_6 + 1])));
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_27 [(signed char)15] [(_Bool)1] [i_8] [i_12])));
                    }
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */_Bool) ((unsigned long long int) var_7));
    var_30 = ((/* implicit */unsigned int) var_6);
    var_31 = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned char)79)) : (max((((/* implicit */int) var_2)), (((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_7))))))));
}

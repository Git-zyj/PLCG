/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26002
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */int) (unsigned short)25659);
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_1 [i_0]), (arr_1 [i_0])))) ? (max((arr_2 [i_0]), (arr_2 [i_0]))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_1 [10LL])) ? (((/* implicit */unsigned long long int) 2430096195U)) : (arr_1 [6ULL]))))))));
        var_17 &= ((/* implicit */long long int) (-(max((arr_1 [(_Bool)0]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) /* same iter space */
        {
            var_18 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_7 [i_1])), (arr_8 [i_1] [i_2] [i_2])))) ? (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) arr_7 [2])) : (arr_8 [i_1] [i_1] [i_1]))) : (((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_8 [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
            var_19 = ((/* implicit */unsigned int) arr_6 [i_1]);
        }
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) /* same iter space */
        {
            var_20 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)28)) / (((/* implicit */int) (unsigned char)46)))))));
            /* LoopNest 3 */
            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                for (long long int i_5 = 1; i_5 < 16; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        {
                            var_21 = (+(max((arr_17 [i_5 - 1] [i_5 - 1] [i_5 + 2] [i_5 - 1] [i_1]), (((/* implicit */unsigned int) arr_12 [i_5 - 1] [i_5 - 1] [i_5 + 2] [i_5 - 1])))));
                            var_22 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 1152780767118491648LL)) ? (-9223372036854775798LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)46))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_16 [i_5 - 1] [i_1] [i_6] [i_6] [i_5 - 1])))))));
                            var_23 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) -1557513387)) : (14270275158519006795ULL)))) ? ((~(arr_15 [i_1] [i_1] [16LL] [i_5 + 2] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_12 [i_5 + 3] [i_5 + 3] [i_5 - 1] [i_5 + 2]))))));
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((arr_15 [i_4] [i_4] [i_5 - 1] [i_5] [i_4]) < (arr_15 [i_1] [i_3] [i_5 - 1] [8ULL] [i_3]))) ? (((unsigned long long int) arr_15 [i_1] [i_1] [i_5 - 1] [i_1] [i_3])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_15 [i_1] [i_3] [i_5 - 1] [i_5 - 1] [i_3])))))))));
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */long long int) (!(((1557513386) >= (((/* implicit */int) (short)7418))))));
        }
        var_26 = ((/* implicit */long long int) max((((((((/* implicit */_Bool) arr_19 [i_1] [(unsigned char)15] [i_1])) ? (1864871077U) : (arr_17 [i_1] [i_1] [i_1] [i_1] [(unsigned char)10]))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) arr_10 [10LL])) : (((/* implicit */int) (short)3127))))))), (((((/* implicit */_Bool) (unsigned char)46)) ? (arr_19 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1])))))));
    }
    for (long long int i_7 = 0; i_7 < 18; i_7 += 2) 
    {
        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) 3859988308U))));
        arr_24 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_7])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_7])))))) ? (((/* implicit */int) ((arr_11 [i_7]) >= (arr_11 [i_7])))) : (((/* implicit */int) ((arr_17 [i_7] [i_7] [(signed char)16] [i_7] [i_7]) >= (((((/* implicit */_Bool) (signed char)102)) ? (arr_19 [i_7] [i_7] [i_7]) : (arr_5 [i_7]))))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_8 = 2; i_8 < 16; i_8 += 2) 
    {
        for (unsigned short i_9 = 0; i_9 < 18; i_9 += 3) 
        {
            {
                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (-(1638607298U))))));
                var_29 *= min((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1557513394)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)8))) : (var_4)))) ? (((((/* implicit */_Bool) 1424393620U)) ? (((/* implicit */unsigned long long int) arr_14 [i_8] [i_8] [i_8 - 1])) : (17946233466348303517ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)1)))))));
                /* LoopNest 3 */
                for (unsigned char i_10 = 3; i_10 < 17; i_10 += 2) 
                {
                    for (long long int i_11 = 1; i_11 < 17; i_11 += 3) 
                    {
                        for (signed char i_12 = 0; i_12 < 18; i_12 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_8])) ? (((/* implicit */int) arr_25 [i_12])) : ((+(((/* implicit */int) arr_10 [i_9]))))));
                                var_31 = arr_36 [i_9];
                                var_32 = 1509492821U;
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_33 += ((/* implicit */signed char) var_9);
    var_34 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (-(var_10)))) ? (var_0) : (((/* implicit */long long int) var_10))))));
}

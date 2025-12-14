/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52425
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
    for (int i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned int) (+(((/* implicit */int) var_2)))))));
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((((/* implicit */_Bool) (-(arr_2 [i_0] [i_0])))) ? (((((/* implicit */_Bool) (unsigned short)57201)) ? (18026850119348068334ULL) : (((/* implicit */unsigned long long int) 5300640838886444650LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [(unsigned char)14])) ^ (((/* implicit */int) arr_1 [i_0])))))))));
    }
    for (int i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) -1)) && ((_Bool)1))) ? ((-(((/* implicit */int) arr_0 [(short)2])))) : (((((/* implicit */_Bool) arr_0 [16])) ? (((/* implicit */int) arr_0 [(unsigned short)2])) : (((/* implicit */int) arr_0 [10ULL]))))));
        arr_9 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_6 [i_1] [i_1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [14] [14])) ? (arr_6 [i_1] [i_1]) : (((/* implicit */unsigned long long int) -5300640838886444650LL)))))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned char) max((var_12), (((/* implicit */long long int) (signed char)27)))))), (((((((/* implicit */_Bool) (unsigned short)7735)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))) + (((/* implicit */int) arr_0 [(short)4]))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    {
                        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_3]))))) ? ((-(((/* implicit */int) (unsigned char)10)))) : (((((/* implicit */int) ((arr_14 [i_4] [i_3] [i_2] [i_1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)26)))))) << (((((((((/* implicit */_Bool) (unsigned char)10)) ? (-5300640838886444631LL) : (-6113547478990885873LL))) + (5300640838886444662LL))) - (26LL)))))));
                        /* LoopSeq 1 */
                        for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
                        {
                            arr_20 [i_3] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_2] [i_5]))));
                            var_17 = ((/* implicit */int) ((((/* implicit */long long int) (-((+(((/* implicit */int) (unsigned char)11))))))) == (arr_4 [i_2] [i_5])));
                        }
                        /* LoopSeq 2 */
                        for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned char) (short)16697);
                            arr_24 [i_3] [(short)15] [i_3] = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_23 [i_3] [i_2] [i_2] [i_2] [(unsigned char)3] [(unsigned char)3] [i_6])))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_3] [(unsigned short)12] [5] [i_3] [i_3] [i_1] [i_3])))))));
                        }
                        for (unsigned long long int i_7 = 2; i_7 < 16; i_7 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(13263365235008102327ULL)))) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61091))))), (((/* implicit */long long int) var_6))))))))));
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (-(max(((~(((/* implicit */int) (unsigned char)241)))), (((/* implicit */int) var_7)))))))));
                        }
                    }
                } 
            } 
        }
    }
    /* LoopNest 2 */
    for (unsigned short i_8 = 0; i_8 < 23; i_8 += 1) 
    {
        for (short i_9 = 0; i_9 < 23; i_9 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (short i_10 = 0; i_10 < 23; i_10 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 23; i_11 += 2) 
                    {
                        for (unsigned char i_12 = 2; i_12 < 22; i_12 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12] [i_12 + 1]))) > (arr_43 [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_12 + 1] [i_12] [i_12 + 1]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_12 - 2] [i_12 - 2] [i_12] [i_12] [i_12 - 2] [i_12 - 2]))))) : (((((/* implicit */int) (signed char)-35)) | (((/* implicit */int) arr_42 [i_12 + 1] [i_12 - 1] [i_12] [i_12 - 1] [i_12 - 1] [i_12 - 2]))))));
                                var_22 = ((/* implicit */unsigned int) (((+(var_3))) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_31 [i_11])) <= (((/* implicit */int) (unsigned char)4)))))) > (((((/* implicit */_Bool) arr_29 [i_11] [i_12 - 1])) ? (((/* implicit */long long int) arr_36 [i_8] [i_8] [i_8])) : (arr_35 [i_10] [i_8]))))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_31 [i_8])) ? ((~(((unsigned long long int) arr_33 [i_9] [i_9])))) : (((/* implicit */unsigned long long int) max((arr_43 [i_8] [i_9] [i_8] [i_10] [i_10] [22]), (arr_43 [i_10] [i_10] [i_9] [i_9] [i_8] [i_8]))))));
                }
                arr_44 [i_8] [i_9] [0LL] = min((((/* implicit */int) ((var_3) >= (((/* implicit */int) arr_29 [i_8] [i_8]))))), ((((-(((/* implicit */int) (unsigned char)243)))) / ((+(((/* implicit */int) (unsigned short)27779)))))));
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 23; i_13 += 2) 
                {
                    for (short i_14 = 0; i_14 < 23; i_14 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_47 [i_8] [i_9] [i_8] [i_14])) ? (arr_47 [i_8] [i_8] [i_8] [6]) : (((/* implicit */int) (unsigned char)15))))), (var_0)));
                            /* LoopSeq 1 */
                            for (unsigned int i_15 = 0; i_15 < 23; i_15 += 1) 
                            {
                                var_25 = ((/* implicit */unsigned long long int) max(((-(((((/* implicit */long long int) ((/* implicit */int) var_7))) / (var_12))))), (((/* implicit */long long int) (-(((/* implicit */int) arr_42 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))))));
                                var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (((+(((((/* implicit */_Bool) arr_38 [i_14] [i_15])) ? (((/* implicit */unsigned int) arr_33 [i_9] [i_15])) : (var_0))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((arr_36 [i_9] [i_13] [i_15]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_13] [i_13]))))))))))));
                                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_32 [i_8])) ? (arr_32 [i_13]) : (arr_32 [i_9]))) << (((((((/* implicit */_Bool) -5300640838886444651LL)) ? (arr_32 [i_13]) : (((/* implicit */int) arr_30 [i_8] [i_8])))) - (362079949))))))));
                                var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_15] [i_14] [i_13] [2LL])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_8] [i_13] [i_14] [i_15]))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}

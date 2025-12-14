/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5490
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
    var_13 = ((/* implicit */unsigned short) var_0);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), (var_4)))) | (((/* implicit */int) arr_0 [i_0] [i_0]))))) >= (min((((/* implicit */long long int) (unsigned short)11953)), (274877644800LL)))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) min(((signed char)-11), (min((((/* implicit */signed char) arr_1 [i_0])), (arr_0 [i_0] [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */short) var_5);
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            var_15 -= ((/* implicit */short) (+(-274877644801LL)));
                            arr_17 [i_2] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) max(((+(arr_13 [i_2] [i_2] [i_2] [i_4] [i_5]))), (((/* implicit */unsigned long long int) arr_16 [i_1] [i_2] [i_3] [i_4] [i_5]))));
                            var_16 = ((/* implicit */int) min((var_16), (max(((+(((/* implicit */int) arr_12 [i_2] [i_2] [i_2])))), (((/* implicit */int) min((arr_12 [i_1] [i_1] [i_1]), (var_9))))))));
                            var_17 = ((/* implicit */unsigned char) max((arr_5 [i_1] [i_3]), (((((/* implicit */_Bool) (signed char)-18)) ? (6637814709294694938ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24144)))))));
                        }
                        arr_18 [i_2] = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 7553428195328275506ULL)) ? (((/* implicit */int) arr_0 [i_3] [i_4])) : (((/* implicit */int) var_10))))))) ? (var_1) : ((-(((/* implicit */int) (unsigned char)250)))));
                        var_18 = ((/* implicit */short) (-(((((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */unsigned long long int) var_6)) : (var_3))) << (((((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19344))) : (arr_5 [i_4] [i_2]))) - (19329ULL)))))));
                        /* LoopSeq 1 */
                        for (int i_6 = 2; i_6 < 7; i_6 += 3) 
                        {
                            var_19 = ((/* implicit */long long int) max((max((arr_21 [i_2] [i_2] [i_3] [i_4] [i_6] [i_6 + 1]), (((/* implicit */short) (unsigned char)93)))), (((/* implicit */short) (!(((/* implicit */_Bool) (short)18590)))))));
                            var_20 = ((/* implicit */unsigned char) (signed char)-11);
                            var_21 = ((/* implicit */short) arr_0 [i_6 - 2] [i_2]);
                        }
                        arr_22 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) (signed char)56))))))) ? (((/* implicit */int) (unsigned char)120)) : (((((/* implicit */_Bool) (-(arr_8 [i_2] [i_2])))) ? (((((/* implicit */_Bool) (short)-5629)) ? (((/* implicit */int) var_10)) : (arr_10 [i_4] [i_3] [i_1] [i_1]))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)144)) || (((/* implicit */_Bool) 274877644801LL)))))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-12964)) ? (arr_7 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_1])))))) ? (min((18446744073709551604ULL), (10893315878381276094ULL))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_14 [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)69)) : (((/* implicit */int) var_0)))))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 4) 
            {
                {
                    arr_30 [i_8] [i_8] [i_8] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_7] [i_7 - 1] [i_8])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_8] [i_7 - 1] [i_7 - 1] [i_7 - 1])) ? (((/* implicit */unsigned int) arr_10 [i_8] [i_7 - 1] [i_7 - 1] [i_7 - 1])) : (3874959962U)))) : (((((/* implicit */_Bool) arr_7 [i_9] [i_7 - 1] [i_8])) ? (((/* implicit */unsigned long long int) 3874959974U)) : (arr_5 [i_7 - 1] [i_7])))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-12)) | (((/* implicit */int) (short)6875))))) ? (((/* implicit */unsigned long long int) var_1)) : ((~(((((/* implicit */_Bool) (short)5624)) ? (((/* implicit */unsigned long long int) var_5)) : (var_3)))))));
                }
            } 
        } 
        arr_31 [i_7 - 1] = ((/* implicit */unsigned char) arr_4 [i_7 - 1]);
        var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_28 [(short)0]))) ? (((/* implicit */long long int) ((/* implicit */int) (short)32757))) : (min((((/* implicit */long long int) (unsigned char)46)), (-274877644802LL))))))));
    }
    var_25 = ((/* implicit */unsigned short) var_10);
    var_26 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((746065846U) >> (((var_5) - (1268491703U)))))) : (min((((/* implicit */unsigned long long int) (short)-5632)), (var_8))))) | (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_10)))), (((/* implicit */int) var_2)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199419
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (int i_3 = 4; i_3 < 19; i_3 += 3) 
                {
                    {
                        var_12 |= ((/* implicit */short) (signed char)20);
                        arr_13 [i_0] [i_1] [0] |= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_1] [i_2])))) + (((((/* implicit */_Bool) min((var_8), (3323144971880425709ULL)))) ? (((arr_6 [i_0] [i_1]) & (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))))) : (((/* implicit */long long int) arr_8 [i_3 - 1] [i_3 - 1] [i_3 - 1]))))));
                        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) max((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [19U])), (((arr_10 [i_2] [i_2] [i_1] [(short)5]) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)181)))))))));
                    }
                } 
            } 
        } 
        arr_14 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)20))) : (((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)0))))) : ((+(arr_5 [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (int i_4 = 4; i_4 < 16; i_4 += 2) 
    {
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) arr_10 [i_4 - 1] [i_4 - 3] [i_4] [i_4]))));
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (+(((int) 15123599101829125907ULL)))))));
        arr_17 [i_4 - 4] |= ((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_4 - 1]))));
    }
    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((3323144971880425709ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) 1022740341U)) < ((~(-5991939961938536902LL))))))))))));
        /* LoopSeq 2 */
        for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            var_17 = ((((((/* implicit */_Bool) (short)1024)) ? (8945441202260654807ULL) : (((/* implicit */unsigned long long int) arr_6 [i_5] [i_5])))) <= (max((((/* implicit */unsigned long long int) (+(arr_8 [i_5] [i_5] [i_5])))), (((arr_10 [i_5] [i_5] [i_5] [i_5]) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
            var_18 |= ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_0 [i_5])), (((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)93))) : (arr_3 [i_6])))));
            var_19 = ((/* implicit */short) (+(((/* implicit */int) (signed char)7))));
            arr_24 [i_5] [i_5] |= ((/* implicit */signed char) 2128247826595321059LL);
            var_20 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5] [i_6] [i_6] [i_6]))) - (arr_6 [i_5] [i_5]))) : ((+(arr_23 [i_5] [i_5] [i_5])))))));
        }
        for (short i_7 = 1; i_7 < 16; i_7 += 2) 
        {
            arr_28 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)20)) ? (arr_8 [i_5] [i_5] [i_7 + 1]) : (((/* implicit */int) (_Bool)0))));
            arr_29 [i_5] [i_5] [i_5] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (signed char)32)) < (((/* implicit */int) (short)0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) -2031395853)) || (((/* implicit */_Bool) -2132150330)))) || (((/* implicit */_Bool) max((arr_27 [i_5]), (var_0)))))))) : (262143U)));
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_19 [i_7]) > (((/* implicit */long long int) ((/* implicit */int) var_4)))))), ((+(var_8)))))) ? (((((unsigned int) var_3)) % (((/* implicit */unsigned int) ((/* implicit */int) ((arr_9 [i_7] [i_7] [i_7] [i_5] [i_5]) >= (((/* implicit */int) arr_18 [(short)4])))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_7] [i_7])) ? (((/* implicit */int) ((arr_6 [19LL] [i_7]) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (950739822))))));
            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 16607223597863528952ULL)) ? (((/* implicit */int) (short)-1024)) : (arr_9 [i_5] [(unsigned short)4] [(unsigned short)4] [i_5] [i_5]))))))) * (((((/* implicit */_Bool) (short)21988)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)93))))) : (((arr_9 [i_5] [i_5] [i_5] [i_5] [i_5]) / (((/* implicit */int) (unsigned char)69)))))))))));
        }
        var_23 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)27761))));
        var_24 |= ((/* implicit */short) (~((+(1365182769)))));
    }
    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) ((short) -284322068))) != (((/* implicit */int) ((unsigned char) (short)-7352)))))))))));
}

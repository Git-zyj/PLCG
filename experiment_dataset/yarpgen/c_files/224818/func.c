/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224818
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
    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) var_12)), (var_3))) & (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))))))))));
    var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (short)32767)), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (var_3)))) ? (((((/* implicit */_Bool) 7934909881206644236LL)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) > (((/* implicit */unsigned long long int) var_7))))))))));
    var_18 = ((/* implicit */unsigned short) var_1);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_4 [(unsigned short)9] [(unsigned short)9] |= ((/* implicit */_Bool) arr_3 [i_0] [(_Bool)1]);
        arr_5 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(arr_2 [i_0] [i_0]))))));
        arr_6 [i_0] = ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) (short)17481)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_3 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -1LL)) >= (arr_2 [i_0] [i_0]))))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])) : (arr_2 [i_0] [(unsigned short)0])))) ? (((/* implicit */int) (unsigned char)183)) : (((/* implicit */int) arr_1 [i_0]))))));
        arr_7 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0]))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_6)) ? (arr_9 [i_1] [i_1]) : (arr_9 [i_1] [i_1])))));
        arr_11 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_1] [i_1]))));
        /* LoopNest 3 */
        for (short i_2 = 1; i_2 < 22; i_2 += 3) 
        {
            for (unsigned int i_3 = 2; i_3 < 22; i_3 += 2) 
            {
                for (unsigned char i_4 = 1; i_4 < 24; i_4 += 2) 
                {
                    {
                        arr_19 [i_1] [i_1] [i_2] [i_4] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (((+(arr_18 [i_2] [i_2] [i_3]))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_2]))))))))), (((arr_16 [i_3 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 2]) / (arr_17 [13] [13])))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
                        {
                            arr_23 [i_5] [7ULL] [i_2] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_14 [i_1] [i_3] [i_4] [17U])) == (arr_17 [i_1] [i_1])));
                            arr_24 [i_1] [i_2 + 1] [i_2] [i_4 - 1] [i_5] = ((((/* implicit */_Bool) arr_12 [i_2] [i_2])) ? (arr_12 [i_2] [i_2]) : (arr_12 [i_2] [i_2]));
                        }
                        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
                        {
                            arr_27 [i_2] [i_2] [(short)12] [i_6] = ((/* implicit */unsigned long long int) (short)-17481);
                            arr_28 [i_2] = ((/* implicit */unsigned int) ((short) ((((((/* implicit */_Bool) var_0)) ? (arr_16 [i_1] [i_2] [i_4] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_1] [i_3] [i_3] [i_2] [i_2] [(short)23] [i_1]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3 + 3] [i_3 + 3]))))));
                            arr_29 [i_6] [i_4 + 1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) ((min(((~(arr_14 [19LL] [i_2] [i_1] [i_4]))), (arr_22 [i_1] [i_2] [i_3 + 3] [i_4] [i_6]))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) ((arr_18 [i_2] [i_2 - 1] [i_2]) / (-739985482551053650LL))))))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (short i_7 = 0; i_7 < 16; i_7 += 2) 
    {
        arr_33 [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_26 [i_7] [i_7] [i_7]) >= (((/* implicit */long long int) var_0)))))) & (min((arr_16 [i_7] [i_7] [i_7] [i_7]), (((/* implicit */unsigned long long int) (short)-27711))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_15 [(unsigned char)16] [i_7]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 7934909881206644226LL))))))))) : (max((((long long int) 12LL)), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_7] [(_Bool)1] [i_7])) ? (((/* implicit */int) arr_31 [i_7])) : (((/* implicit */int) arr_1 [i_7])))))))));
        arr_34 [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_10))) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_7]))) : (((((/* implicit */long long int) arr_9 [i_7] [22LL])) % (arr_26 [i_7] [(_Bool)1] [i_7])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_7]))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])) ? (arr_21 [(unsigned char)21]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)12)))))) & (((((/* implicit */_Bool) arr_16 [i_7] [i_7] [i_7] [i_7])) ? (arr_16 [i_7] [(_Bool)1] [i_7] [i_7]) : (arr_16 [i_7] [i_7] [i_7] [i_7])))))));
        arr_35 [i_7] [i_7] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (short)32763)), (((((/* implicit */unsigned long long int) var_11)) % (((arr_2 [i_7] [i_7]) & (arr_16 [i_7] [(unsigned short)16] [i_7] [i_7])))))));
        arr_36 [i_7] = arr_15 [(unsigned char)12] [(unsigned char)12];
    }
    var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((var_6) < (((/* implicit */long long int) ((((/* implicit */_Bool) 1LL)) ? (var_0) : (var_14)))))))));
}

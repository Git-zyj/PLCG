/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34010
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((long long int) (unsigned char)158)))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_12 = (+(((((/* implicit */_Bool) var_9)) ? (arr_6 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(short)8] [(_Bool)0]))))));
            arr_9 [i_0] [i_0] &= ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_0] [i_0])) < (((/* implicit */int) var_3))));
        }
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_10 [(signed char)18] [i_0] [i_2])))))));
            var_14 = ((/* implicit */unsigned char) min((((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)6925))))), (arr_11 [i_0] [i_2] [(signed char)17])));
            arr_13 [i_0] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [(unsigned char)12])) ? (((/* implicit */int) arr_10 [i_0] [i_2] [(_Bool)1])) : (((/* implicit */int) (signed char)-74))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_2])) ? (((/* implicit */int) arr_11 [i_0] [8U] [i_2])) : (((/* implicit */int) arr_8 [i_0] [5U]))))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)28)))))))) || (((/* implicit */_Bool) var_6))));
            arr_14 [i_0] [i_2] = ((/* implicit */unsigned int) max((((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (arr_6 [(_Bool)1] [(unsigned short)0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0])))))) / ((((_Bool)0) ? (arr_1 [5LL]) : (((/* implicit */long long int) arr_6 [i_0] [i_0])))))), (min((((((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_1 [i_2]))), (9223372036854775807LL)))));
        }
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            var_15 *= ((unsigned char) (_Bool)1);
            var_16 *= ((/* implicit */unsigned int) 1688284495967825438LL);
        }
        arr_17 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) min((arr_2 [i_0]), (arr_2 [i_0])))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
    }
    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_6 = 4; i_6 < 18; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) 
                {
                    {
                        arr_30 [i_4] [i_5] [i_6] [(_Bool)1] [(signed char)15] [18ULL] = ((/* implicit */unsigned int) min((((long long int) 1336773826519078299LL)), (min(((-(arr_25 [(short)5] [i_5]))), (((/* implicit */long long int) (unsigned short)50223))))));
                        var_17 -= ((/* implicit */unsigned int) (!(((((/* implicit */unsigned int) (+(((/* implicit */int) arr_22 [i_5]))))) <= (min((((/* implicit */unsigned int) (signed char)-119)), (arr_19 [i_4] [i_4])))))));
                        var_18 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_4)), (arr_27 [i_4] [i_5] [i_6] [i_7])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-119)), ((unsigned short)16714))))) : (13536623806277209554ULL)))) ? (min((arr_26 [i_6 - 4] [19ULL] [i_7] [i_7]), (arr_26 [i_6 + 1] [i_5] [(_Bool)1] [8]))) : (((/* implicit */long long int) (-((+(((/* implicit */int) arr_27 [(unsigned char)20] [i_5] [(unsigned char)20] [i_7])))))))));
                        arr_31 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-110)) ? (min((arr_28 [i_4] [i_5] [i_6 - 1] [i_6] [i_7] [i_7]), (((/* implicit */unsigned int) (unsigned short)48838)))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (arr_29 [(_Bool)1] [i_5])));
        }
        var_20 = ((long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3166798480U)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_4] [(unsigned char)2])))))), (min((arr_29 [18ULL] [i_4]), (((/* implicit */unsigned long long int) var_7))))));
    }
    /* LoopNest 2 */
    for (signed char i_8 = 0; i_8 < 21; i_8 += 2) 
    {
        for (signed char i_9 = 0; i_9 < 21; i_9 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) ((short) arr_34 [i_8] [i_9] [i_9]));
                arr_37 [i_8] |= ((/* implicit */signed char) (((!(((/* implicit */_Bool) 576460752303423487LL)))) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_29 [i_8] [i_9])) ? (((/* implicit */int) arr_21 [i_8] [i_8] [i_8])) : (((/* implicit */int) var_1))))))) : (max((((((/* implicit */_Bool) arr_24 [i_8] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_18 [(short)10]))), (((/* implicit */long long int) min((((/* implicit */unsigned short) arr_36 [i_8] [3LL] [i_9])), ((unsigned short)52758))))))));
            }
        } 
    } 
}

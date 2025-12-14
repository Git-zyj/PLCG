/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205139
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
    var_18 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))))) ? ((((_Bool)1) ? (-9158335027579860200LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (-1903840260) : (((/* implicit */int) (unsigned char)128))))))) : (((/* implicit */long long int) max((var_2), (((((/* implicit */_Bool) var_17)) ? (var_8) : (2864075969U))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        var_19 = ((/* implicit */int) (-((-(2660348983U)))));
        var_20 = ((/* implicit */short) arr_1 [(signed char)3] [i_0 + 1]);
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [19])) ? (-1989031258) : (((/* implicit */int) (short)255))))), (21U)))) : ((-(((((/* implicit */_Bool) arr_1 [i_0] [(short)8])) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (arr_1 [i_0] [17ULL])))))));
        var_22 ^= ((/* implicit */unsigned short) min((((/* implicit */long long int) (unsigned char)0)), (-9158335027579860200LL)));
    }
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_23 = ((/* implicit */long long int) (!(max(((!(((/* implicit */_Bool) arr_3 [i_1])))), ((!(((/* implicit */_Bool) -1903840260))))))));
        var_24 = arr_4 [(_Bool)1] [i_1];
        var_25 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0))))) >= (((arr_4 [i_1] [i_1]) & (((/* implicit */long long int) arr_3 [i_1]))))))), (min((((arr_4 [i_1] [i_1]) << (((arr_3 [17U]) - (2356995973U))))), (((/* implicit */long long int) arr_5 [i_1]))))));
    }
    for (long long int i_2 = 3; i_2 < 13; i_2 += 2) 
    {
        var_26 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) 17U))));
        var_27 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned short)65535))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)128)), (2742919668U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-12382)) ? (4294967274U) : (4294967275U)))) : (arr_1 [i_2] [i_2 - 3]))) : (((/* implicit */unsigned long long int) 1134851951))));
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_28 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) & (arr_3 [i_3])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [(short)11]))))) : ((-(arr_3 [i_2]))))))));
                    var_29 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1634618312U)) ? (((/* implicit */int) arr_8 [4LL] [i_3])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) : (max((9223372036854775807LL), (((/* implicit */long long int) 2396230077U)))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_2] [i_2] [i_4])))))));
                    var_30 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [9LL] [i_3]))));
                    var_31 &= ((/* implicit */unsigned long long int) (~(max((max((((/* implicit */long long int) (unsigned short)64798)), (-1911749676564983492LL))), (((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_4])))))))));
                }
            } 
        } 
    }
}

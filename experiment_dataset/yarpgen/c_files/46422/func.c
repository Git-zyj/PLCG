/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46422
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((2935799770533613676LL) + (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) || (((/* implicit */_Bool) (-(arr_2 [i_1] [i_0]))))));
                arr_5 [i_1] [i_0] = arr_4 [i_0] [i_0] [i_0];
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_2]))))) : (arr_8 [i_2] [i_2])));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_2])), (arr_7 [i_2]))))))) ? (((/* implicit */int) arr_6 [i_2])) : (((((/* implicit */_Bool) arr_6 [i_2])) ? (((((/* implicit */int) (unsigned char)124)) / (((/* implicit */int) arr_6 [i_2])))) : (((/* implicit */int) arr_7 [i_2]))))));
        arr_9 [i_2] = ((/* implicit */long long int) arr_7 [i_2]);
    }
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)16942)), (var_3)))) ? (((2533942799U) >> (((((/* implicit */int) var_4)) - (53066))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) ^ (var_9)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12)))) : (min((((/* implicit */int) var_11)), (((((/* implicit */int) var_16)) + (((/* implicit */int) var_12))))))));
    var_21 = ((/* implicit */signed char) var_6);
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        for (short i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            {
                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [7LL] [i_3])) ? (arr_10 [i_3]) : (arr_10 [i_3])))), (min((((/* implicit */unsigned long long int) arr_6 [i_3])), (5285699437824329663ULL))))) : (((/* implicit */unsigned long long int) arr_10 [i_3]))));
                /* LoopSeq 2 */
                for (unsigned int i_5 = 1; i_5 < 18; i_5 += 1) 
                {
                    var_23 ^= ((/* implicit */_Bool) arr_14 [i_4]);
                    var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) (!(arr_11 [i_5] [(unsigned char)8])))) | (((/* implicit */int) arr_6 [i_4]))))) ^ (1257287311U)));
                }
                for (short i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    arr_21 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) 2232609416344904160LL)) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) (short)-32754)))) << (((((/* implicit */int) min((arr_6 [18ULL]), (((/* implicit */short) arr_16 [i_6] [(unsigned short)2] [(unsigned short)2]))))) - (151))))) < (((((((/* implicit */int) arr_15 [i_4] [i_4])) & (((/* implicit */int) var_2)))) + (((/* implicit */int) min(((unsigned short)13638), (arr_19 [i_3] [i_4] [i_4] [i_4]))))))));
                    var_25 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1850862706015906403LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)5156))) : (524287U)))) ? (min((var_13), (((/* implicit */int) arr_16 [i_3] [i_4] [i_4])))) : (((((/* implicit */int) var_16)) >> (((((/* implicit */int) arr_12 [i_4])) - (47990))))))) * (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_3] [11ULL] [11ULL])) || (((/* implicit */_Bool) var_8)))))));
                }
                var_26 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)29674)) ? (((/* implicit */int) arr_20 [i_3] [i_4])) : (((/* implicit */int) arr_19 [(_Bool)1] [i_4] [i_4] [i_4])))) + (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [(short)4] [i_4] [(unsigned short)4] [i_4])) || (arr_20 [i_4] [(unsigned short)13]))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_13 [i_3] [i_3] [i_4]) : (arr_13 [i_3] [i_3] [3U])))) ? (((/* implicit */int) arr_15 [i_3] [i_4])) : (((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_7 [i_3])))))))));
                arr_22 [i_3] [i_3] = ((/* implicit */_Bool) (~(((var_8) >> (((/* implicit */int) arr_11 [i_3] [i_3]))))));
                arr_23 [i_3] [i_3] = ((/* implicit */long long int) ((((((/* implicit */int) arr_20 [i_3] [i_3])) / (arr_10 [i_4]))) / (((/* implicit */int) arr_19 [i_3] [i_4] [i_3] [(short)12]))));
            }
        } 
    } 
}

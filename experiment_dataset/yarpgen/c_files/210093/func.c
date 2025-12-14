/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210093
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_18 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_0 [i_0] [(unsigned short)17])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */_Bool) var_11)) ? (arr_0 [(_Bool)1] [11U]) : (arr_0 [(unsigned short)18] [14ULL])))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_19 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (((signed char) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_0 [(short)16] [(unsigned char)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
            arr_4 [(unsigned char)16] [19] [(unsigned char)11] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (-(var_13)))) ? (((/* implicit */int) arr_2 [(signed char)12] [i_0] [i_0])) : (((var_17) / (((/* implicit */int) arr_1 [10LL]))))))));
            arr_5 [(unsigned short)23] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + ((((_Bool)1) ? (arr_0 [11U] [(signed char)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) >= (((/* implicit */unsigned long long int) arr_3 [21LL]))));
            var_20 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)80)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-97)))))) : (max((((/* implicit */unsigned long long int) (_Bool)0)), (arr_0 [(unsigned char)15] [(signed char)7]))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_8)), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_14))))))));
        }
        arr_6 [(short)13] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) & (var_2)))) ? (((/* implicit */int) (!(var_7)))) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-35))) : ((~((~(arr_3 [12LL]))))));
        arr_7 [11LL] [(unsigned char)0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [(_Bool)1] [8] [11U]))))));
    }
    var_21 = ((var_15) & (var_15));
}

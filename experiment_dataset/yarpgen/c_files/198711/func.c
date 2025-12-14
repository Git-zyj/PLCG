/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198711
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
    var_17 = ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2))))), (var_0))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))));
    /* LoopSeq 4 */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0])) ? (arr_3 [i_0]) : (arr_0 [i_0 + 3] [i_0]))) * (arr_0 [i_0] [i_0])));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_2 [i_0 + 2] [i_0 + 2])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [17ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0] [i_0])))) ? (max((arr_3 [i_0]), (arr_0 [i_0 + 2] [i_0]))) : (max((0ULL), (((/* implicit */unsigned long long int) (signed char)16))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_1 [i_1]), (arr_2 [i_1] [i_1])))) ? (((((/* implicit */_Bool) arr_2 [i_1] [(signed char)2])) ? (arr_0 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1])))));
        var_18 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) max((arr_7 [0ULL]), (arr_1 [i_1])))) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_7 [i_1])))), (((((/* implicit */_Bool) arr_7 [(signed char)3])) ? (((((/* implicit */int) arr_1 [i_1])) * (((/* implicit */int) arr_1 [i_1])))) : (((/* implicit */int) arr_1 [i_1]))))));
        arr_9 [(signed char)9] = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_7 [i_1]), (arr_7 [i_1]))))) > (max((arr_0 [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_7 [i_1]))))))), (min((arr_6 [(signed char)2]), (arr_2 [i_1] [i_1])))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1])) | (((/* implicit */int) arr_6 [i_1]))))) ? (((/* implicit */int) arr_7 [i_1])) : (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_1 [i_1]))))))) ? (((((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_2 [(signed char)16] [i_1])))) ^ (((((/* implicit */_Bool) arr_2 [14ULL] [i_1])) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_1 [i_1])))))) : (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) arr_7 [(signed char)13])) : (((/* implicit */int) arr_2 [i_1] [i_1])))))))));
        /* LoopNest 3 */
        for (signed char i_2 = 2; i_2 < 11; i_2 += 1) 
        {
            for (signed char i_3 = 3; i_3 < 11; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    {
                        arr_16 [i_2] [i_2] [i_2] [i_4] [i_4] [2ULL] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))) - (arr_13 [i_1] [i_1] [i_1])));
                        arr_17 [i_1] [i_1] [i_3] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)106)) ? (18154275572823173184ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7)))))) ? (max((max((((/* implicit */unsigned long long int) arr_2 [i_1] [i_1])), (arr_13 [i_1] [(signed char)4] [i_1]))), (max((((/* implicit */unsigned long long int) arr_6 [(signed char)3])), (arr_3 [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_10 [i_2 - 1] [i_2 - 2] [i_2 + 2]), (max((arr_6 [i_1]), (arr_7 [i_1]))))))));
                        arr_18 [i_3] [i_3] [i_3 + 3] [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_6 [i_1])), (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_1]))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) /* same iter space */
    {
        arr_23 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_6 [i_5]), (arr_15 [i_5] [(signed char)2] [i_5] [4ULL])))) ? (max((max((((/* implicit */unsigned long long int) arr_7 [i_5])), (arr_20 [i_5] [12ULL]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */int) arr_10 [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_12 [i_5] [i_5] [i_5]))))))) : (((((/* implicit */_Bool) min((arr_6 [i_5]), (arr_14 [i_5] [i_5] [i_5])))) ? (((((/* implicit */_Bool) (signed char)-9)) ? (7987036149111123030ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)27))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_5] [i_5])))))));
        var_20 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 17452727172926216902ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)102))) : (0ULL)));
    }
    for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) /* same iter space */
    {
        arr_28 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-39)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))) : (17975874293380236229ULL)))) ? (max((arr_13 [(signed char)13] [(signed char)5] [(signed char)5]), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_6] [i_6] [i_6] [i_6])) + (((/* implicit */int) arr_26 [i_6]))))))) : (min((arr_19 [i_6]), (((/* implicit */unsigned long long int) arr_21 [i_6]))))));
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_6])) | (((/* implicit */int) arr_26 [i_6]))))) ? (((/* implicit */int) max((arr_1 [i_6]), (arr_1 [i_6])))) : (((((/* implicit */_Bool) arr_2 [i_6] [i_6])) ? (((/* implicit */int) arr_2 [i_6] [(signed char)0])) : (((/* implicit */int) arr_26 [i_6])))))))));
        var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)96))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)70)) ? (((/* implicit */int) (signed char)-55)) : (((/* implicit */int) (signed char)10))))) : (((((/* implicit */_Bool) arr_12 [12ULL] [i_6] [12ULL])) ? (((arr_19 [i_6]) & (arr_20 [(signed char)0] [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_6] [i_6] [i_6])))))));
    }
    var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-17)) ? (((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */int) (signed char)-52)) : (((/* implicit */int) (signed char)-101)))) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_0)));
}

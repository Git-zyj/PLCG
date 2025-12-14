/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241828
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
    var_10 |= ((((/* implicit */int) ((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) <= (((/* implicit */int) var_4))))) <= (((/* implicit */int) var_1)));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_11 += ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_0] [i_0]))) ? (min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))) : (max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))));
        var_12 = ((/* implicit */unsigned char) min(((((-(arr_2 [i_0]))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) / (((/* implicit */int) var_1))))))), (((((/* implicit */_Bool) max((arr_0 [i_0]), (arr_2 [0ULL])))) ? ((+(arr_0 [i_0]))) : (arr_0 [i_0])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0]) : (((arr_0 [i_0]) >> (((((/* implicit */int) (unsigned char)163)) - (101)))))));
            arr_5 [(short)9] [(short)9] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) (_Bool)1))));
            arr_6 [i_0] [7ULL] [i_1] = ((/* implicit */unsigned char) ((arr_2 [i_1]) - (arr_1 [i_0] [i_1])));
            arr_7 [i_0] [(unsigned char)11] [(unsigned char)11] = ((/* implicit */unsigned char) ((arr_4 [i_0] [i_1]) && (arr_4 [i_0] [i_0])));
        }
        arr_8 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (((~(arr_3 [i_0] [(unsigned char)9] [i_0]))) != (arr_1 [i_0] [i_0])))), (((max((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (_Bool)1)))) >> (((/* implicit */int) var_0))))));
    }
    for (short i_2 = 0; i_2 < 12; i_2 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_14 = ((/* implicit */unsigned long long int) (!((!((!(((/* implicit */_Bool) arr_1 [i_3] [i_3]))))))));
            arr_13 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min(((short)-1981), (((/* implicit */short) (unsigned char)152))))) && (((_Bool) var_6)))))) : (12654876225563479375ULL)));
        }
        arr_14 [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_2]))));
        arr_15 [i_2] = ((/* implicit */_Bool) ((unsigned char) (~(((arr_9 [i_2] [i_2]) | (arr_11 [i_2]))))));
    }
    for (short i_4 = 0; i_4 < 12; i_4 += 2) /* same iter space */
    {
        var_15 |= ((/* implicit */_Bool) ((arr_4 [i_4] [i_4]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4] [i_4]))) : (min((((/* implicit */unsigned long long int) arr_4 [i_4] [i_4])), (arr_2 [i_4])))));
        arr_18 [i_4] [(short)7] = ((((/* implicit */_Bool) (~(arr_1 [i_4] [i_4])))) ? (min(((~(var_6))), (((/* implicit */unsigned long long int) arr_4 [i_4] [i_4])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_11 [i_4]) != (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_17 [i_4])), (var_1))))))))));
        arr_19 [i_4] |= ((/* implicit */short) arr_11 [(_Bool)1]);
    }
    var_16 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) | (((/* implicit */int) var_5))))) > (((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))) * (var_6)))));
}

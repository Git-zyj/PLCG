/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209040
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_3)), (var_12)))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))) ? (max((arr_0 [(signed char)4]), (((/* implicit */unsigned long long int) arr_1 [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_0 [i_0]) - (arr_0 [7LL])))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0])))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */short) max((max((((((/* implicit */_Bool) var_0)) ? (arr_0 [0ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))), (arr_0 [i_0]))), (((/* implicit */unsigned long long int) ((unsigned char) var_0)))));
    }
    for (unsigned short i_1 = 1; i_1 < 13; i_1 += 2) 
    {
        var_14 ^= ((/* implicit */short) ((min((arr_0 [i_1 + 2]), (((/* implicit */unsigned long long int) arr_3 [i_1 + 1] [i_1 + 2])))) + (max((((/* implicit */unsigned long long int) arr_3 [2LL] [i_1 + 2])), (arr_0 [i_1])))));
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                for (unsigned char i_4 = 4; i_4 < 13; i_4 += 1) 
                {
                    {
                        var_15 = ((/* implicit */signed char) ((((((((/* implicit */int) var_5)) <= (((/* implicit */int) arr_10 [i_1] [i_3] [i_2] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 - 1] [i_2]))) : (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_3]))) : (arr_13 [i_1] [i_1] [i_1] [i_3] [i_4]))))) != (((/* implicit */unsigned int) ((/* implicit */int) max((max((var_4), (((/* implicit */unsigned char) var_1)))), (min((((/* implicit */unsigned char) arr_5 [i_2] [i_4 - 2])), (var_4)))))))));
                        arr_15 [i_1] [i_1] = ((/* implicit */long long int) arr_6 [i_1] [i_1 + 1]);
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */short) max((((/* implicit */int) arr_3 [i_1] [i_1])), ((+(((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1]))))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 1; i_5 < 14; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 13; i_6 += 2) 
            {
                {
                    arr_20 [(signed char)5] = ((/* implicit */unsigned long long int) arr_13 [i_1 - 1] [i_1 - 1] [9U] [i_6 + 2] [i_1 - 1]);
                    arr_21 [i_5] [13LL] = ((/* implicit */unsigned int) (~(((/* implicit */int) min((max((((/* implicit */short) var_3)), (arr_11 [i_6] [(signed char)7] [6U] [i_1 - 1]))), (((/* implicit */short) var_1)))))));
                    var_17 = max((((((/* implicit */_Bool) arr_9 [i_6 - 2] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_14 [i_6 + 1] [i_6 - 2] [i_5 - 1] [4ULL])) : (((/* implicit */int) arr_14 [i_6 + 2] [i_6] [i_6] [i_6])))), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) || (((/* implicit */_Bool) arr_9 [i_1 - 1] [i_5] [i_5] [i_6 + 2]))))) > (((/* implicit */int) arr_6 [(signed char)11] [i_5 + 1]))))));
                }
            } 
        } 
    }
    var_18 = ((/* implicit */unsigned long long int) ((short) ((int) var_1)));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((max((var_2), (var_2))), (((/* implicit */short) max((var_1), (var_3)))))))) == (min((((/* implicit */unsigned int) var_4)), (max((var_6), (((/* implicit */unsigned int) var_5))))))));
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_5)), (((max((var_8), (((/* implicit */unsigned long long int) var_5)))) >> (((((/* implicit */int) var_4)) - (174))))))))));
}

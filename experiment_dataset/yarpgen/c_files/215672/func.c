/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215672
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
    var_17 |= ((/* implicit */unsigned int) var_0);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 + 1])));
            arr_4 [i_1 + 1] [i_1] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)34))) | (arr_0 [i_1])))));
        }
        for (unsigned char i_2 = 1; i_2 < 12; i_2 += 2) 
        {
            arr_7 [i_0] |= ((/* implicit */short) (((!(((/* implicit */_Bool) 33488896)))) ? (((((/* implicit */_Bool) (unsigned short)3)) ? (4620461201197710164ULL) : (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 - 1] [i_0])))));
            arr_8 [i_2] = ((/* implicit */short) (+(26U)));
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (((((/* implicit */_Bool) -33488911)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (33488910))) : (33488918))))));
            arr_9 [i_2] [i_2] = ((/* implicit */signed char) ((((((/* implicit */int) var_11)) >> (((677102991U) - (677102972U))))) & (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) != (((/* implicit */int) (unsigned short)63603)))))));
        }
        for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            arr_12 [(signed char)13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((-8483823485393406050LL) / (((/* implicit */long long int) ((/* implicit */int) var_14))))) : (((/* implicit */long long int) ((819624355U) / (var_3))))));
            var_20 = ((/* implicit */unsigned short) (~((-(arr_2 [i_0] [i_0] [i_3])))));
            arr_13 [(signed char)11] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)215))) / (9816208304612756686ULL)));
            arr_14 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_11)) == (33488910)))) >> (((((/* implicit */int) (short)32767)) - (32746)))));
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (var_8) : (((/* implicit */long long int) var_7))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_18 [i_4] [i_4] [(unsigned short)1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)41))) > ((-(9816208304612756698ULL))));
            arr_19 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) 2147483638)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -2147483644)))))) : (arr_0 [i_0])));
            arr_20 [i_4] = ((/* implicit */signed char) (+(4854395134791941485ULL)));
        }
        arr_21 [i_0] = ((/* implicit */long long int) arr_5 [i_0 + 2] [(short)6] [i_0]);
        arr_22 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
        arr_23 [i_0] = arr_3 [i_0];
    }
    var_22 = ((/* implicit */unsigned int) -33488936);
}

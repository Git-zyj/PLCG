/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197252
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
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */signed char) var_9);
        var_12 = ((/* implicit */_Bool) min(((~(((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 3532270691872158552LL)) ? (740327752) : (1537641040))))));
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 1] [i_0] [i_0])))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_6 [i_0 + 1] [i_0] [i_0])), (1317063429U))))))), (min((-190087387), (190087410)))));
                        arr_11 [i_3] [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 62592144)) ? (-190087375) : (((/* implicit */int) (unsigned short)25668)))), (((/* implicit */int) var_11))));
                        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_4)))) ? (arr_7 [i_0 - 1] [i_0 - 1] [(signed char)15] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_8)))))))) ? (((((/* implicit */unsigned long long int) min((var_4), (((/* implicit */long long int) var_11))))) | (((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [2] [0LL] [(_Bool)1] [i_2] [6ULL] [i_2]))) : (arr_7 [i_1] [i_1] [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                        var_14 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) != (((/* implicit */int) ((arr_6 [(unsigned short)7] [i_1 + 2] [i_1]) || (((/* implicit */_Bool) var_8)))))))), (max((((var_11) ? (((/* implicit */unsigned long long int) var_1)) : (arr_1 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_3 [(_Bool)1] [i_1] [i_1])) : (((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 + 1])))))))));
                        var_15 = ((/* implicit */long long int) var_5);
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) max((((min((var_0), (((/* implicit */unsigned int) var_11)))) & (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) >> (((var_9) - (6675223003703325479LL)))))))), (((/* implicit */unsigned int) ((((var_7) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_6 [(unsigned short)11] [i_0 - 1] [i_0 + 1])))) != (((/* implicit */int) min((var_5), (var_7))))))))))));
    }
    /* vectorizable */
    for (long long int i_4 = 3; i_4 < 16; i_4 += 2) 
    {
        var_17 = (+(var_1));
        var_18 += ((/* implicit */_Bool) var_8);
        var_19 |= ((/* implicit */unsigned int) var_2);
        var_20 = ((/* implicit */unsigned char) ((arr_12 [i_4 - 3] [i_4 - 2]) ^ (((/* implicit */long long int) ((arr_13 [i_4 + 1] [i_4 + 2]) ? (((/* implicit */int) arr_13 [4] [i_4])) : (((/* implicit */int) var_2)))))));
    }
    for (long long int i_5 = 1; i_5 < 13; i_5 += 1) 
    {
        var_21 = ((/* implicit */long long int) var_1);
        var_22 = ((/* implicit */unsigned int) var_7);
        var_23 = ((/* implicit */long long int) min((min((-740327752), (((/* implicit */int) (unsigned short)55277)))), (((/* implicit */int) (unsigned short)39865))));
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 3) 
    {
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_10)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)83)) && (((/* implicit */_Bool) arr_17 [i_6] [2LL]))))) : (((/* implicit */int) arr_13 [i_6] [i_6]))));
        /* LoopSeq 1 */
        for (int i_7 = 3; i_7 < 7; i_7 += 2) 
        {
            var_25 = ((/* implicit */unsigned short) var_6);
            var_26 |= ((/* implicit */long long int) ((arr_13 [i_7 + 1] [i_7 + 2]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))));
        }
        var_27 = ((/* implicit */int) ((((((/* implicit */_Bool) 176733691)) ? (8870230764104389437LL) : (-1491041070372745819LL))) << (((var_0) - (760722821U)))));
    }
    var_28 = ((/* implicit */unsigned int) min((min((min((var_4), (((/* implicit */long long int) var_6)))), (((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */long long int) var_1)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) -1491041070372745830LL)) && (((/* implicit */_Bool) 3067832804U)))))));
}

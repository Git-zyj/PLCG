/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240674
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_20 = ((/* implicit */long long int) -1063824202);
        var_21 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) arr_0 [16])))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_13))))))) ? (arr_1 [i_0] [i_0]) : (((((((/* implicit */_Bool) -7623744513127780043LL)) && (((/* implicit */_Bool) var_19)))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_0 [i_0]))) : (((((/* implicit */_Bool) var_11)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))));
        var_22 ^= ((/* implicit */unsigned char) var_2);
        var_23 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)92)) : (((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_0 [i_0])))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        var_24 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_19)));
        arr_5 [i_1] = ((/* implicit */int) (((-(((/* implicit */int) var_16)))) >= (((/* implicit */int) arr_4 [i_1]))));
        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) arr_0 [i_1]))));
        var_26 -= ((/* implicit */unsigned long long int) ((unsigned short) ((arr_3 [i_1] [i_1]) * (((/* implicit */unsigned long long int) var_12)))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            arr_11 [i_2] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */int) (unsigned char)134)) : (((/* implicit */int) (unsigned short)43942)))))));
            arr_12 [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_6 [i_2]) : (arr_6 [i_2])));
            var_27 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41688))) * (arr_0 [i_2])));
            arr_13 [i_2] [i_2] = ((/* implicit */int) arr_0 [i_3]);
        }
        for (int i_4 = 4; i_4 < 16; i_4 += 2) 
        {
            var_28 += ((/* implicit */long long int) ((unsigned char) arr_2 [i_2]));
            arr_17 [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_4 + 1])) && (((/* implicit */_Bool) ((var_6) | (var_6))))));
            var_29 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((short) var_6)))));
            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) var_6))));
        }
        /* LoopSeq 1 */
        for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            var_31 -= ((/* implicit */unsigned char) arr_9 [i_2]);
            arr_20 [i_5] &= ((/* implicit */int) var_1);
            var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_5])) && (((/* implicit */_Bool) (~(((/* implicit */int) var_13))))))))));
            var_33 = ((/* implicit */unsigned long long int) (signed char)-74);
        }
        var_34 ^= ((/* implicit */long long int) ((unsigned char) var_10));
        var_35 = (+(var_10));
    }
    var_36 ^= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))), (3220506677674368442ULL)));
}

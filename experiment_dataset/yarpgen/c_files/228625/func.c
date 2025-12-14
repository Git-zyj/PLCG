/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228625
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
    var_15 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned int) var_2))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_3 [(signed char)14] [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_0]))));
            /* LoopSeq 3 */
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                var_16 = (!(((/* implicit */_Bool) arr_4 [i_2] [i_1])));
                arr_10 [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) < (((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))));
                arr_11 [i_0] [(_Bool)1] = ((/* implicit */unsigned int) ((((int) arr_7 [i_0])) >> (((((/* implicit */int) arr_2 [i_0])) + (41)))));
            }
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_3 - 1] [i_0] [i_3 - 1])) ? ((-(((/* implicit */int) arr_8 [i_0] [i_0] [i_1])))) : (((/* implicit */int) ((unsigned char) arr_9 [i_3] [0LL] [i_1] [0LL])))));
                var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_3 - 1] [i_1] [i_3 - 1])) >= (((/* implicit */int) arr_3 [i_3 - 1] [i_1] [i_3 - 1]))));
                var_19 = ((/* implicit */signed char) ((arr_13 [i_0] [i_0] [i_0]) - (arr_13 [i_0] [i_0] [(signed char)16])));
                var_20 = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_3 - 1] [i_3 - 1] [i_3 - 1])) < (((/* implicit */int) arr_8 [i_3 - 1] [i_3 - 1] [i_3 - 1]))));
                var_21 = ((/* implicit */signed char) (+(((/* implicit */int) arr_8 [i_3 - 1] [i_3 - 1] [i_3 - 1]))));
            }
            for (unsigned char i_4 = 1; i_4 < 14; i_4 += 2) 
            {
                arr_17 [i_0] [i_0] [i_4] = ((unsigned long long int) arr_12 [i_1] [i_0]);
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_4 + 3] [i_4 - 1] [i_4 + 3] [i_4 + 1])) < (((/* implicit */int) arr_9 [i_4 + 3] [i_4 - 1] [i_4 + 3] [i_4 + 1]))));
            }
        }
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (signed char i_6 = 2; i_6 < 17; i_6 += 3) 
            {
                for (unsigned int i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    {
                        var_23 = min((min((arr_2 [i_0]), (arr_2 [i_0]))), (min((arr_2 [i_0]), (arr_2 [i_0]))));
                        arr_26 [i_0] [i_0] [i_0] [i_6 - 1] [i_6] [i_6] = ((/* implicit */signed char) (-(((((/* implicit */int) min((arr_8 [i_0] [i_6] [i_7]), (arr_23 [i_0] [i_5] [i_0] [i_7])))) ^ (((((((/* implicit */int) (signed char)-1)) + (2147483647))) << (((((/* implicit */int) (signed char)25)) - (25)))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_8 = 1; i_8 < 14; i_8 += 4) 
    {
        var_24 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)51710)) >= (((/* implicit */int) (signed char)-55)))) ? (((/* implicit */int) min((arr_3 [(_Bool)1] [(_Bool)1] [(_Bool)1]), (((/* implicit */signed char) arr_22 [i_8] [i_8] [i_8]))))) : (((/* implicit */int) max((arr_9 [i_8 + 2] [i_8] [i_8] [i_8]), (((/* implicit */unsigned char) arr_5 [(unsigned short)12] [i_8] [i_8])))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_8] [i_8] [8])) ? (((/* implicit */int) arr_15 [(short)10] [(unsigned short)8] [(unsigned short)8] [i_8])) : (((/* implicit */int) arr_22 [i_8] [i_8] [i_8]))))) ? (arr_18 [i_8 + 2] [i_8] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_8 - 1] [(_Bool)1] [i_8 - 1])))))));
        /* LoopSeq 1 */
        for (unsigned int i_9 = 0; i_9 < 16; i_9 += 3) 
        {
            var_25 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_15 [i_8 + 1] [i_9] [(unsigned char)2] [i_9])) ? (((/* implicit */int) arr_16 [i_8 + 1] [i_9] [i_8 + 1])) : (((/* implicit */int) arr_16 [i_8 + 1] [i_8] [i_8])))), (((((/* implicit */_Bool) arr_3 [i_8 + 2] [(signed char)4] [i_9])) ? (((/* implicit */int) arr_3 [i_8 + 2] [(signed char)2] [i_8 + 1])) : (((/* implicit */int) arr_3 [i_8] [8ULL] [i_9]))))));
            var_26 = ((/* implicit */unsigned long long int) (~(min((((/* implicit */unsigned int) arr_7 [i_8 - 1])), (arr_18 [i_8] [i_8 - 1] [(unsigned char)12])))));
            var_27 &= ((/* implicit */_Bool) min((((/* implicit */int) min((arr_19 [4LL]), (((/* implicit */short) arr_30 [i_8 + 2]))))), (((arr_5 [i_8] [(_Bool)1] [i_9]) ? (((/* implicit */int) arr_5 [i_8] [i_9] [i_9])) : (((/* implicit */int) arr_5 [i_8 - 1] [i_8] [i_8 - 1]))))));
            arr_35 [i_8] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((max((((/* implicit */short) arr_32 [i_9] [2ULL] [i_8])), (arr_34 [i_9] [i_9] [i_8]))), (((/* implicit */short) ((_Bool) arr_19 [(short)2])))))) ? (((((/* implicit */_Bool) arr_30 [i_8 + 2])) ? (((/* implicit */long long int) max((((/* implicit */int) arr_23 [(signed char)14] [(signed char)14] [i_9] [i_9])), (arr_0 [(_Bool)1])))) : (((((arr_28 [i_9] [i_8]) + (9223372036854775807LL))) << (((arr_0 [10]) - (1290225277))))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_8 + 2] [(_Bool)1] [i_9])) << (((((/* implicit */int) min((arr_2 [(unsigned char)4]), (arr_33 [i_9])))) + (30))))))));
            arr_36 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49719))) : (5467344430806584180ULL)))) ? (((/* implicit */unsigned int) (((((~(((/* implicit */int) arr_33 [i_8])))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_27 [i_8])) ? (((/* implicit */int) arr_3 [i_8] [(unsigned char)14] [i_9])) : (((/* implicit */int) arr_9 [i_8] [i_8] [i_9] [(_Bool)1])))) + (21)))))) : (min((arr_1 [i_8] [i_8 + 1]), (arr_1 [i_8] [i_8 + 1])))));
        }
        var_28 += ((/* implicit */unsigned long long int) min((min((((((/* implicit */_Bool) arr_21 [(unsigned short)0] [i_8] [i_8])) ? (((/* implicit */int) arr_19 [(short)12])) : (((/* implicit */int) arr_32 [i_8] [i_8] [i_8])))), (((((/* implicit */_Bool) arr_19 [(unsigned short)4])) ? (((/* implicit */int) arr_30 [i_8])) : (((/* implicit */int) arr_16 [i_8 + 1] [(signed char)16] [i_8])))))), (((/* implicit */int) min((min((((/* implicit */signed char) arr_7 [i_8])), (arr_15 [(unsigned char)8] [i_8] [(unsigned short)6] [i_8 + 2]))), (min((((/* implicit */signed char) arr_22 [i_8] [i_8] [i_8 + 1])), (arr_3 [(_Bool)1] [6ULL] [6ULL]))))))));
        var_29 = ((/* implicit */unsigned char) arr_4 [i_8] [i_8]);
        var_30 -= ((/* implicit */unsigned char) ((((/* implicit */int) max(((signed char)102), ((signed char)0)))) - (((/* implicit */int) ((((/* implicit */int) arr_5 [i_8 + 2] [i_8 - 1] [i_8 + 1])) > ((~(arr_0 [2LL]))))))));
    }
    var_31 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)103)) >> (((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-64)), ((unsigned short)51710)))) - (65453)))))) ? (min((((/* implicit */int) var_10)), (((((/* implicit */int) var_10)) / (((/* implicit */int) var_7)))))) : (((/* implicit */int) ((min((((/* implicit */unsigned int) var_6)), (var_3))) < (((var_0) << (((var_0) - (3872721817U))))))))));
    var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */unsigned long long int) var_9)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) var_8)) * (((/* implicit */int) var_1)))) >= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1)))))))) : (min((((/* implicit */unsigned int) max((var_4), (var_7)))), (var_3)))));
    /* LoopSeq 1 */
    for (unsigned char i_10 = 1; i_10 < 14; i_10 += 2) 
    {
        var_33 = ((/* implicit */_Bool) min(((~(5467344430806584180ULL))), (((/* implicit */unsigned long long int) ((unsigned short) arr_31 [i_10] [i_10])))));
        var_34 = ((/* implicit */unsigned long long int) max((max((arr_30 [i_10 + 2]), (arr_30 [i_10 + 1]))), (min((arr_30 [i_10 - 1]), (arr_30 [i_10 + 2])))));
    }
}

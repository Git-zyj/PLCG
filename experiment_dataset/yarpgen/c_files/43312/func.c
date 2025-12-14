/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43312
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
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */long long int) ((((max((arr_3 [i_0] [i_0] [i_0]), (arr_3 [i_0] [i_0] [i_1]))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 2])) ? (var_0) : (var_18)))))) + (((arr_4 [i_0 + 1]) + (arr_4 [i_0 + 1])))));
                var_21 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_3 [i_0 - 2] [i_0 - 2] [i_1]) : (((arr_3 [i_0] [i_1] [i_0]) - (arr_3 [i_0] [i_0] [i_0]))))));
                var_22 = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) ((var_18) <= (((/* implicit */int) var_10))))) == (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_16)) ? (var_8) : (((/* implicit */unsigned long long int) var_14)))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (int i_4 = 3; i_4 < 13; i_4 += 2) 
                {
                    var_24 = ((/* implicit */unsigned int) min((min((var_13), (((/* implicit */short) (!(((/* implicit */_Bool) var_3))))))), (((/* implicit */short) ((((/* implicit */unsigned long long int) arr_10 [i_4 - 3] [i_4 + 1] [i_4 - 1] [i_4 - 2])) != (max((arr_1 [i_3] [i_4 + 1]), (((/* implicit */unsigned long long int) arr_9 [6LL] [8])))))))));
                    var_25 = ((/* implicit */unsigned short) ((3566179926280393721ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    var_26 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
                }
                for (short i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    var_27 = (~(max((((((/* implicit */int) arr_0 [i_3])) & (((/* implicit */int) var_5)))), (((/* implicit */int) arr_11 [i_5] [i_3] [i_2])))));
                    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_5] [i_5])) ? ((+(((/* implicit */int) ((unsigned short) arr_12 [i_2]))))) : (((/* implicit */int) ((((((/* implicit */int) arr_6 [i_5] [i_2])) ^ (((/* implicit */int) var_17)))) <= (arr_9 [i_3] [i_5])))))))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        arr_18 [(signed char)6] [i_2] [i_7] &= ((/* implicit */unsigned char) (((~(((/* implicit */int) ((((/* implicit */int) arr_6 [i_3] [i_3])) != (((/* implicit */int) arr_5 [i_7] [i_3]))))))) - (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_13 [i_2] [i_2] [i_6])) > (arr_3 [6] [i_6] [i_7])))) > (((/* implicit */int) arr_2 [i_2])))))));
                        var_29 ^= ((/* implicit */long long int) (-((+(arr_12 [i_2])))));
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            arr_23 [i_2] [i_3] [i_3] [i_3] [i_3] [i_2] [i_8] &= ((/* implicit */int) min((((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_2] [i_2]))))) ^ (var_15))), (((/* implicit */unsigned long long int) arr_10 [i_3] [i_3] [i_7] [i_3]))));
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26329))) == (6391457586622283274ULL))))));
                        }
                        var_31 = ((arr_10 [i_2] [i_6] [i_2] [i_2]) ^ (((/* implicit */long long int) (~(((var_6) ^ (((/* implicit */int) arr_5 [i_2] [i_2]))))))));
                        var_32 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((6391457586622283255ULL), (12055286487087268343ULL)))) ? (((/* implicit */int) arr_5 [i_2] [i_7])) : (((/* implicit */int) ((((/* implicit */unsigned int) var_16)) >= (arr_13 [i_2] [i_2] [i_2]))))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_9 = 0; i_9 < 14; i_9 += 3) 
                    {
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_2] [i_6] [i_9])) ? (((/* implicit */int) arr_5 [i_2] [i_2])) : (arr_14 [i_2] [i_2] [i_2])));
                        var_34 = ((/* implicit */unsigned int) arr_3 [i_6] [i_3] [i_2]);
                        var_35 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_17 [i_2] [i_3] [i_6] [i_9] [i_9] [i_9]))));
                        var_36 &= ((/* implicit */unsigned long long int) ((var_19) / (((/* implicit */int) arr_0 [i_6]))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 14; i_10 += 4) 
                    {
                        arr_29 [i_2] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((1208600887911243509LL) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                        var_37 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) -1208600887911243510LL))));
                        var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_25 [10LL] [i_3] [11LL] [i_6])) - (((/* implicit */int) arr_19 [i_2] [i_3] [(signed char)10] [i_6] [i_2]))))))) ? (((/* implicit */unsigned long long int) ((min((arr_27 [(unsigned short)13] [i_3] [i_3] [i_2]), (((/* implicit */int) arr_15 [i_2] [i_3] [i_6])))) / ((+(((/* implicit */int) arr_25 [i_2] [i_3] [i_6] [i_6]))))))) : (max((((arr_16 [i_6] [i_3]) / (((/* implicit */unsigned long long int) arr_27 [i_2] [i_2] [i_6] [i_10])))), (arr_24 [i_2] [5] [i_6] [i_6])))));
                        var_39 = ((/* implicit */unsigned short) ((((min((((/* implicit */int) var_11)), (arr_27 [i_2] [i_2] [i_2] [i_2]))) != (((/* implicit */int) arr_11 [(signed char)5] [i_3] [(short)7])))) ? ((-(((var_18) - (((/* implicit */int) var_17)))))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) -1208600887911243509LL)))))))));
                    }
                }
                var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) ((2591376467U) / (3326773571U))))));
                arr_30 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (~((+(-1208600887911243510LL)))));
            }
        } 
    } 
}

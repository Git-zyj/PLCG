/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35777
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
    for (long long int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_5 [i_0 + 1]) ? (((/* implicit */int) arr_3 [i_0 + 4] [i_0 + 3])) : (((/* implicit */int) arr_3 [i_0 - 2] [i_0 + 4]))))) ? (((/* implicit */int) ((unsigned short) -206004916670962214LL))) : (((arr_6 [i_1 + 2] [i_2] [i_2]) / (arr_6 [i_1 + 2] [i_2] [i_1 + 2])))));
                    var_11 += ((unsigned int) (-(min((arr_6 [i_0 + 4] [(unsigned short)4] [i_2]), (((/* implicit */int) arr_1 [i_0 + 1]))))));
                }
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)27109))) & (((((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */long long int) var_5)))) / (((/* implicit */long long int) arr_0 [i_1 + 2]))))));
            }
        } 
    } 
    var_12 = ((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */long long int) var_3)) + (-206004916670962214LL))) : (((/* implicit */long long int) ((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))) / (var_2)));
    var_13 &= ((/* implicit */unsigned short) ((int) var_8));
    var_14 = ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (unsigned int i_3 = 3; i_3 < 15; i_3 += 1) 
    {
        for (unsigned short i_4 = 2; i_4 < 16; i_4 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned short i_5 = 1; i_5 < 16; i_5 += 1) 
                {
                    arr_17 [i_3] [i_4] [i_4] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_16 [i_4 + 1] [i_4 + 1] [i_4] [i_4])) != (((/* implicit */int) arr_7 [i_4 + 1] [i_4 + 1] [(unsigned char)19] [i_4 + 1]))))) + ((-(((/* implicit */int) var_1))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        arr_22 [i_3] [i_3] [i_5] [(short)8] |= ((/* implicit */unsigned short) ((((((((/* implicit */int) arr_12 [i_5])) / (((/* implicit */int) var_7)))) != (((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) var_7)) : (arr_15 [i_4 - 2] [i_4 - 2] [i_6]))))) && (((/* implicit */_Bool) ((min((arr_2 [i_5] [i_6]), (((/* implicit */int) arr_20 [i_3 - 2])))) / (((/* implicit */int) (unsigned short)61282)))))));
                        arr_23 [(unsigned short)11] [i_3] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) arr_1 [i_5 + 1]))) != (((((/* implicit */_Bool) arr_2 [i_3 + 2] [i_4 - 1])) ? (((/* implicit */int) var_4)) : (arr_2 [i_3 - 1] [i_4 + 1])))));
                        var_15 = max((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [14U] [i_5 - 1]))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (1341028266)))) ? (((/* implicit */int) max((arr_14 [(unsigned short)4]), (((/* implicit */short) var_4))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3]))))))));
                    }
                    for (short i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        arr_26 [i_3] [3LL] [i_5 - 1] [i_3] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_16 [i_3 + 1] [i_4 - 1] [i_4 + 1] [i_5 - 1])), (var_9)))) ? (((/* implicit */int) arr_4 [i_3 + 1] [i_4 - 1] [i_4 + 1])) : (((/* implicit */int) ((arr_15 [i_3 + 1] [i_4 - 1] [i_4 + 1]) != (((/* implicit */int) arr_7 [i_3 + 1] [i_4 - 1] [i_4 + 1] [i_5 - 1])))))));
                        var_16 -= var_9;
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_16 [i_3 + 1] [i_3] [i_3] [i_3])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_3] [i_4] [i_5])) ? (((/* implicit */int) arr_3 [4] [i_4])) : (((/* implicit */int) arr_12 [i_7])))) / (((/* implicit */int) arr_1 [18LL]))))))))));
                        var_18 = ((/* implicit */long long int) var_9);
                    }
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((((/* implicit */_Bool) ((unsigned short) ((unsigned short) var_8)))) ? (((((/* implicit */_Bool) arr_9 [(short)8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_4] [i_3 - 2] [i_5 - 1] [i_5 - 1]))) : (arr_9 [(unsigned char)4]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */long long int) arr_6 [i_3] [(unsigned short)6] [i_5 + 1])) != (var_2))) && (((/* implicit */_Bool) var_6))))))))));
                }
                for (int i_8 = 0; i_8 < 17; i_8 += 4) 
                {
                    var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_1)) != (((/* implicit */int) arr_5 [i_3])))) ? ((+(((/* implicit */int) arr_18 [i_8] [i_3])))) : (((/* implicit */int) arr_21 [i_3] [i_4 + 1] [i_8] [i_4 + 1] [i_4 + 1] [i_4 + 1]))))) ? (((((/* implicit */_Bool) arr_20 [i_3 + 1])) ? (((/* implicit */int) arr_19 [i_4 - 1] [i_4 - 1] [i_3 - 3] [i_3 - 2])) : (((/* implicit */int) arr_28 [i_3] [i_8] [i_3] [i_8])))) : (((/* implicit */int) var_1))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_5))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_4] [i_8]))))))))) != (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) arr_0 [i_3])) : (arr_13 [i_8] [i_4]))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3] [(short)13])) && (((/* implicit */_Bool) arr_9 [i_3]))))))))));
                    arr_30 [i_3] [i_3] [i_3 - 1] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) arr_29 [i_3 - 1] [i_4] [i_4] [i_4 - 1]))))))));
                }
                for (int i_9 = 4; i_9 < 16; i_9 += 1) 
                {
                    arr_33 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_12 [i_9 - 1])) != (((/* implicit */int) arr_12 [i_9 - 1])))) ? (((((/* implicit */_Bool) arr_12 [i_9 - 2])) ? (((/* implicit */int) arr_12 [i_9 - 3])) : (((/* implicit */int) arr_12 [i_9 - 1])))) : ((~(((/* implicit */int) arr_12 [i_9 - 3]))))));
                    arr_34 [i_9] [i_3] = ((/* implicit */unsigned short) ((int) arr_9 [i_3]));
                    var_22 = ((/* implicit */unsigned short) (~((~((~(((/* implicit */int) arr_29 [i_3] [i_3 + 2] [i_3 - 2] [i_3 + 2]))))))));
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [3] [i_4] [i_4]))))))))) ? (((((/* implicit */_Bool) max((arr_28 [i_3] [i_4] [0LL] [i_4]), (arr_16 [i_3] [i_3] [i_3 + 2] [3])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_27 [i_3])) != (((/* implicit */int) arr_7 [i_3] [i_3 - 2] [i_4] [i_9])))))) : (206004916670962210LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((arr_21 [i_3] [i_4 - 1] [(unsigned char)1] [i_9] [10LL] [i_9]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (var_5)))) && ((!(((/* implicit */_Bool) 206004916670962210LL)))))))))))));
                    arr_35 [i_3] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_19 [i_4] [i_4] [i_4] [i_4 - 2])) && (((/* implicit */_Bool) arr_19 [i_3] [i_4] [i_4] [i_4 + 1])))));
                }
                /* vectorizable */
                for (int i_10 = 3; i_10 < 15; i_10 += 2) 
                {
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((arr_0 [i_3 + 2]) + (arr_0 [i_10]))))));
                    var_25 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3 + 1] [16U] [i_10])) ? (((/* implicit */int) arr_27 [i_4])) : (((/* implicit */int) var_9))))) ? ((-(arr_37 [i_3 - 3] [i_4] [14U] [i_10]))) : (((/* implicit */long long int) arr_2 [i_3 - 1] [i_4 - 1]))));
                    arr_39 [i_3] [i_4] [i_4] [i_4] = ((/* implicit */int) ((unsigned short) arr_20 [i_3 + 1]));
                }
                arr_40 [i_3] = ((/* implicit */unsigned short) ((((arr_15 [i_3 + 1] [i_3 - 3] [i_4 - 1]) / (arr_15 [i_3 - 1] [i_3 - 2] [i_4 + 1]))) & (((/* implicit */int) ((arr_15 [i_3 + 1] [i_3 - 1] [i_4 - 2]) != (arr_15 [i_3 - 1] [i_3 + 1] [i_4 - 2]))))));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191761
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) var_1))) ? (((var_16) | (((/* implicit */long long int) ((/* implicit */int) (short)-25551))))) : (((/* implicit */long long int) min((((int) 3837070556U)), (max((((/* implicit */int) (_Bool)1)), (161972519))))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) var_2)), (arr_0 [i_0])))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -1752147916)) ? (((/* implicit */int) (signed char)53)) : (((/* implicit */int) (signed char)-44)))) / (((/* implicit */int) var_19))))) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) var_9)) : ((+(arr_0 [i_0])))))));
        var_22 -= max((((int) (unsigned char)7)), (((/* implicit */int) (unsigned short)199)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned int) var_11);
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                {
                    var_24 = ((/* implicit */_Bool) (~(max((arr_5 [i_1] [i_2] [(unsigned short)17]), (arr_5 [i_1] [i_2] [i_3])))));
                    /* LoopSeq 2 */
                    for (short i_4 = 1; i_4 < 20; i_4 += 4) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) max((-1181660084), (((/* implicit */int) (_Bool)1))))) / ((-(arr_5 [20] [i_3] [i_1]))))) / ((-(arr_5 [(_Bool)1] [i_3] [i_1])))));
                        arr_14 [i_4] [i_1] [i_4] [i_3] [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned short) 18446744073709551615ULL))) ? (((/* implicit */long long int) min((3626486404U), (((/* implicit */unsigned int) (signed char)27))))) : (max((((/* implicit */long long int) (unsigned char)108)), (-2230361406294517542LL))))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)53)))));
                    }
                    for (short i_5 = 1; i_5 < 20; i_5 += 4) /* same iter space */
                    {
                        arr_19 [i_5] [i_2] [i_3] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_18 [i_5] [i_5 + 1] [i_5 - 1] [i_5] [i_5 - 1] [i_5]), (arr_18 [i_1] [i_5 + 1] [i_5 - 1] [i_5 + 2] [(signed char)15] [i_5 + 1])))) ? (((/* implicit */int) arr_8 [i_3] [i_5 + 2] [i_5 + 1] [i_5 - 1])) : (((int) arr_18 [i_1] [i_5 + 1] [i_5 + 1] [i_5] [i_5 - 1] [i_5]))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 20; i_6 += 3) 
                        {
                            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 1368858018)))) : (((2040520007370314387ULL) % (var_6))))))));
                            arr_23 [i_5] [i_5] [i_1] = ((var_6) > (((/* implicit */unsigned long long int) arr_11 [i_5 - 1] [i_5 + 1] [(signed char)12] [i_5 + 2])));
                            var_27 -= ((/* implicit */int) (signed char)-35);
                            var_28 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                        }
                        var_29 = ((/* implicit */int) min((var_29), (1283556120)));
                        arr_24 [i_1] [i_2] [i_3] [i_5 - 1] &= ((((/* implicit */long long int) ((int) (signed char)-3))) > (((((/* implicit */_Bool) arr_11 [i_5 + 2] [i_5 - 1] [i_5 + 2] [i_5 + 1])) ? (arr_11 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 + 2]) : (arr_11 [i_5 + 2] [i_5 + 2] [i_5 + 1] [i_5 + 2]))));
                    }
                    var_30 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned char)143)) : (((/* implicit */int) var_3)))))))), (((668480905U) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned char) ((long long int) (~(532676608))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_13))) && (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)11774)))))));
        arr_27 [i_7] [(signed char)18] |= ((/* implicit */long long int) (short)18566);
        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_7] [i_7])) ? (arr_7 [i_7]) : (((/* implicit */long long int) arr_6 [i_7] [i_7]))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_7])))))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        var_34 = ((/* implicit */unsigned short) max((((unsigned long long int) arr_9 [i_8])), (((/* implicit */unsigned long long int) max((arr_9 [i_8]), (arr_9 [i_8]))))));
        arr_30 [i_8] = ((/* implicit */signed char) (-(((((/* implicit */int) arr_20 [i_8] [i_8] [i_8])) & (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_11 [i_8] [i_8] [i_8] [i_8])))))))));
    }
    var_35 -= ((/* implicit */short) ((max((((long long int) (_Bool)1)), (((/* implicit */long long int) min((((/* implicit */unsigned char) var_13)), ((unsigned char)96)))))) % (((/* implicit */long long int) (((~(((/* implicit */int) var_13)))) * (((/* implicit */int) var_17)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209955
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
    var_15 = ((/* implicit */long long int) min((((min((var_7), (((/* implicit */unsigned long long int) var_6)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), ((-(var_11)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_3] [i_2] [4ULL])) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) : ((+(((((((/* implicit */int) (signed char)-100)) + (2147483647))) >> (((arr_10 [i_0] [i_0] [i_1 - 1] [i_1] [i_2] [i_3]) - (1771201539)))))))));
                        arr_11 [i_3] [2LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(10335484659531316219ULL)))) ? (max((arr_7 [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0] [i_1])) + (((/* implicit */int) (short)23574)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((long long int) 3208533910U)) <= (((/* implicit */long long int) arr_9 [(signed char)9] [(signed char)9] [i_2] [i_2] [16LL])))))) : (var_0)));
                    }
                    var_17 = ((/* implicit */unsigned long long int) var_5);
                    /* LoopSeq 2 */
                    for (short i_4 = 1; i_4 < 19; i_4 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) arr_8 [i_4 - 1] [i_4 - 1]);
                        arr_15 [i_0] [i_1] [i_1 - 2] [i_4] = ((/* implicit */unsigned char) var_12);
                        var_19 = ((/* implicit */int) arr_2 [i_4] [i_2]);
                        /* LoopSeq 3 */
                        for (int i_5 = 3; i_5 < 19; i_5 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (8111259414178235396ULL) : (((/* implicit */unsigned long long int) arr_9 [i_0] [i_4] [i_4] [i_4] [i_1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) (short)-32767)))))))) ? (max((8111259414178235397ULL), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_6 [i_0] [i_4] [i_0])), (var_12)))))) : (var_7)));
                            arr_18 [i_0] [i_0] [i_2] [i_4] [i_2] = ((/* implicit */signed char) var_2);
                        }
                        for (int i_6 = 3; i_6 < 19; i_6 += 2) /* same iter space */
                        {
                            var_21 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) >> (((arr_2 [i_6 + 1] [i_1 + 3]) ^ (arr_2 [i_6 - 3] [i_1 + 2])))));
                            arr_21 [i_6] [i_4] [i_0] [i_2] [i_4] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((arr_10 [i_6 - 3] [i_4 + 1] [i_1 - 1] [i_1] [i_1 + 3] [i_1]), (arr_10 [i_6 - 3] [i_4 + 1] [i_4] [i_4] [i_1 + 1] [i_1 - 1])))), (arr_20 [i_4] [i_6 - 1] [i_6 + 1] [i_4] [i_4])));
                        }
                        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned short) max((((/* implicit */long long int) min((arr_13 [i_1] [i_1 + 1] [i_1] [i_1 + 3]), (var_4)))), (arr_7 [i_0] [i_0] [i_1 - 1])));
                            arr_24 [i_1 + 2] [i_4] [i_1 + 1] [i_4] [i_7] = ((/* implicit */signed char) (~((-(((/* implicit */int) arr_22 [i_1 + 2] [i_1 + 2] [i_4] [i_1] [i_1] [i_1 + 3] [i_1]))))));
                            var_23 = ((/* implicit */long long int) var_6);
                            arr_25 [i_2] [i_4] [i_2] [i_4] [i_7] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (max((((/* implicit */unsigned long long int) arr_5 [i_1 - 1] [i_1 + 2])), (min((arr_20 [i_0] [i_1] [i_0] [i_4 - 1] [i_4]), (((/* implicit */unsigned long long int) arr_0 [i_0] [4]))))))));
                            var_24 = ((/* implicit */unsigned short) -1740047616);
                        }
                    }
                    for (signed char i_8 = 4; i_8 < 17; i_8 += 3) 
                    {
                        var_25 = ((/* implicit */long long int) 8111259414178235421ULL);
                        var_26 = ((/* implicit */signed char) arr_10 [i_0] [i_2] [i_1] [i_8 - 2] [i_8] [i_0]);
                        var_27 = ((/* implicit */short) (~(max((((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_1 - 2] [i_2])), (var_7)))));
                        var_28 = ((/* implicit */_Bool) max((((/* implicit */int) (short)19208)), (min((((arr_23 [i_1] [i_1] [12LL] [i_1] [i_8]) ^ (((/* implicit */int) (signed char)-99)))), (((/* implicit */int) arr_17 [i_0] [i_1 - 2] [i_8]))))));
                        var_29 = ((/* implicit */unsigned long long int) (short)-22744);
                    }
                    arr_28 [i_0] [i_1] [(unsigned char)8] = ((/* implicit */long long int) var_10);
                    /* LoopSeq 1 */
                    for (int i_9 = 0; i_9 < 20; i_9 += 2) 
                    {
                        arr_32 [i_0] [i_0] [i_1 - 1] [i_2] [i_9] = ((/* implicit */short) ((min((arr_31 [i_1 + 1]), (arr_26 [i_1 - 2] [i_1] [i_1]))) & (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)0), (((/* implicit */signed char) ((_Bool) arr_10 [i_1] [i_1] [i_2] [i_1 + 2] [i_1 + 1] [i_9])))))))));
                        arr_33 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((short) ((var_14) + (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [(short)18] [i_1] [i_9]))))))) ? (((/* implicit */unsigned long long int) ((((var_4) ^ (arr_13 [i_9] [i_2] [i_1] [i_0]))) << (((var_3) + (58806210)))))) : (var_7));
                        arr_34 [19LL] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_2] [i_2])) && (((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_2])) % (((/* implicit */int) var_6))))))))));
                    }
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229375
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
    var_16 ^= ((/* implicit */short) (~(var_9)));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (((((/* implicit */_Bool) ((int) arr_0 [i_0]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_7))))) : (min((arr_2 [i_0]), (((/* implicit */unsigned long long int) (short)-16626)))))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) min(((~(((/* implicit */int) var_3)))), (((((/* implicit */_Bool) 8040154840573430258ULL)) ? (((/* implicit */int) (unsigned char)69)) : (1035728963)))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 += ((/* implicit */unsigned int) var_11);
        var_19 = ((/* implicit */_Bool) ((arr_7 [i_1]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_7 [i_1]))));
        arr_8 [i_1] = ((/* implicit */unsigned short) ((((int) arr_4 [i_1] [i_1])) >= (((/* implicit */int) (unsigned char)66))));
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 3 */
            for (short i_3 = 2; i_3 < 13; i_3 += 2) 
            {
                var_20 += ((/* implicit */unsigned short) var_8);
                var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */_Bool) arr_12 [i_1] [i_3 + 1] [i_3 - 2] [i_3])) ? (((/* implicit */int) arr_12 [i_2] [i_3 - 2] [i_3 - 1] [i_3])) : (((/* implicit */int) arr_12 [i_1] [i_3 - 2] [i_3] [i_3]))))));
                var_22 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)7)) ? ((+(((/* implicit */int) var_15)))) : (((var_15) ? (((/* implicit */int) var_6)) : (var_1)))));
                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_3 - 1] [i_3] [i_3] [i_3 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45166))) : (((long long int) arr_0 [i_3])))))));
            }
            for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 1) /* same iter space */
            {
                arr_18 [(unsigned short)7] [i_1] [i_4] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -3383248649614570192LL)) ? (((((/* implicit */int) arr_4 [i_1] [i_1])) / (arr_0 [i_4 - 1]))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (arr_17 [i_1] [i_1] [i_1] [i_1])))));
                var_24 ^= ((/* implicit */signed char) var_10);
            }
            for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 1) /* same iter space */
            {
                var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) var_9))));
                arr_21 [i_1] = arr_14 [i_5] [i_5 + 1] [i_1] [i_5];
                var_26 = ((/* implicit */int) min((var_26), ((~(((/* implicit */int) arr_13 [i_2] [i_2] [i_5] [i_5 + 1]))))));
                arr_22 [i_1] [i_5] [i_1] = ((/* implicit */signed char) ((arr_16 [i_5] [i_1]) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_15 [i_1] [i_1] [i_1])) < (((/* implicit */int) var_5))))))));
            }
            arr_23 [i_1] = arr_2 [i_1];
        }
        for (unsigned char i_6 = 1; i_6 < 12; i_6 += 1) /* same iter space */
        {
            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)-15721)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)96)) ? (2047) : (2109484154)))) : (((long long int) 3750185973U)))))));
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) & (((((/* implicit */_Bool) arr_14 [i_1] [i_6] [i_1] [i_1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)10548))))));
            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((long long int) arr_5 [i_6 + 2] [i_6])))));
            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) (~(arr_26 [i_6] [i_6 + 1] [i_6]))))));
        }
        for (unsigned char i_7 = 1; i_7 < 12; i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_8 = 3; i_8 < 13; i_8 += 4) 
            {
                for (unsigned short i_9 = 0; i_9 < 14; i_9 += 4) 
                {
                    {
                        var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) arr_2 [i_8 - 2]))));
                        arr_38 [(_Bool)1] [(_Bool)1] [i_8] [i_1] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned int) arr_28 [i_7 + 2]))));
                    }
                } 
            } 
            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) arr_14 [i_1] [i_7 + 2] [12ULL] [i_7]))));
        }
    }
    var_33 = max((max((var_9), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) ((min((((/* implicit */unsigned int) var_1)), (var_10))) % (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
    var_34 ^= var_12;
}

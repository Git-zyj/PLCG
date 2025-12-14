/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39982
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
    var_16 = ((/* implicit */int) var_10);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        arr_4 [i_0] = (-(0U));
        arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((11U), (((/* implicit */unsigned int) max(((short)9889), (((/* implicit */short) arr_2 [i_0] [i_0])))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */int) arr_2 [i_0] [i_0 - 2])) : (((/* implicit */int) var_11)))))));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            arr_10 [i_0] [(_Bool)1] [i_0] = ((/* implicit */signed char) min((max((((unsigned int) var_14)), (((/* implicit */unsigned int) arr_2 [i_0] [i_0])))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (((arr_7 [i_0] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
            arr_11 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (arr_6 [i_0] [i_1]) : (((/* implicit */int) arr_2 [i_0] [i_1]))))) : (((arr_0 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))) && (((/* implicit */_Bool) max((min((((/* implicit */unsigned int) (short)-26147)), (var_6))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_13)))))))));
        }
        for (signed char i_2 = 1; i_2 < 8; i_2 += 4) 
        {
            /* LoopSeq 3 */
            for (signed char i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
            {
                arr_16 [i_0] [i_3] = ((/* implicit */unsigned int) var_9);
                arr_17 [3ULL] [i_0] = ((((/* implicit */int) ((var_0) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) == (((((/* implicit */int) arr_12 [i_2] [i_2 + 1])) << (((((/* implicit */int) (signed char)(-127 - 1))) + (131))))));
                arr_18 [i_0] = ((((unsigned int) var_4)) & (((/* implicit */unsigned int) ((/* implicit */int) var_5))));
                arr_19 [(unsigned char)2] [i_0] [i_0 + 1] = ((/* implicit */short) max((var_1), (max(((~(var_7))), (((/* implicit */unsigned int) arr_15 [i_2 + 2] [i_2 + 1] [i_0 + 2]))))));
            }
            for (signed char i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
            {
                arr_23 [i_0] [i_2 + 2] [i_4] = var_10;
                arr_24 [i_0] [i_2] [i_0] = var_15;
            }
            for (int i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                arr_28 [(unsigned char)8] [i_0] [i_5] [i_0 - 2] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0 + 2])) && (((/* implicit */_Bool) arr_8 [i_0 - 2])))))));
                var_17 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) (~(var_6)))), (var_9))), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_11)))) < (((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5)))))))));
                var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [i_0 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 2]))) : (var_3))) ^ (max((((/* implicit */unsigned int) arr_3 [i_0 + 2])), (var_0)))));
            }
            var_19 = ((/* implicit */int) arr_2 [i_0] [i_2]);
        }
        for (unsigned char i_6 = 2; i_6 < 7; i_6 += 4) 
        {
            arr_31 [1] [i_0] [6ULL] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_15 [i_0 + 2] [i_0] [i_0])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) var_13)) < (((/* implicit */int) arr_27 [(unsigned char)3] [i_6] [i_0])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_29 [i_0 + 2] [i_0 + 1] [i_6 - 1]), (arr_29 [i_0 - 2] [i_0 - 2] [i_6 - 2]))))) : (max((max((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551603ULL))), ((+(var_9)))))));
            arr_32 [i_0] [i_0] = ((/* implicit */int) (~(max((((((/* implicit */unsigned int) ((/* implicit */int) var_14))) + (var_10))), (((((/* implicit */unsigned int) arr_26 [1U] [i_6] [i_6])) - (var_1)))))));
            var_20 = (-(((/* implicit */int) min((var_13), (((/* implicit */short) (unsigned char)245))))));
            arr_33 [i_6] [i_6] [i_6] |= arr_0 [i_6];
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0 - 2])) ? (2019449488U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)245))))), (((/* implicit */unsigned int) ((var_9) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)110))))))))) ? ((+(((((/* implicit */_Bool) arr_21 [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
        }
        var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_2 [i_0] [i_0]))))))) & ((-(((arr_8 [i_0]) | (((/* implicit */unsigned long long int) arr_26 [i_0] [(signed char)1] [(signed char)1]))))))));
    }
    for (int i_7 = 1; i_7 < 22; i_7 += 2) 
    {
        var_23 |= ((/* implicit */unsigned int) ((short) max((((arr_34 [i_7]) ^ (arr_34 [i_7]))), (((/* implicit */unsigned long long int) var_12)))));
        var_24 ^= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((arr_34 [i_7]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [4U] [i_7 - 1])))))) : ((~(((/* implicit */int) (_Bool)1))))));
        var_25 = ((/* implicit */int) ((((/* implicit */int) arr_37 [i_7] [i_7])) != (min((((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */int) var_11)))), (((/* implicit */int) arr_37 [i_7] [i_7 - 1]))))));
    }
    for (unsigned int i_8 = 0; i_8 < 17; i_8 += 2) 
    {
        arr_41 [i_8] = ((((((/* implicit */int) arr_39 [i_8])) >= (((/* implicit */int) arr_39 [i_8])))) && (((/* implicit */_Bool) var_12)));
        /* LoopSeq 1 */
        for (signed char i_9 = 0; i_9 < 17; i_9 += 2) 
        {
            arr_45 [i_9] [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) arr_36 [i_8]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 14811600278850690145ULL))))) : (((/* implicit */int) arr_36 [i_8]))));
            arr_46 [2U] = ((/* implicit */short) max((((/* implicit */unsigned char) (_Bool)1)), (var_14)));
            var_26 += max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) arr_37 [i_8] [i_8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_37 [i_8] [i_8])))));
            arr_47 [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) arr_36 [i_9]);
            var_27 = ((/* implicit */unsigned long long int) var_8);
        }
        var_28 ^= ((/* implicit */_Bool) var_1);
        arr_48 [i_8] = max(((signed char)102), ((signed char)59));
    }
    for (unsigned char i_10 = 1; i_10 < 18; i_10 += 3) 
    {
        var_29 -= (!(((/* implicit */_Bool) max((arr_35 [i_10 + 1] [i_10 - 1]), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_0)))))));
        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) arr_37 [(short)10] [(short)10])), (var_9))), (((/* implicit */unsigned long long int) 1073863227U))))) && (((/* implicit */_Bool) arr_36 [i_10]))));
        var_31 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) >= (arr_51 [i_10] [i_10 - 1]))))) - (min((var_9), (((/* implicit */unsigned long long int) var_8)))));
    }
    var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_7)) * (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_0) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)8740))))))) : (var_15)))) ? (((((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_14)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))) : (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
    /* LoopSeq 1 */
    for (short i_11 = 0; i_11 < 23; i_11 += 1) 
    {
        var_33 *= ((/* implicit */unsigned char) (((-(6880521886720954194ULL))) / (max((((/* implicit */unsigned long long int) var_5)), (var_9)))));
        var_34 = min(((+(arr_52 [i_11] [i_11]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (var_2)))) ? (((/* implicit */int) max((arr_37 [(signed char)22] [(signed char)22]), (((/* implicit */short) var_14))))) : (((/* implicit */int) max((((/* implicit */short) var_5)), (arr_37 [(short)14] [(short)14]))))))));
        arr_56 [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((((/* implicit */unsigned long long int) var_12)) ^ (var_9)))));
    }
    var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) (+(((/* implicit */int) (short)-12107)))))));
}

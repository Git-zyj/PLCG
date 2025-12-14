/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194420
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)62715))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_7) : (((/* implicit */unsigned long long int) arr_0 [i_2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_6) : (var_1)))))), (((/* implicit */unsigned long long int) ((var_7) < (((/* implicit */unsigned long long int) arr_3 [i_1 - 2] [i_2 + 1])))))));
                    var_11 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned char)218)) ? (((((/* implicit */_Bool) var_2)) ? (var_8) : (766871172))) : (min((arr_2 [i_2] [4]), (var_1)))))));
                    arr_8 [0ULL] [i_1 - 2] [i_2 + 1] [i_1 + 1] = ((/* implicit */int) (+(var_4)));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        var_12 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_10 [(_Bool)1] [i_2] [i_2 - 1] [i_2 - 2])) ? (18446744073709551586ULL) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1]))))));
                        var_13 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_3 [i_3] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_5)))) : (min((var_9), (((/* implicit */unsigned long long int) var_6))))))));
                    }
                    for (int i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        arr_15 [i_0] &= ((/* implicit */_Bool) ((long long int) var_0));
                        var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_2]))));
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 18446744073709551586ULL)) ? (var_3) : (var_7)))))) ? (((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */unsigned long long int) min((arr_7 [i_0] [i_1] [i_2] [i_4]), (((/* implicit */int) (_Bool)1))))) : (arr_13 [i_0] [i_1] [i_2] [i_4]))) : (((unsigned long long int) min((((/* implicit */int) arr_1 [i_0] [i_1 + 1])), (var_8))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (int i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        var_16 = ((/* implicit */long long int) ((int) min(((~(arr_17 [i_5] [2ULL]))), (((42ULL) % (var_7))))));
        var_17 = ((/* implicit */unsigned short) arr_18 [i_5] [i_5]);
    }
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(0)))) ? (((/* implicit */int) arr_19 [i_6] [i_6 + 1])) : ((-(arr_20 [i_6 + 1])))));
        var_19 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((unsigned char) arr_22 [(unsigned char)2]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_6] [i_6])) ? (arr_20 [13]) : (((/* implicit */int) arr_19 [i_6 + 1] [i_6]))))) : ((~(var_9)))))));
    }
    for (int i_7 = 1; i_7 < 21; i_7 += 4) 
    {
        var_20 ^= arr_25 [i_7];
        var_21 *= var_7;
        arr_26 [2U] = min((((/* implicit */unsigned long long int) (unsigned short)62736)), ((((~(var_3))) & (min((var_7), (var_3))))));
        /* LoopSeq 1 */
        for (long long int i_8 = 0; i_8 < 23; i_8 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 4) 
                {
                    for (int i_11 = 0; i_11 < 23; i_11 += 1) 
                    {
                        {
                            arr_37 [i_7] [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_9])) ? (((/* implicit */int) arr_32 [i_9] [i_8] [i_9])) : (arr_33 [i_7] [i_7] [i_7])))) ? (arr_30 [i_7 + 1]) : (((/* implicit */unsigned int) var_8))))) ? (((((/* implicit */_Bool) arr_28 [i_7 + 2] [i_7 + 2] [i_7 + 1])) ? (((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_7 + 2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_7 + 1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551574ULL)) ? (((((/* implicit */_Bool) arr_31 [i_8])) ? (arr_35 [i_7] [i_7] [i_7 - 1] [(unsigned short)11]) : (((/* implicit */unsigned int) -595081554)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((18446744073709551594ULL) > (18446744073709551556ULL))))))))));
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned long long int) arr_30 [i_7])))))) ? (var_2) : (max((var_7), (arr_34 [i_7] [i_7 - 1] [i_7 + 2] [i_7 - 1])))));
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_23 [i_7 - 1]) ? (var_6) : (((/* implicit */int) arr_23 [i_7 + 1]))))) ? (var_0) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_7 + 2]))) % (var_0)))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */unsigned short) var_3);
            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((var_2), (var_7)))) || (((/* implicit */_Bool) arr_35 [i_7] [i_8] [i_7 + 2] [i_7])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : ((+(((unsigned long long int) -946731366)))))))));
            arr_38 [i_7] [i_8] = ((((/* implicit */_Bool) ((((/* implicit */int) ((arr_24 [i_7 - 1] [i_7 + 1]) > (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_7] [i_7] [i_7 - 1] [i_8] [i_8])))))) % (((((/* implicit */_Bool) (unsigned short)62736)) ? (-2083180661) : (var_6)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((var_3) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_7] [i_7] [i_7]))))))))) : (((((/* implicit */_Bool) max((12088490069491852972ULL), (((/* implicit */unsigned long long int) var_6))))) ? (((((/* implicit */_Bool) arr_27 [i_8])) ? (((/* implicit */unsigned long long int) arr_24 [(_Bool)1] [i_8])) : (18446744073709551586ULL))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_24 [(unsigned char)20] [i_8])) : (var_2))))));
            var_26 = ((/* implicit */unsigned long long int) ((arr_30 [i_7]) << (((((((-595081554) + (2147483647))) << (((32767) - (32767))))) - (1552402086)))));
        }
    }
}

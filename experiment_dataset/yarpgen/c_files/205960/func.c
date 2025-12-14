/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205960
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((14267221326218822708ULL) & (min((((/* implicit */unsigned long long int) var_2)), (var_9))))) : (((/* implicit */unsigned long long int) min((((var_1) ? (((/* implicit */long long int) 2147483645)) : (var_2))), (var_2))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) ((18446744073709551611ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(signed char)0] [i_0])))))) >= (((((/* implicit */_Bool) (signed char)-76)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (2147483640)))));
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    for (signed char i_1 = 2; i_1 < 14; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (2147483628)));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 1; i_4 < 14; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
                        {
                            {
                                arr_18 [i_1] [i_1] [i_3] [i_3] [i_5] [i_3] [i_4 + 1] = ((/* implicit */signed char) (~((((!(((/* implicit */_Bool) -2147483628)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3]))) : (((arr_17 [(signed char)4] [i_3] [(signed char)4] [i_4 - 1] [(signed char)14] [2U]) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_5])))))))));
                                arr_19 [i_1] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1] = ((((/* implicit */int) min((arr_13 [i_1 + 1] [i_1]), (arr_8 [i_1 - 1] [i_1 - 2] [i_4 - 1])))) * ((+(((/* implicit */int) arr_8 [i_3] [i_1 - 1] [i_4 + 1])))));
                            }
                        } 
                    } 
                    arr_20 [(signed char)6] [(unsigned short)11] [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((arr_7 [i_1 + 1] [i_2]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_10 [i_1] [i_2]))))) ? (((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_3] [i_1])) ? (((/* implicit */int) (unsigned short)23862)) : (((/* implicit */int) arr_7 [i_1 - 2] [i_2])))) : (2147483629)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_6 = 2; i_6 < 13; i_6 += 3) 
    {
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((arr_11 [i_6 - 1] [i_6 - 2] [i_6 - 1] [i_6]) == (((/* implicit */int) arr_13 [i_6] [(short)2])))))));
        arr_25 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (-2147483644) : (arr_11 [i_6 + 1] [i_6 - 2] [i_6 + 1] [i_6 - 2])));
    }
    for (long long int i_7 = 2; i_7 < 20; i_7 += 3) 
    {
        var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_26 [i_7 - 2])), (2147483625)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_8 = 2; i_8 < 19; i_8 += 1) 
        {
            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) -2147483640))));
            var_16 = ((/* implicit */int) (((!(((/* implicit */_Bool) (short)29053)))) ? ((~(18446744073709551614ULL))) : (((/* implicit */unsigned long long int) var_6))));
        }
        /* LoopNest 2 */
        for (signed char i_9 = 1; i_9 < 19; i_9 += 3) 
        {
            for (int i_10 = 3; i_10 < 20; i_10 += 2) 
            {
                {
                    arr_35 [i_10 - 1] [7] [i_7] = ((/* implicit */unsigned char) arr_34 [i_9]);
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_29 [(_Bool)1] [i_9] [i_10 + 1]))))) ? (arr_28 [i_7 - 2] [i_9] [11LL]) : (arr_30 [i_7] [i_7] [i_7])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_9 + 2] [i_9 + 1] [i_7 + 1])) ? (((/* implicit */int) arr_27 [i_9 - 1] [i_7 + 1])) : (((/* implicit */int) arr_27 [i_9 - 1] [i_7 + 1]))))) : (((((/* implicit */_Bool) min((var_3), (arr_30 [i_9] [13LL] [i_9 + 2])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)156))) : (max((((/* implicit */long long int) (unsigned char)176)), (var_3))))))))));
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_34 [i_10 - 3]), (((/* implicit */unsigned short) arr_32 [i_7] [i_10 - 3] [i_10] [i_7 - 1]))))) == (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)158)) : (((/* implicit */int) arr_27 [i_7] [i_9])))) : (((/* implicit */int) arr_27 [i_10 - 2] [i_9 + 1]))))));
                }
            } 
        } 
        arr_36 [i_7 - 1] = ((/* implicit */long long int) min((((((((/* implicit */_Bool) arr_31 [i_7] [i_7 - 1] [i_7 - 1])) ? (((/* implicit */int) arr_32 [i_7 - 1] [i_7 - 2] [i_7] [i_7 + 1])) : (((/* implicit */int) arr_26 [i_7])))) + (((((/* implicit */_Bool) arr_34 [i_7])) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) arr_33 [i_7] [i_7 - 1] [i_7])))))), (((/* implicit */int) arr_34 [i_7 + 1]))));
        arr_37 [i_7 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_30 [i_7 - 2] [i_7 - 2] [i_7])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_7 + 1])) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_33 [i_7 + 1] [i_7] [i_7]))))) : (((((/* implicit */_Bool) (short)11456)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_28 [4ULL] [i_7] [i_7]))))))));
    }
}

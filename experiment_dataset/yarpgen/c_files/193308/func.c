/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193308
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
    var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)127))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (arr_0 [i_0])))) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((unsigned char) 0ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-18183))) : (var_0)));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            arr_5 [i_1] = ((/* implicit */short) ((unsigned int) arr_0 [i_0]));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */int) min((11265826663190502339ULL), (((/* implicit */unsigned long long int) 3604429721U))));
                        var_17 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-4777910998396321872LL)));
                    }
                } 
            } 
            arr_12 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((min((((/* implicit */int) var_13)), (max((((/* implicit */int) (unsigned short)41625)), ((-2147483647 - 1)))))) * (((arr_11 [i_0] [4LL] [i_0] [i_1] [i_1] [i_1]) / (var_10)))));
        }
    }
    for (int i_4 = 1; i_4 < 14; i_4 += 1) 
    {
        arr_15 [i_4] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)32767))) + (1544848122633793183LL)));
        /* LoopNest 2 */
        for (long long int i_5 = 1; i_5 < 13; i_5 += 1) 
        {
            for (unsigned char i_6 = 3; i_6 < 12; i_6 += 1) 
            {
                {
                    arr_22 [i_5] [i_5] [i_5] = ((/* implicit */short) ((3736946662U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 13459972889609190777ULL))))))));
                    /* LoopSeq 3 */
                    for (int i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-22694)))))));
                        arr_26 [i_5] [i_5] [i_5] = ((/* implicit */short) (-((~(((((/* implicit */int) var_6)) | (((/* implicit */int) (unsigned char)67))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 14; i_8 += 2) 
                        {
                            var_19 ^= ((/* implicit */_Bool) var_10);
                            var_20 = (i_5 % 2 == 0) ? (((/* implicit */int) ((((/* implicit */int) var_7)) > (((((/* implicit */int) var_1)) >> (((arr_19 [i_5]) - (3757872520U)))))))) : (((/* implicit */int) ((((/* implicit */int) var_7)) > (((((/* implicit */int) var_1)) >> (((((arr_19 [i_5]) - (3757872520U))) - (2663831141U))))))));
                            arr_30 [i_4] [i_5] [i_4] [i_4] = ((/* implicit */int) ((((unsigned long long int) arr_10 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) >= (arr_17 [i_6 + 1] [i_4 - 1])));
                            arr_31 [i_5] [i_5] [(unsigned short)10] [i_7] [i_8] = ((((/* implicit */int) (short)25567)) ^ (((/* implicit */int) ((((/* implicit */_Bool) -3121433497166425585LL)) && (((/* implicit */_Bool) (signed char)-91))))));
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_21 = ((/* implicit */_Bool) arr_27 [i_4] [i_4 + 1] [i_6 + 2] [i_9]);
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_6 [i_5 - 1]))));
                        arr_36 [i_4] [0LL] [i_5] [i_9] [i_9] = ((/* implicit */unsigned int) (!(((((/* implicit */int) (unsigned char)128)) != (((/* implicit */int) (short)-18203))))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_32 [i_9] [i_5] [i_4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (((unsigned long long int) -1484173828))));
                    }
                    for (short i_10 = 2; i_10 < 13; i_10 += 3) 
                    {
                        arr_39 [i_5] [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) var_6))));
                        var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)12644))));
                    }
                    var_25 = ((/* implicit */_Bool) min(((~(((/* implicit */int) var_7)))), (((/* implicit */int) ((unsigned short) arr_34 [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_5 - 1] [i_6 + 1])))));
                }
            } 
        } 
        arr_40 [i_4] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_27 [i_4] [i_4] [i_4] [(unsigned short)11]))));
        var_26 = ((/* implicit */unsigned int) ((unsigned char) (+(3604429721U))));
    }
    /* vectorizable */
    for (long long int i_11 = 0; i_11 < 12; i_11 += 1) 
    {
        var_27 = ((/* implicit */long long int) ((((((/* implicit */int) var_9)) / (((/* implicit */int) (short)25567)))) != (((/* implicit */int) ((unsigned short) (short)28)))));
        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) -1738379134)) ? (((/* implicit */int) (unsigned char)97)) : (((/* implicit */int) (unsigned short)54962))));
    }
    var_29 = ((/* implicit */unsigned long long int) ((var_6) ? ((~(min((var_11), (((/* implicit */unsigned int) var_14)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
    /* LoopSeq 2 */
    for (signed char i_12 = 1; i_12 < 18; i_12 += 2) 
    {
        var_30 = (-((-(((/* implicit */int) (short)(-32767 - 1))))));
        /* LoopNest 2 */
        for (long long int i_13 = 2; i_13 < 18; i_13 += 3) 
        {
            for (unsigned int i_14 = 1; i_14 < 15; i_14 += 4) 
            {
                {
                    arr_53 [i_13] [i_13] [i_13] [i_14] = ((/* implicit */long long int) var_4);
                    var_31 = (+(((1228475743U) - (var_12))));
                    var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((15LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
        arr_54 [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)0)), (0ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(var_9))))) : (((((/* implicit */unsigned int) arr_44 [i_12] [i_12])) / (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) | (var_11)))))));
        var_33 = ((/* implicit */unsigned char) max((var_33), (var_13)));
        arr_55 [i_12] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((1358217432U), (((/* implicit */unsigned int) (unsigned char)17))))) ? (((/* implicit */int) arr_3 [i_12] [i_12])) : (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) (~(arr_43 [i_12] [i_12])))) ? (((/* implicit */unsigned long long int) var_12)) : (18446744073709551615ULL)))));
    }
    /* vectorizable */
    for (unsigned short i_15 = 0; i_15 < 12; i_15 += 3) 
    {
        var_34 = ((/* implicit */_Bool) (~(((((/* implicit */int) var_4)) ^ (var_10)))));
        var_35 = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_15] [i_15])) ? (arr_6 [i_15]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)3)))));
        var_36 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)(-127 - 1)))));
    }
    var_37 = ((/* implicit */signed char) var_1);
}

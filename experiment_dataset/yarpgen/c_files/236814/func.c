/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236814
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
    var_17 &= ((/* implicit */long long int) min((var_13), (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-5)), (var_14))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0])) == (((((/* implicit */int) arr_2 [i_0] [i_0])) & (((/* implicit */int) arr_1 [i_0]))))));
        var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-39)) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1] [i_1])) & (((/* implicit */int) var_5)))))));
        arr_8 [i_1] = ((/* implicit */int) (signed char)43);
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            arr_12 [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))) <= (11ULL)));
            arr_13 [i_1] [i_1] = ((/* implicit */short) (-((~(var_7)))));
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_3] [i_1])) || (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-46)))))));
                var_21 &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_2] [i_3])) >= (((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1]))));
                var_22 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)43)) & (((/* implicit */int) arr_11 [i_1] [i_2] [(signed char)13]))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_14 [i_1] [i_1] [0LL] [i_3])) : (((/* implicit */int) arr_2 [(unsigned char)0] [i_2]))))));
            }
            for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                arr_20 [(signed char)9] [(signed char)9] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_6) >= (((/* implicit */unsigned long long int) 1794948621746676307LL))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(unsigned char)7])))))));
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    var_23 &= ((/* implicit */int) ((-6145722384120853731LL) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_9))))))));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_4 [i_1] [i_2])) : (((/* implicit */int) arr_4 [i_1] [i_2]))));
                }
                arr_24 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [(unsigned short)12] [i_4] [i_2] [i_4])) && (((/* implicit */_Bool) (signed char)-42))));
                /* LoopSeq 3 */
                for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    arr_27 [(short)14] [i_1] [(short)14] [(_Bool)1] = ((/* implicit */unsigned short) 1317711494);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        var_25 ^= ((/* implicit */long long int) (+(((((var_14) + (2147483647))) << (((((/* implicit */int) var_15)) - (46369)))))));
                        arr_31 [i_4] [(short)5] [i_4] [i_6] [i_2] [i_7] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)43))) | ((~(var_4)))));
                        var_26 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-39)) : (-1979565477)));
                    }
                }
                for (int i_8 = 2; i_8 < 14; i_8 += 2) 
                {
                    var_27 = ((/* implicit */_Bool) arr_33 [i_8] [i_4] [i_2] [i_2] [i_1]);
                    arr_34 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) var_14))));
                    var_28 |= ((/* implicit */unsigned char) var_5);
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_13)) <= (arr_23 [i_8 - 2] [i_4] [i_4] [i_8 + 2])));
                }
                for (unsigned long long int i_9 = 3; i_9 < 14; i_9 += 2) 
                {
                    /* LoopSeq 1 */
                    for (short i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        var_30 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((var_4) & (((/* implicit */long long int) arr_40 [i_9 - 1] [i_2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */long long int) var_14))))) : (((((/* implicit */_Bool) arr_32 [i_1] [i_2])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */int) arr_32 [i_2] [i_9 + 2])) << (((((/* implicit */int) arr_33 [i_9 - 3] [i_9 - 3] [i_10] [i_9] [i_4])) - (20263))))))));
                    }
                    var_32 = ((/* implicit */_Bool) arr_14 [i_1] [i_2] [i_1] [i_1]);
                    var_33 ^= ((/* implicit */unsigned char) var_12);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_11 = 2; i_11 < 13; i_11 += 1) 
                    {
                        var_34 ^= ((/* implicit */unsigned short) ((var_8) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_9 - 2] [i_11 + 3] [i_11 + 3])))));
                        var_35 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_11 - 1] [i_9 - 3] [i_2])) || (var_5)))) + (((/* implicit */int) var_11))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 16; i_12 += 2) 
                    {
                        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_48 [i_1] [i_1] [i_1] [i_1] [i_1]))) ^ (((arr_28 [i_1]) | (((/* implicit */long long int) ((/* implicit */int) (short)-9096)))))));
                        var_37 = ((/* implicit */long long int) ((((((/* implicit */int) arr_37 [i_1] [i_1] [i_1] [i_1] [i_1])) > (((/* implicit */int) arr_6 [i_1] [i_1])))) ? (((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) arr_37 [i_1] [i_2] [i_4] [i_9 - 1] [(_Bool)1]))))) : (((/* implicit */int) ((((/* implicit */long long int) arr_10 [i_1])) == (var_4))))));
                        var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_1] [i_1] [i_12] [i_9] [i_9 - 3])) && (((/* implicit */_Bool) arr_38 [i_1] [i_2] [i_12] [i_9] [i_9 - 1])))))));
                    }
                    for (short i_13 = 0; i_13 < 16; i_13 += 1) 
                    {
                        arr_51 [i_4] [i_4] [12] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_9 + 1] [i_4] [i_9 - 3] [i_9 - 2])) ? (var_0) : (arr_23 [i_9 - 2] [i_4] [i_9] [i_9 + 1])));
                        var_39 = ((/* implicit */short) ((((/* implicit */int) arr_39 [i_13] [i_13] [15LL] [i_9 - 2] [i_9 + 2] [i_9 + 1] [i_9])) | (((/* implicit */int) var_15))));
                        arr_52 [9LL] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((18446744073709551604ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_1] [i_9])))))) ? (((((/* implicit */unsigned long long int) var_13)) | (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246)))));
                        var_40 = ((/* implicit */unsigned short) (-(((137438953471ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)76)))))));
                        var_41 += ((/* implicit */int) arr_39 [i_1] [i_2] [13U] [i_4] [i_9 + 1] [i_9] [8LL]);
                    }
                }
            }
        }
        for (int i_14 = 1; i_14 < 14; i_14 += 1) 
        {
            var_42 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_41 [i_14 - 1] [i_14 - 1] [i_14 + 1] [i_14 + 2] [i_14] [i_14 + 1]))) & (var_1)));
            var_43 += ((/* implicit */short) ((((/* implicit */int) arr_26 [i_14 + 2] [i_14] [(signed char)14] [(signed char)14])) * (((/* implicit */int) arr_26 [i_14 - 1] [i_14 + 2] [14LL] [i_1]))));
            arr_55 [i_14] [i_14] [i_1] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (3768027692U))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_14] [i_14] [i_14] [i_14 - 1] [i_1] [i_1])))));
            var_44 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_47 [i_14 + 2] [i_14 - 1] [i_14 + 1] [i_14 + 2] [i_14 - 1])) < (((/* implicit */int) arr_47 [i_14 - 1] [i_14] [i_14 + 1] [i_14 + 1] [i_14]))));
        }
        arr_56 [i_1] = ((/* implicit */unsigned int) arr_28 [i_1]);
        var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) ((((/* implicit */int) arr_32 [i_1] [i_1])) == (((/* implicit */int) arr_32 [i_1] [i_1])))))));
    }
    var_46 = ((/* implicit */_Bool) var_16);
    var_47 = ((/* implicit */unsigned char) max((var_47), (((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) -2147483643)) : (var_0)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_2)) : (var_6))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)98)), ((unsigned char)147))))))))))));
}

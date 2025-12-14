/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52405
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (((/* implicit */int) min(((signed char)14), ((signed char)-33)))) : (((((/* implicit */int) (signed char)14)) / (((/* implicit */int) var_15)))))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */unsigned int) (~(arr_0 [i_0])))) < ((+(var_12))))))));
        arr_2 [i_0] = min((((((/* implicit */_Bool) (+(arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)14)) || (((/* implicit */_Bool) arr_1 [i_0])))))) : (arr_1 [i_0]))), (min((arr_1 [i_0]), (arr_1 [i_0]))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)8)) / (((/* implicit */int) (signed char)-13))));
    }
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        for (short i_2 = 2; i_2 < 21; i_2 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (int i_3 = 1; i_3 < 21; i_3 += 3) 
                {
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) (signed char)-1))));
                    arr_12 [i_2] [i_2] |= ((/* implicit */short) ((unsigned short) (signed char)-8));
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 4; i_6 < 22; i_6 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) ((short) ((((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) arr_14 [i_1] [i_4] [i_4])) : (((/* implicit */int) var_3)))) | (((/* implicit */int) ((((/* implicit */int) var_14)) <= (((/* implicit */int) (signed char)8))))))));
                                var_24 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-3))));
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) (signed char)5))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_7 = 4; i_7 < 19; i_7 += 1) 
    {
        var_26 = ((/* implicit */int) (~(max((((/* implicit */unsigned int) (signed char)2)), (var_12)))));
        arr_23 [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_7 - 2] [i_7 - 1])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)8))))) : (arr_18 [i_7] [i_7 - 2])))) ? ((~(((/* implicit */int) max(((signed char)-3), ((signed char)2)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) ^ (((/* implicit */int) (signed char)-23))))) ? (((((/* implicit */int) (signed char)7)) & (((/* implicit */int) var_15)))) : ((~(((/* implicit */int) (signed char)21))))))));
        arr_24 [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)11)), (arr_7 [i_7] [7ULL])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-1))))) : (((unsigned int) arr_15 [i_7] [i_7 - 3] [i_7] [i_7]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)8)) & (((/* implicit */int) (signed char)-3)))))))) : (((((((/* implicit */int) (signed char)-1)) + (2147483647))) << (((((/* implicit */int) (signed char)13)) - (13)))))));
    }
    for (signed char i_8 = 0; i_8 < 12; i_8 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_9 = 1; i_9 < 9; i_9 += 3) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-11)) ^ (((/* implicit */int) arr_25 [i_8] [i_9]))));
            var_28 = ((/* implicit */signed char) (+(arr_11 [i_8] [i_9 + 2] [i_8])));
            /* LoopSeq 2 */
            for (int i_10 = 2; i_10 < 9; i_10 += 1) 
            {
                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)22)) ? (var_6) : (((/* implicit */unsigned long long int) var_12))));
                var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_31 [i_10 - 2] [i_9 + 3] [i_9 + 2] [i_9 + 1])) && (((/* implicit */_Bool) arr_31 [i_10 - 1] [i_9 + 1] [i_9 + 1] [i_9 + 1]))));
                var_31 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_9 - 1])) ? (((((/* implicit */int) (signed char)17)) << (((arr_1 [i_10]) - (11183200092063282717ULL))))) : (((/* implicit */int) ((((/* implicit */int) var_13)) < (((/* implicit */int) (signed char)-1)))))));
            }
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                arr_36 [i_8] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)17)) / (((/* implicit */int) (signed char)-8))))) ^ (((((/* implicit */_Bool) arr_0 [i_9 + 1])) ? (var_16) : (arr_19 [i_8] [i_9] [i_9] [i_11] [i_11])))));
                arr_37 [(signed char)2] [i_9] [i_11 - 1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [4LL] [i_9])) ? (var_7) : (((/* implicit */int) arr_25 [(unsigned short)2] [i_8]))));
            }
            var_32 = ((/* implicit */unsigned int) arr_32 [i_8] [i_9] [i_9]);
            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_8] [i_9 + 2] [i_8])) ? ((+(var_6))) : (((/* implicit */unsigned long long int) arr_0 [i_9 - 1]))));
        }
        for (short i_12 = 1; i_12 < 9; i_12 += 3) /* same iter space */
        {
            var_34 = ((/* implicit */unsigned int) var_1);
            arr_42 [i_8] [i_8] [(_Bool)1] |= ((/* implicit */signed char) arr_10 [i_8] [i_8] [(signed char)12] [i_12]);
        }
        var_35 = ((/* implicit */unsigned int) max((((/* implicit */int) max((arr_20 [i_8]), (((/* implicit */short) arr_10 [i_8] [i_8] [i_8] [i_8]))))), (((((/* implicit */int) arr_10 [i_8] [i_8] [i_8] [i_8])) | (((/* implicit */int) arr_20 [i_8]))))));
        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */int) (signed char)33)) : (((/* implicit */int) (signed char)-9))))) ? ((-(((((/* implicit */_Bool) arr_13 [i_8] [i_8])) ? (((/* implicit */int) arr_32 [i_8] [i_8] [i_8])) : (((/* implicit */int) (signed char)-17)))))) : (((int) ((arr_21 [i_8] [i_8]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_8] [i_8] [i_8] [i_8]))))))));
        arr_43 [i_8] = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-12))));
    }
    for (short i_13 = 1; i_13 < 22; i_13 += 3) 
    {
        var_37 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_45 [i_13 + 1] [i_13]), (arr_45 [i_13 - 1] [i_13 + 2])))) ? (((((/* implicit */_Bool) arr_45 [i_13 + 2] [i_13])) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) arr_47 [i_13])))) : (((((/* implicit */_Bool) arr_47 [i_13])) ? (((/* implicit */int) arr_47 [i_13 - 1])) : (((/* implicit */int) arr_47 [i_13]))))));
        var_38 |= ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) (signed char)46)) - (((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) arr_44 [i_13 - 1])) : (((/* implicit */int) (signed char)-1)))))));
    }
}

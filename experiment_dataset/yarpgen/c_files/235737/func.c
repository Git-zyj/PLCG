/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235737
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
    var_15 += ((/* implicit */int) (+(var_2)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            arr_5 [i_0] [(unsigned char)8] [i_1 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-69)) ? (((/* implicit */int) (signed char)68)) : (((/* implicit */int) (signed char)-68))));
            var_16 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))));
        }
        for (int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_3 = 1; i_3 < 8; i_3 += 2) 
            {
                arr_10 [i_0] [i_2] [i_2] = ((/* implicit */long long int) (((((_Bool)1) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [(unsigned char)2]))))) <= (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3 + 1] [i_0])))));
                /* LoopSeq 3 */
                for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    var_17 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) (signed char)-69))))) + (var_8)));
                    var_18 = ((/* implicit */signed char) ((unsigned long long int) (+(((/* implicit */int) var_5)))));
                    arr_15 [i_0] [3LL] [3LL] [i_4] [i_4] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [3ULL] [i_3 + 2] [i_3 - 1])) ? (arr_8 [i_3 + 1] [i_3] [i_3 + 1] [i_3 - 1]) : (arr_8 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 1])));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        var_19 -= ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_3 + 2] [i_3 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_17 [i_0] [i_0] [i_3 + 2] [i_3 + 2])));
                        arr_18 [i_0] [i_0] [3LL] [(signed char)7] [(signed char)7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_6))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3] [i_3] [i_3 + 2] [i_3 - 1] [(signed char)1] [i_3])))));
                    }
                    for (signed char i_6 = 1; i_6 < 8; i_6 += 2) 
                    {
                        var_20 = ((/* implicit */_Bool) (signed char)68);
                        var_21 = ((/* implicit */unsigned short) ((long long int) (signed char)-19));
                        arr_21 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-69)) ? (((int) var_7)) : ((+(((/* implicit */int) arr_6 [(signed char)7] [(signed char)7]))))));
                        arr_24 [i_3 + 1] = ((/* implicit */unsigned int) arr_8 [i_0] [i_3] [i_4] [(_Bool)1]);
                        arr_25 [4LL] [i_2] [i_3] [(_Bool)1] [i_3] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [(unsigned char)5] [(signed char)2] [(signed char)2]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)68)) <= (((/* implicit */int) var_6)))))) : (((((/* implicit */_Bool) 5221358572122480914LL)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_3))))));
                    }
                    for (short i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        var_23 = (signed char)18;
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((var_5) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)69)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_0))))))))));
                    }
                }
                for (unsigned short i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    arr_30 [8ULL] [i_2] = ((/* implicit */unsigned char) (+(((((/* implicit */int) var_5)) + (((/* implicit */int) (signed char)-69))))));
                    var_25 = ((/* implicit */unsigned long long int) ((int) arr_14 [i_9] [i_9] [i_3 + 1] [i_3] [i_3 + 2] [i_0]));
                }
                for (unsigned char i_10 = 0; i_10 < 10; i_10 += 2) 
                {
                    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) arr_9 [i_3 + 1])) : (((/* implicit */int) arr_9 [i_3 - 1])))))));
                    var_27 -= ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 2788737464U))));
                }
            }
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_12 [6ULL] [6ULL] [6ULL] [i_2] [i_2] [6ULL]))))) && (((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-1)) + (2147483647))) << (((((/* implicit */int) arr_34 [i_0] [5ULL])) - (13407))))))));
            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((arr_29 [i_0] [i_2] [(_Bool)1] [i_0]) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_2] [i_0] [i_0] [i_2])) && (((/* implicit */_Bool) var_10))))))))));
            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((_Bool) (_Bool)1)))));
        }
        for (int i_11 = 0; i_11 < 10; i_11 += 2) 
        {
            arr_39 [i_11] [i_11] = ((/* implicit */int) ((long long int) (signed char)-96));
            /* LoopNest 3 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (long long int i_13 = 2; i_13 < 9; i_13 += 2) 
                {
                    for (unsigned long long int i_14 = 3; i_14 < 8; i_14 += 2) 
                    {
                        {
                            arr_47 [i_0] [i_0] [i_12] [i_13] [(unsigned short)2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_13 + 1])) && (((/* implicit */_Bool) arr_4 [i_13 + 1]))));
                            arr_48 [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_22 [i_0] [i_11])) < (((unsigned long long int) (unsigned short)55397))));
                            arr_49 [i_0] [i_14] [6U] [i_0] [(unsigned char)4] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((8067608991897275705ULL) * (((/* implicit */unsigned long long int) var_7))))) ? (((arr_8 [i_0] [i_11] [i_12] [9]) / (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_0] [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) var_9)) ? (arr_41 [i_13 - 2] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_11] [i_12] [i_12] [i_13] [i_12] [i_12])))))));
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */int) (signed char)68);
            var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_0] [i_11] [i_11] [i_11] [0ULL])) ? (((/* implicit */int) arr_46 [i_11] [i_11] [i_11] [i_11] [i_11])) : (((/* implicit */int) (signed char)-9))));
            /* LoopNest 2 */
            for (signed char i_15 = 0; i_15 < 10; i_15 += 2) 
            {
                for (signed char i_16 = 0; i_16 < 10; i_16 += 2) 
                {
                    {
                        var_33 = ((/* implicit */signed char) ((int) ((int) arr_29 [i_15] [i_15] [i_15] [i_16])));
                        arr_54 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)10119)) ? (-876188104) : (((/* implicit */int) arr_12 [i_0] [i_11] [(signed char)8] [i_16] [i_16] [i_16])))) ^ (((/* implicit */int) ((_Bool) arr_9 [i_16])))));
                    }
                } 
            } 
        }
        arr_55 [i_0] = ((/* implicit */short) (-(((/* implicit */int) var_11))));
    }
    var_34 = ((/* implicit */signed char) max((min((-5221358572122480929LL), (((/* implicit */long long int) (unsigned short)10146)))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) ^ (16364637699960917984ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */long long int) ((/* implicit */int) var_11))) | (var_7)))))));
    var_35 = ((/* implicit */_Bool) (unsigned short)10138);
}

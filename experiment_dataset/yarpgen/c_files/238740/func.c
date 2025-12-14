/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238740
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [(_Bool)1] [i_0] = ((/* implicit */signed char) max((max((((/* implicit */long long int) (signed char)127)), (-7239501438844527274LL))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))));
        var_10 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) <= (arr_0 [i_0]))))))) ? (min((arr_0 [i_0]), (((/* implicit */long long int) arr_1 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) (!(arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_11 &= ((/* implicit */_Bool) ((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-122)))));
        var_12 = ((arr_4 [i_1]) % (arr_3 [i_1] [i_1]));
        var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_5)))))));
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -2328079913204254561LL)) && ((_Bool)1))))) : (arr_4 [i_1])));
    }
    var_15 = ((/* implicit */long long int) var_2);
    var_16 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) < (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)96)) / (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))));
    /* LoopSeq 3 */
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) /* same iter space */
    {
        arr_8 [i_2] = (((!(((/* implicit */_Bool) arr_7 [i_2])))) ? (max((((/* implicit */long long int) arr_5 [i_2])), (max((arr_4 [i_2]), (8437285064605861020LL))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
        var_17 -= ((/* implicit */unsigned short) arr_6 [i_2]);
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_2])) / (((/* implicit */int) (!((!(((/* implicit */_Bool) var_3)))))))));
        var_19 = ((((/* implicit */_Bool) min((arr_4 [i_2]), (((/* implicit */long long int) max((((/* implicit */unsigned short) arr_7 [i_2])), (var_5))))))) ? (((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2]))) : (arr_4 [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2])))))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
        {
            arr_15 [i_3] [i_3] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) != (arr_10 [i_4]));
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_3] [i_3])) ^ (((((/* implicit */_Bool) arr_6 [i_3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)32)))))))));
            /* LoopSeq 3 */
            for (short i_5 = 0; i_5 < 19; i_5 += 1) 
            {
                /* LoopSeq 3 */
                for (signed char i_6 = 0; i_6 < 19; i_6 += 2) /* same iter space */
                {
                    var_21 = ((/* implicit */long long int) (unsigned short)65535);
                    var_22 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) / (-5316354907523331446LL)));
                }
                for (signed char i_7 = 0; i_7 < 19; i_7 += 2) /* same iter space */
                {
                    arr_25 [i_3] [i_3] [i_5] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((var_3) <= (arr_3 [(_Bool)1] [i_4]))))));
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_18 [i_3] [i_3] [i_4] [i_3] [i_5] [i_7])));
                    var_24 = ((/* implicit */unsigned int) (signed char)-111);
                }
                for (signed char i_8 = 0; i_8 < 19; i_8 += 2) /* same iter space */
                {
                    var_25 = ((/* implicit */long long int) var_8);
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_5] [i_3])) && (((/* implicit */_Bool) arr_24 [i_4] [i_4] [i_5] [i_8] [i_3] [i_3]))));
                    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-88)) ? (((/* implicit */int) (_Bool)1)) : (508239320)))) ? (18ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                    var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)33401))));
                    var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_4]))));
                }
                /* LoopSeq 1 */
                for (short i_9 = 0; i_9 < 19; i_9 += 3) 
                {
                    arr_31 [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_5] [i_5] [i_5] [i_3] [i_3])) ? (((var_1) | (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3] [i_4] [i_3]))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)109)))));
                    arr_32 [i_3] [i_4] [i_4] [i_4] [i_4] [i_5] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_6))));
                }
            }
            for (short i_10 = 2; i_10 < 18; i_10 += 3) 
            {
                arr_35 [i_10] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_3])) ? (arr_4 [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                /* LoopSeq 1 */
                for (unsigned short i_11 = 0; i_11 < 19; i_11 += 2) 
                {
                    var_30 = ((((/* implicit */int) arr_24 [i_10] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10] [i_10])) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))));
                    arr_38 [i_4] [i_10] [i_11] &= ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-53)) : (((/* implicit */int) arr_19 [(signed char)2] [i_4] [i_4] [16LL]))))));
                }
            }
            for (signed char i_12 = 0; i_12 < 19; i_12 += 3) 
            {
                var_31 = ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (unsigned short)3)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (short)30950))))) : (((/* implicit */long long int) ((/* implicit */int) var_0))));
                arr_41 [5ULL] [i_4] [i_4] = ((unsigned short) (-(((/* implicit */int) arr_40 [i_3]))));
                var_32 = ((((long long int) arr_13 [i_3] [i_4] [i_3])) >= (arr_9 [i_4]));
                arr_42 [i_12] [i_12] [i_12] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (((/* implicit */int) arr_40 [i_3]))))) ? (arr_30 [i_3] [i_4] [i_3] [i_3]) : (((((var_3) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)-48)) + (64)))))));
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 19; i_13 += 1) 
                {
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */long long int) (~((~(((/* implicit */int) var_4))))));
                            arr_47 [i_3] [i_4] [i_12] [i_13] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) arr_45 [i_3] [i_4] [i_14 - 1] [(unsigned char)4] [i_14])) ? (((/* implicit */int) arr_45 [i_3] [i_4] [i_14 - 1] [i_3] [i_3])) : (((/* implicit */int) arr_45 [i_3] [i_4] [i_14 - 1] [i_13] [(short)8]))));
                            var_34 = ((/* implicit */unsigned long long int) (~(arr_3 [i_14 - 1] [i_14 - 1])));
                        }
                    } 
                } 
            }
        }
        for (long long int i_15 = 0; i_15 < 19; i_15 += 2) /* same iter space */
        {
            var_35 = ((/* implicit */signed char) var_2);
            var_36 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_44 [i_3] [(_Bool)1] [(signed char)6] [i_15] [(_Bool)1]))));
            var_37 = ((/* implicit */unsigned char) arr_36 [i_3] [i_15] [6] [i_15]);
        }
        var_38 = (~(arr_23 [i_3] [(unsigned char)16] [i_3] [(unsigned char)16] [i_3] [i_3]));
    }
    /* vectorizable */
    for (unsigned char i_16 = 0; i_16 < 19; i_16 += 2) /* same iter space */
    {
        var_39 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_49 [i_16] [i_16] [i_16])) ^ (((/* implicit */int) arr_33 [i_16] [i_16] [i_16]))));
        var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) var_4))));
        var_41 = ((/* implicit */unsigned short) (!(arr_39 [i_16] [i_16] [i_16])));
    }
    var_42 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_0))))))) : (((var_7) * (((/* implicit */unsigned long long int) var_3))))));
}

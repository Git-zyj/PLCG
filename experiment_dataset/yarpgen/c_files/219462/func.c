/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219462
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
    var_16 = ((/* implicit */long long int) (((_Bool)1) ? (4294967295U) : (4294967290U)));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned short) arr_5 [i_0]);
            var_18 = ((/* implicit */int) (unsigned char)158);
            arr_6 [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 1180525287U)))) ? (((((/* implicit */_Bool) ((8497591310030169394ULL) + (((/* implicit */unsigned long long int) 4U))))) ? (((((/* implicit */_Bool) 3114442014U)) ? (((/* implicit */int) (signed char)11)) : (-668642350))) : ((+(((/* implicit */int) (unsigned short)4338)))))) : (((((/* implicit */int) (unsigned short)61198)) << (((((((/* implicit */int) var_5)) + (116))) - (21)))))));
        }
        arr_7 [(signed char)17] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (max((var_2), (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((/* implicit */int) ((469961792) < (((/* implicit */int) var_14))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) (unsigned short)61208)) ? (var_9) : (arr_2 [i_0] [i_0] [i_0])))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_2 = 3; i_2 < 23; i_2 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_2 - 2]))));
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_2] [i_2 - 3] [i_2 - 2] [i_2]))));
                        arr_15 [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3]))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (18446744073709551615ULL)))));
                    }
                } 
            } 
            arr_16 [i_2 - 1] [i_2] = ((/* implicit */short) var_2);
        }
        for (signed char i_5 = 3; i_5 < 23; i_5 += 1) 
        {
            arr_20 [i_0] = ((/* implicit */long long int) (!(((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [(unsigned char)15])) && (((/* implicit */_Bool) var_13)))) || (((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) -4058923013834606452LL))))))));
            arr_21 [i_0] [i_5] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) 8497591310030169386ULL)) && (((/* implicit */_Bool) var_7)))) && (((/* implicit */_Bool) arr_4 [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4328)) ? (((((/* implicit */_Bool) 9949152763679382221ULL)) ? (-9223372036854775804LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_1 [i_5] [i_0])), (arr_5 [i_0]))))))))));
            arr_22 [i_0] [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)31)) & ((+(((/* implicit */int) var_11)))))) >= (((/* implicit */int) ((var_10) >= (((/* implicit */int) ((((/* implicit */_Bool) 3114441996U)) && (((/* implicit */_Bool) (signed char)-52))))))))));
            var_21 &= ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50408))) + (((arr_18 [i_5 + 1]) << (((((/* implicit */int) (short)-13841)) + (13900))))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)2234)) ? (((arr_13 [i_0] [i_0] [i_5] [i_5 + 1]) * (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 5204625553322777451LL)) ? (((/* implicit */int) arr_1 [2] [i_0])) : (((/* implicit */int) (unsigned short)40880)))))))));
        }
        for (unsigned short i_6 = 2; i_6 < 23; i_6 += 4) 
        {
            arr_26 [i_0] = (unsigned short)40866;
            arr_27 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((long long int) 10U)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24669)))));
            arr_28 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_11)) == (((/* implicit */int) var_0)))) ? (((arr_23 [i_6 - 2] [i_0]) ? (((/* implicit */int) arr_23 [i_6 - 1] [i_6 - 1])) : (((/* implicit */int) arr_23 [i_6 + 1] [i_6])))) : (((/* implicit */int) ((signed char) arr_23 [i_6 - 2] [6ULL])))));
            arr_29 [i_0] [i_6] = ((/* implicit */int) ((((/* implicit */long long int) max((var_10), (((((((/* implicit */int) (signed char)-77)) + (2147483647))) << (((2439061881U) - (2439061881U)))))))) & (max((((/* implicit */long long int) var_12)), (((arr_23 [i_0] [i_0]) ? (1760814692953473598LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
        }
        var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((long long int) max((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (signed char)25)))))) ^ (((arr_18 [i_0]) + (((/* implicit */unsigned long long int) min((9223372036854775776LL), (((/* implicit */long long int) var_1)))))))));
    }
    for (signed char i_7 = 1; i_7 < 11; i_7 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_8 = 3; i_8 < 9; i_8 += 2) 
        {
            arr_36 [i_7] [i_8] = ((/* implicit */unsigned short) ((long long int) ((unsigned char) arr_34 [i_7 + 1])));
            var_23 = ((/* implicit */long long int) var_15);
            arr_37 [i_7] = ((/* implicit */signed char) ((long long int) (~(max((((/* implicit */int) arr_24 [i_7] [i_8 - 2] [i_8])), (var_10))))));
        }
        var_24 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_10 [(short)16] [6U] [i_7 + 1] [(signed char)20]), (arr_9 [i_7 + 1] [i_7 + 1]))))) ^ (((unsigned int) arr_25 [i_7 + 1] [i_7 + 1]))))), (arr_19 [i_7])));
        var_25 = ((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */long long int) ((short) var_7))), (9223372036854775807LL))));
    }
    /* vectorizable */
    for (int i_9 = 4; i_9 < 13; i_9 += 4) 
    {
        arr_40 [i_9] [(signed char)5] = ((/* implicit */signed char) arr_25 [i_9] [i_9]);
        arr_41 [i_9] = ((/* implicit */unsigned char) arr_38 [(_Bool)1] [(_Bool)1]);
        /* LoopNest 2 */
        for (unsigned char i_10 = 0; i_10 < 15; i_10 += 1) 
        {
            for (unsigned long long int i_11 = 1; i_11 < 14; i_11 += 2) 
            {
                {
                    arr_48 [i_10] = ((/* implicit */_Bool) arr_24 [i_9] [i_9 - 4] [i_9]);
                    var_26 = ((/* implicit */short) var_13);
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 15; i_12 += 3) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 15; i_13 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */_Bool) (signed char)31);
                                var_28 = ((/* implicit */long long int) var_10);
                                var_29 = ((/* implicit */unsigned short) var_6);
                            }
                        } 
                    } 
                    arr_55 [i_9 + 1] [i_9] [i_10] [i_9 + 1] = ((signed char) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_54 [(short)12] [(short)12] [i_9] [(short)12] [i_11]))));
                }
            } 
        } 
        arr_56 [i_9] = ((/* implicit */unsigned short) arr_23 [i_9 - 1] [i_9]);
    }
    for (unsigned char i_14 = 4; i_14 < 10; i_14 += 2) 
    {
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) (unsigned short)62908))) <= (((/* implicit */int) (unsigned short)8))));
        var_31 = (~(max((((3027960226244484594ULL) >> (((((/* implicit */int) (signed char)-76)) + (98))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)21345)) & (((/* implicit */int) arr_12 [i_14] [i_14] [i_14] [i_14]))))))));
        var_32 = ((/* implicit */long long int) ((short) var_5));
        arr_59 [i_14 + 2] = ((/* implicit */unsigned short) arr_1 [i_14 - 3] [i_14 - 1]);
        arr_60 [i_14 + 1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_23 [i_14 - 1] [i_14 + 2])), (((var_13) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
    }
}

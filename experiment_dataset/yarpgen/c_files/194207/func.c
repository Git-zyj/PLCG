/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194207
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0] [i_0])));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)2461)) : (((/* implicit */int) (unsigned short)0))));
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (~(((/* implicit */int) var_1)))))));
            var_19 = ((/* implicit */short) (-(((/* implicit */int) arr_0 [i_0]))));
        }
    }
    for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((((/* implicit */int) (unsigned short)25967)) >> (((var_10) - (2085010557))))) < (((/* implicit */int) arr_6 [(short)9])))))));
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) ((var_7) && (((/* implicit */_Bool) arr_7 [i_2] [i_2]))))), ((+(((/* implicit */int) var_5))))))) ? (((/* implicit */int) (unsigned short)25967)) : (((/* implicit */int) arr_6 [(signed char)7])))))));
        arr_8 [i_2] = ((/* implicit */int) var_7);
        arr_9 [i_2] = ((/* implicit */long long int) ((((/* implicit */long long int) var_10)) < (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)25), (((/* implicit */short) (signed char)6)))))) : (var_3)))));
    }
    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_3]))))) ? (((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) arr_10 [i_3])))) : (((((/* implicit */int) arr_10 [i_3])) >> (((((/* implicit */int) arr_10 [i_3])) - (24645)))))));
        arr_12 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_10 [18ULL])) : (((var_7) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))))) : (((((/* implicit */_Bool) (unsigned short)16267)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)3840))))));
    }
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) -6700790409933036181LL)) && (((/* implicit */_Bool) (unsigned char)64))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((unsigned short) var_13))) : (((((/* implicit */int) var_12)) - (((/* implicit */int) var_14)))))) : (max((((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */int) var_11)))), ((~(((/* implicit */int) var_11))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_4 = 3; i_4 < 11; i_4 += 4) 
    {
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)11284)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25967))) : (-2883807229017355853LL)));
        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_4 - 2])) ? (((/* implicit */int) arr_0 [i_4 - 2])) : (((/* implicit */int) var_12)))))));
    }
    for (int i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        var_26 = ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) max((var_8), (((/* implicit */unsigned char) var_15)))))))) - (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (4294967285U)))));
        var_27 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -17)) && (((/* implicit */_Bool) (signed char)7)))) ? (((/* implicit */int) arr_17 [i_5])) : (((((/* implicit */_Bool) 3450332216533856178ULL)) ? (((/* implicit */int) arr_17 [i_5])) : (((/* implicit */int) arr_17 [i_5]))))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 2) 
    {
        arr_23 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_6])) ? (arr_7 [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
        arr_24 [i_6] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) var_3)))));
    }
    for (unsigned short i_7 = 1; i_7 < 15; i_7 += 4) 
    {
        var_28 = ((/* implicit */long long int) (-(((arr_21 [i_7 + 1]) >> (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_25 [(short)0])) : (((/* implicit */int) var_7)))) - (19824)))))));
        /* LoopNest 2 */
        for (short i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            for (short i_9 = 0; i_9 < 16; i_9 += 2) 
            {
                {
                    var_29 -= ((/* implicit */short) min(((unsigned short)54597), (((/* implicit */unsigned short) arr_27 [i_7 - 1]))));
                    /* LoopSeq 3 */
                    for (long long int i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned short) var_9);
                        var_31 = ((/* implicit */short) var_13);
                        var_32 -= ((/* implicit */short) arr_35 [i_8] [i_8] [i_8] [3LL]);
                        arr_37 [(unsigned short)12] [(unsigned short)12] [i_7] [i_7] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_8)), (arr_29 [i_8])))) ? (arr_5 [i_7 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) arr_34 [i_8] [i_10]))))))))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 16; i_11 += 1) 
                    {
                        arr_40 [i_7] [i_9] [i_7] [i_7] = ((/* implicit */unsigned short) min((((/* implicit */int) var_8)), (((((/* implicit */int) max(((unsigned short)49446), (arr_26 [i_8] [i_8])))) >> (((((int) 2123263622655052833ULL)) + (388166654)))))));
                        var_33 = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_30 [i_11] [i_8])) | (((/* implicit */int) var_2))))));
                        arr_41 [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_7 + 1] [i_7 - 1]))) | (var_13)))) ? (max((var_16), (((/* implicit */unsigned int) arr_29 [12ULL])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_11 [i_7 - 1]) > (arr_11 [i_7 + 1])))))));
                        arr_42 [i_8] [i_8] [i_9] [(short)1] [11ULL] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_7 [(signed char)3] [i_8])));
                    }
                    for (long long int i_12 = 0; i_12 < 16; i_12 += 3) 
                    {
                        var_34 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_33 [i_7 - 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2)))) >> ((((+(((/* implicit */int) arr_33 [i_7 - 1])))) - (16611)))));
                        var_35 -= ((/* implicit */short) ((((((/* implicit */_Bool) arr_31 [i_7 + 1] [i_8] [(short)1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_34 [i_12] [i_12])) : (((/* implicit */int) var_2))))) : (var_13))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_29 [i_12])) - (((/* implicit */int) arr_29 [i_7 + 1])))))));
                        arr_47 [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) arr_38 [i_7] [i_8])) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19308))) ^ (var_16)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_7 - 1]))) : (((arr_1 [i_7] [i_12]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [(signed char)12] [(signed char)12] [(signed char)12]))))))) : (((unsigned int) ((((/* implicit */int) (short)17719)) ^ (((/* implicit */int) arr_25 [i_8])))))));
                    }
                }
            } 
        } 
        var_36 = ((/* implicit */int) var_13);
    }
}

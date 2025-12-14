/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37511
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((var_10) >= (var_10))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) ^ (var_11)))));
        var_16 = ((/* implicit */unsigned short) arr_1 [i_0]);
    }
    for (short i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_2 = 1; i_2 < 16; i_2 += 3) 
        {
            var_17 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)40))));
            arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) arr_8 [(_Bool)1] [(_Bool)1]);
            var_18 += ((((/* implicit */_Bool) arr_1 [i_1])) ? (((unsigned long long int) arr_1 [i_2 + 2])) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_2 - 1]))))));
        }
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                for (unsigned char i_5 = 3; i_5 < 17; i_5 += 4) 
                {
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-2693))))) ? (((/* implicit */int) arr_6 [i_3] [i_3] [i_6])) : (((/* implicit */int) arr_17 [i_1] [i_3] [i_3] [i_1] [i_6])))))));
                            arr_22 [(unsigned short)5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)92))) >= (1900489277U)));
                        }
                        for (signed char i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            arr_25 [5ULL] = ((/* implicit */unsigned int) min((((/* implicit */int) max((arr_24 [i_5 + 1] [i_7] [i_5 + 1] [i_7] [i_7]), (((/* implicit */unsigned short) ((signed char) (signed char)71)))))), (var_8)));
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)221)))))));
                            var_21 = ((((/* implicit */_Bool) ((2815714619U) * (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)-31)), (var_8))))))) ? (max((((/* implicit */long long int) arr_10 [i_5 - 3])), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_2)) : (arr_2 [i_1] [i_1]))))) : (((/* implicit */long long int) var_4)));
                        }
                        for (unsigned short i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            arr_28 [i_1] [i_3] [i_4] [i_4] [i_5 - 1] [5LL] [2LL] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) arr_15 [(_Bool)0] [i_1] [i_5 - 1] [i_5] [i_5 + 1] [i_5 - 3])) | (var_10))) ^ (((/* implicit */long long int) (~(((/* implicit */int) arr_17 [i_5] [i_5] [i_5 - 1] [i_5 - 1] [i_5 + 1])))))));
                            arr_29 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (-((-(arr_15 [i_5 - 1] [i_3] [i_4] [i_5] [i_5 - 1] [i_5 - 3])))));
                        }
                        /* vectorizable */
                        for (unsigned short i_9 = 4; i_9 < 17; i_9 += 3) 
                        {
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_1] [i_3] [i_5 + 1])))))));
                            var_23 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_4] [i_3] [12] [i_5 - 2] [i_1]))) - (var_14));
                        }
                        arr_34 [i_1] [(signed char)9] [(short)14] [i_4] = ((/* implicit */_Bool) ((((arr_15 [i_5 - 1] [i_5] [i_5 - 3] [i_5 - 1] [i_5 - 1] [i_5 - 3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (arr_6 [i_1] [i_3] [i_5]))))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_23 [i_1] [i_1] [i_1]), (((/* implicit */long long int) arr_20 [i_1] [i_3] [i_3] [i_5] [i_5])))))))))));
                    }
                } 
            } 
            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) min(((+(var_9))), (((((/* implicit */_Bool) (signed char)-36)) ? (((/* implicit */int) (unsigned short)56998)) : (((/* implicit */int) (signed char)7)))))))));
        }
        /* LoopNest 2 */
        for (signed char i_10 = 0; i_10 < 18; i_10 += 3) 
        {
            for (long long int i_11 = 0; i_11 < 18; i_11 += 1) 
            {
                {
                    arr_39 [i_11] [i_10] = ((/* implicit */unsigned char) arr_6 [i_1] [(signed char)8] [i_11]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 2) 
                    {
                        for (signed char i_13 = 2; i_13 < 16; i_13 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) arr_6 [(signed char)17] [i_13 + 2] [(signed char)17])))));
                                arr_46 [i_11] [3U] [i_10] [i_11] = ((/* implicit */long long int) (((-(((/* implicit */int) arr_10 [i_13 - 2])))) / (((/* implicit */int) ((unsigned char) min((arr_40 [i_10] [(unsigned char)7]), (((/* implicit */unsigned long long int) (signed char)-25))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_6)))))));
            arr_51 [(unsigned char)10] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) 20U)) || (((/* implicit */_Bool) (unsigned short)54292))));
            arr_52 [i_1] [i_1] [(signed char)14] = ((/* implicit */signed char) (-(arr_15 [i_1] [i_1] [i_14] [i_14] [i_14] [i_14])));
            var_27 = ((/* implicit */signed char) (-(((/* implicit */int) arr_26 [(unsigned char)15] [(unsigned char)15] [i_14] [i_14]))));
        }
        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) arr_19 [i_1] [i_1] [i_1] [i_1]))));
    }
    /* vectorizable */
    for (short i_15 = 3; i_15 < 11; i_15 += 3) 
    {
        arr_55 [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */int) (signed char)24)) > (((/* implicit */int) (unsigned short)31744))));
        arr_56 [i_15] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -3871843057072962366LL)) ? (((/* implicit */int) (_Bool)0)) : (858838615)));
        /* LoopNest 2 */
        for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 1) 
        {
            for (unsigned char i_17 = 2; i_17 < 11; i_17 += 3) 
            {
                {
                    arr_62 [i_16] [i_16] [i_16] [9U] = ((/* implicit */unsigned char) ((var_13) - (var_2)));
                    var_29 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)31))) / ((-9223372036854775807LL - 1LL))));
                    arr_63 [i_15] [i_16] [i_16] [i_17 - 2] = ((/* implicit */short) ((long long int) (unsigned short)4095));
                }
            } 
        } 
    }
    var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) (~(var_0))))) < (var_2)));
}

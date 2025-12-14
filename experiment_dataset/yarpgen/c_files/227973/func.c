/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227973
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
    var_15 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) (_Bool)0)), (var_8))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -711937522924157218LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)0))))) : ((~(var_5)))))));
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) var_7))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2 + 4] = ((/* implicit */_Bool) -711937522924157218LL);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_17 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_2 - 2] [i_3]))) == (711937522924157210LL)));
                                arr_18 [i_4] = ((unsigned int) ((var_8) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))));
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (signed char)-9))));
                                var_18 *= ((/* implicit */_Bool) ((((((((/* implicit */_Bool) 711937522924157202LL)) ? (((((/* implicit */_Bool) 0ULL)) ? (-711937522924157218LL) : (((/* implicit */long long int) -1)))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_1 - 1] [i_3] [i_4]))))) + (9223372036854775807LL))) << ((((+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4] [3ULL] [7LL]))) | (arr_2 [i_0]))))) - (18446744073709551615ULL)))));
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) ((_Bool) arr_3 [i_0] [i_1] [(unsigned char)11]))), (arr_3 [i_0] [i_1] [i_0]))))) | (max((((8429510502733019561LL) | (((/* implicit */long long int) ((/* implicit */int) var_12))))), (((/* implicit */long long int) max((-1419940489), (((/* implicit */int) (signed char)115)))))))));
                            }
                        } 
                    } 
                    arr_19 [i_1 + 2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-84)) + (2147483647))) >> (((/* implicit */int) arr_0 [(short)19]))))) : (((arr_2 [i_1]) << (((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_0])))))) == (((/* implicit */unsigned long long int) max((((/* implicit */int) var_12)), (((((/* implicit */int) (unsigned short)47157)) | (((/* implicit */int) arr_12 [i_0] [i_1 - 3] [i_2] [i_2])))))))));
                    arr_20 [i_2] [i_1 + 3] [i_0] [18U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((-(var_2)))))) ? ((+(((arr_2 [i_1 - 1]) ^ (2305843009213693824ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((1617903906), (((/* implicit */int) arr_13 [i_2] [i_2] [14LL] [i_0]))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((arr_16 [19LL] [i_1] [i_1] [19LL] [i_1]) < (((/* implicit */int) var_9))))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) / (16140901064495857791ULL)));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    var_21 ^= ((/* implicit */unsigned long long int) (unsigned char)8);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_32 [i_7] [i_7] = ((/* implicit */unsigned char) ((long long int) var_7));
                        var_22 ^= ((/* implicit */unsigned int) ((_Bool) arr_31 [i_5] [i_7 + 1] [i_8]));
                        arr_33 [i_8] [i_6 - 1] [i_7] [i_6 - 1] [i_5] = ((/* implicit */unsigned int) var_7);
                    }
                }
                for (signed char i_9 = 3; i_9 < 19; i_9 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_35 [i_9 + 1] [(signed char)17] [i_6 - 1]) != (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) * (((/* implicit */int) ((((/* implicit */int) arr_25 [(unsigned short)14] [i_6 - 1] [i_9 - 3] [(signed char)16])) == (((/* implicit */int) (unsigned char)255)))))));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) (((!(((/* implicit */_Bool) var_6)))) || (((/* implicit */_Bool) (((_Bool)1) ? (arr_30 [i_6]) : (((/* implicit */unsigned long long int) arr_8 [i_5] [i_6] [21U] [i_6])))))))) % (((((/* implicit */int) ((-4988278029005697700LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23177)))))) + (((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9))))))));
                }
                /* vectorizable */
                for (signed char i_10 = 3; i_10 < 19; i_10 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) 1137841907U))));
                                var_26 = ((/* implicit */long long int) (signed char)118);
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) ((signed char) arr_14 [i_5] [i_5] [(_Bool)1] [(_Bool)1])))));
                    arr_46 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((3852403364U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                }
                /* LoopSeq 1 */
                for (unsigned int i_13 = 2; i_13 < 19; i_13 += 4) 
                {
                    var_28 = ((/* implicit */signed char) 11502486948114611529ULL);
                    arr_50 [i_5] [i_5] [i_13 - 1] = ((/* implicit */signed char) (unsigned char)0);
                    arr_51 [(unsigned short)5] &= ((/* implicit */short) max((((((unsigned long long int) var_3)) | (((/* implicit */unsigned long long int) max((442563917U), (((/* implicit */unsigned int) arr_43 [i_13] [i_6 - 1] [i_6 - 1] [i_5] [i_5]))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_12 [i_5] [i_6] [i_5] [i_5])) << (((arr_10 [i_5] [i_5] [i_5] [(signed char)21]) - (8384998301154143710ULL))))) - (((/* implicit */int) arr_0 [i_6 - 1])))))));
                }
                var_29 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) >= (arr_2 [i_5])));
                arr_52 [i_5] [i_5] = ((/* implicit */unsigned short) var_14);
            }
        } 
    } 
}

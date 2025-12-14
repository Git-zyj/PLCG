/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46698
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    var_15 = ((/* implicit */_Bool) arr_8 [i_0] [i_0] [(unsigned char)11]);
                    var_16 ^= 9364190197664601606ULL;
                    var_17 = ((/* implicit */unsigned char) ((long long int) -2147483637));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        arr_12 [i_0] [i_1] [(unsigned char)0] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2] [i_2]))));
                        arr_13 [i_3] [i_1] [(_Bool)1] [i_3] &= ((/* implicit */int) var_14);
                        var_18 = ((/* implicit */long long int) ((unsigned long long int) arr_3 [i_3]));
                    }
                    for (int i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */long long int) arr_5 [i_0] [i_4]);
                        arr_17 [i_1] [(_Bool)1] [i_2] = ((/* implicit */short) 268435455);
                    }
                    for (int i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned char) -268435443);
                        arr_21 [i_0] [i_2] [i_2] = ((/* implicit */signed char) arr_8 [i_0] [16] [i_5]);
                    }
                    arr_22 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0]))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_21 = ((/* implicit */unsigned int) ((1644273961235126275ULL) + (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)89))) + (-1473732802607364485LL))))));
                    var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)247))));
                }
                for (long long int i_7 = 2; i_7 < 19; i_7 += 3) 
                {
                    var_23 = ((/* implicit */_Bool) max((var_23), ((_Bool)1)));
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (-(((((((/* implicit */_Bool) 280976087815660540LL)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) & (((/* implicit */long long int) 2862431719U)))))))));
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)249)) | (((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */long long int) arr_23 [20ULL] [i_0] [i_7] [20ULL])), ((-(arr_14 [i_0] [i_1] [i_1] [i_7 + 2])))))));
                    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (+(((/* implicit */int) var_11)))))));
                }
                var_27 = ((/* implicit */long long int) arr_2 [i_0]);
                var_28 = ((/* implicit */unsigned short) arr_1 [i_0] [(signed char)7]);
                var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) arr_14 [(unsigned char)9] [i_1] [i_1] [(unsigned char)9]))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    arr_31 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_29 [i_0])) & (((/* implicit */int) arr_29 [i_0]))));
                    var_30 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_26 [i_8] [i_1] [i_1] [i_0]))));
                }
                for (unsigned int i_9 = 0; i_9 < 21; i_9 += 2) /* same iter space */
                {
                    arr_34 [i_9] [i_1] [i_0] [i_0] = ((/* implicit */int) var_2);
                    arr_35 [i_0] [(_Bool)1] [(unsigned char)15] = ((/* implicit */short) ((signed char) ((((/* implicit */long long int) 736800899U)) & (arr_9 [i_1] [i_9]))));
                    var_31 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_8 [i_0] [i_1] [i_9])) + (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)250))) <= (1378873721197063782LL)))))) & (((arr_24 [i_9] [i_1] [i_0]) | (((/* implicit */int) (short)26396))))));
                }
                for (unsigned int i_10 = 0; i_10 < 21; i_10 += 2) /* same iter space */
                {
                    var_32 = ((/* implicit */long long int) (~((+(((/* implicit */int) (unsigned char)5))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_11 = 0; i_11 < 21; i_11 += 1) /* same iter space */
                    {
                        arr_43 [i_0] [i_0] [i_1] [i_11] [(unsigned short)0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)-8302)) && (((/* implicit */_Bool) 3896555808873587085ULL)))))));
                        var_33 = ((/* implicit */unsigned char) (~(arr_25 [i_1])));
                    }
                    for (unsigned char i_12 = 0; i_12 < 21; i_12 += 1) /* same iter space */
                    {
                        arr_46 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_39 [i_10] [i_1] [(unsigned short)20] [i_12])) | (((/* implicit */int) arr_10 [2U] [(unsigned char)16] [i_10] [i_1] [i_0]))));
                        arr_47 [i_1] [i_12] [i_12] = ((short) ((((/* implicit */_Bool) 2350369773143574710LL)) ? (((arr_0 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_12])))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 21; i_13 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned short) arr_39 [i_13] [i_13] [i_10] [i_10]);
                        arr_50 [i_13] [i_1] [10] [i_13] = ((((((/* implicit */_Bool) ((signed char) var_0))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)4)))) >> (((((min(((-2147483647 - 1)), (((/* implicit */int) arr_27 [i_0] [i_1] [i_1] [i_1])))) - (-2147483629))) + (39))));
                    }
                    arr_51 [7LL] [7LL] [0U] = ((/* implicit */int) ((unsigned int) 14821675958022653681ULL));
                }
            }
        } 
    } 
    var_35 += (((~(((/* implicit */int) ((9082553876044950012ULL) >= (((/* implicit */unsigned long long int) var_7))))))) >= (((/* implicit */int) var_0)));
    var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) var_8))));
}

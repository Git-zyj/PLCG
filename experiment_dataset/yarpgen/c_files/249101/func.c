/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249101
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
    var_12 = ((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */short) var_0)), ((short)-8200))))));
    var_13 = ((/* implicit */unsigned char) (~(-1232899905)));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_4 [i_1] [i_1] [(unsigned char)7])) ? (min((arr_1 [i_0] [i_1]), (((/* implicit */unsigned int) arr_3 [i_0] [i_0])))) : (((/* implicit */unsigned int) arr_5 [i_1] [i_0] [i_0])))), (((unsigned int) arr_3 [(short)15] [i_1]))));
            var_14 = ((/* implicit */long long int) var_9);
            /* LoopSeq 2 */
            for (signed char i_2 = 3; i_2 < 19; i_2 += 3) 
            {
                arr_9 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */long long int) (-((-(((/* implicit */int) (signed char)-81))))));
                arr_10 [i_2 + 1] [i_1] [i_1] [i_0] = ((/* implicit */long long int) (-(max((((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [i_1] [i_2 - 2])), (var_0)))), (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (1232899893) : (((/* implicit */int) var_4))))))));
            }
            for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                /* LoopSeq 2 */
                for (signed char i_4 = 0; i_4 < 20; i_4 += 1) /* same iter space */
                {
                    var_15 = arr_3 [i_4] [i_4];
                    var_16 = ((/* implicit */long long int) (+((+(((/* implicit */int) min(((short)-29505), (((/* implicit */short) arr_18 [i_0] [i_3] [i_1] [i_4] [i_4])))))))));
                }
                for (signed char i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned char) ((min(((-(((/* implicit */int) arr_14 [i_0] [i_1] [i_3] [(signed char)5])))), (((/* implicit */int) ((arr_11 [i_3] [i_3] [i_3] [i_0]) > (((/* implicit */unsigned int) arr_2 [i_3] [i_0]))))))) + (((/* implicit */int) max((arr_4 [i_0] [(signed char)14] [i_5]), (arr_4 [i_0] [i_0] [i_0]))))));
                    var_18 = (+(max(((+(35184371564544LL))), (((/* implicit */long long int) arr_0 [i_0] [i_0])))));
                }
                /* LoopSeq 2 */
                for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    var_19 = ((/* implicit */unsigned char) -323282181);
                    var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_3] [i_6])) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)-1))))) : (arr_13 [i_0] [i_3] [i_3]))) / (((/* implicit */long long int) (-((-(((/* implicit */int) (short)32762)))))))));
                }
                for (unsigned int i_7 = 2; i_7 < 19; i_7 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        arr_29 [i_0] [i_0] [i_0] [(_Bool)0] [i_3] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 7LL)) ? (((/* implicit */int) arr_3 [(short)12] [i_7])) : (((/* implicit */int) arr_26 [i_0] [i_1] [i_3] [i_7] [i_8])))) < ((+(arr_5 [i_3] [i_7] [i_8]))))))) & ((~((-(arr_24 [i_3] [i_8])))))));
                        arr_30 [i_3] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (+(max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_26 [i_0] [i_1] [i_3] [i_7] [i_8])) : (((/* implicit */int) arr_22 [i_0] [i_3] [i_1] [i_7] [i_8])))), (var_6)))));
                    }
                    for (short i_9 = 3; i_9 < 19; i_9 += 3) 
                    {
                        arr_33 [i_3] = ((/* implicit */signed char) -584486644140826144LL);
                        arr_34 [i_1] [i_7] [i_3] = ((/* implicit */signed char) max((((/* implicit */long long int) (~(max((((/* implicit */int) (_Bool)1)), (var_10)))))), ((~((+(arr_24 [i_3] [i_3])))))));
                        var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((-323282161) % (((/* implicit */int) (signed char)-106))))) : (((((((/* implicit */_Bool) (short)6144)) ? (3059409626U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-70))))) / (((/* implicit */unsigned int) (+(156298836))))))));
                        var_22 = (+(((/* implicit */int) arr_26 [i_7 - 2] [i_7 + 1] [i_7 - 2] [i_7 - 1] [i_7 - 2])));
                        arr_35 [i_9] [i_9] [i_3] [i_3] [2LL] [i_0] [i_0] = max((max((min((((/* implicit */unsigned int) arr_19 [i_0] [(signed char)15])), (arr_11 [i_0] [i_3] [i_3] [i_7 - 2]))), (((/* implicit */unsigned int) arr_16 [i_7 - 1] [i_1] [i_3] [i_7] [i_9] [i_3])))), ((-(0U))));
                    }
                    arr_36 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */long long int) ((var_2) > (((/* implicit */unsigned int) ((int) (+(((/* implicit */int) (unsigned char)209))))))));
                }
                var_23 *= ((/* implicit */signed char) (~(arr_7 [12LL] [i_3])));
                /* LoopSeq 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_11 = 0; i_11 < 20; i_11 += 3) 
                    {
                        arr_44 [(short)19] [i_3] [(signed char)17] [i_3] [i_3] [i_10] [i_11] = ((/* implicit */long long int) (short)-3010);
                        var_24 -= ((/* implicit */unsigned char) (short)8914);
                        var_25 = ((int) min((8LL), (((/* implicit */long long int) arr_28 [i_0] [i_3] [i_3]))));
                    }
                    var_26 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) 2110688883U)) >= (var_7)))) - (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_17 [i_0] [i_3] [i_0] [i_0])) : (-295014741)))))), (min((((/* implicit */unsigned int) arr_15 [i_0] [i_0] [i_0] [i_0])), (arr_11 [19LL] [i_3] [i_3] [i_10])))));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_48 [i_3] [i_3] [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? ((+(var_7))) : (((/* implicit */long long int) (+(arr_5 [i_0] [(signed char)13] [i_12]))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? ((~(var_7))) : (((((/* implicit */_Bool) 141863388262170624LL)) ? (((/* implicit */long long int) var_6)) : (-18LL))))) : (((/* implicit */long long int) min((max((arr_11 [i_3] [i_3] [i_1] [i_12]), (((/* implicit */unsigned int) -295014741)))), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) arr_18 [i_12] [i_3] [i_3] [i_3] [i_0])), (arr_40 [i_0] [i_1] [i_3] [i_3]))))))));
                    var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) (signed char)96)), (3LL))) << (((((/* implicit */int) ((short) (signed char)-97))) + (152)))))) || (((/* implicit */_Bool) min((((/* implicit */int) (short)-11216)), (-1533116761)))))))));
                    arr_49 [i_3] = ((/* implicit */signed char) (-((((~(((/* implicit */int) arr_17 [i_0] [i_3] [i_3] [6U])))) & (((/* implicit */int) arr_15 [11LL] [i_1] [i_3] [i_0]))))));
                }
                arr_50 [i_3] [i_3] = ((/* implicit */signed char) arr_12 [i_0] [i_0] [i_0]);
            }
            var_28 = ((/* implicit */short) max(((+(((/* implicit */int) arr_23 [i_0] [i_0] [i_0])))), (((/* implicit */int) ((short) var_11)))));
            var_29 = ((/* implicit */unsigned int) (+(arr_21 [i_1] [i_1] [i_1] [i_1] [(_Bool)1])));
        }
        arr_51 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (323282161)))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (+(var_6)))), (max((arr_11 [i_0] [16] [i_0] [i_0]), (((/* implicit */unsigned int) (short)504))))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) -1519963575)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)31))))) & ((-9223372036854775807LL - 1LL))))));
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        arr_55 [i_13] [i_13] = ((/* implicit */long long int) arr_53 [i_13]);
        arr_56 [i_13] [i_13] = ((/* implicit */unsigned int) max(((-(((/* implicit */int) ((((/* implicit */_Bool) arr_53 [i_13])) && (((/* implicit */_Bool) (signed char)96))))))), (arr_53 [i_13])));
        var_30 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_54 [i_13])) ? (max((arr_53 [i_13]), (-462822970))) : (((/* implicit */int) ((arr_54 [i_13]) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)29))))))))), (((((/* implicit */_Bool) arr_54 [i_13])) ? (((/* implicit */unsigned int) 1519963593)) : (arr_54 [i_13])))));
    }
    var_31 = ((/* implicit */short) max((((/* implicit */unsigned char) (((+(((/* implicit */int) var_3)))) <= (min((var_10), (((/* implicit */int) (short)32767))))))), (var_9)));
    var_32 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) > (var_2)));
}

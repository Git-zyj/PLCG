/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213873
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)5181)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11)))) >> ((((-(((/* implicit */int) (unsigned char)250)))) + (274)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) min((var_9), (var_12)))) ? ((+(var_0))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8)))))))));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_0 - 2])) : (((/* implicit */int) arr_3 [i_0 - 2]))))), ((~(var_5)))));
        var_18 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) (unsigned char)84)))) <= (((((/* implicit */_Bool) arr_2 [i_0] [(short)14])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_15))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_14))))) ? ((-(((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) arr_2 [i_0 - 1] [i_0]))))));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */short) arr_6 [i_1]);
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                {
                    arr_16 [(unsigned char)6] [i_1] [i_1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_2] [i_3]))) : (arr_4 [i_1])))));
                    /* LoopSeq 3 */
                    for (short i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        var_19 *= ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                        arr_21 [i_1] [i_2] [i_3] [i_1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)239)) ? ((~(var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) min(((unsigned char)22), (((/* implicit */unsigned char) (signed char)-1))))) : (((/* implicit */int) min(((short)15903), ((short)-15898))))))) : (min((((/* implicit */unsigned long long int) var_11)), (var_13)))));
                        arr_22 [i_1] [i_2] [i_1] [i_3] [i_4] = ((/* implicit */signed char) min((((/* implicit */int) var_11)), (((((/* implicit */int) arr_3 [(unsigned char)8])) & (((/* implicit */int) var_11))))));
                    }
                    for (signed char i_5 = 1; i_5 < 10; i_5 += 3) 
                    {
                        var_20 ^= ((/* implicit */unsigned char) min((((var_0) / (arr_24 [i_5] [i_5 - 1] [i_5 + 1] [i_5 + 1]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-64)))))));
                        var_21 = ((/* implicit */signed char) (((~(var_7))) >= (((var_13) & (max((arr_19 [i_1] [6ULL] [(unsigned char)8] [i_1] [(unsigned char)8]), (((/* implicit */unsigned long long int) arr_14 [i_3] [i_3] [i_1]))))))));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_1] [i_5])) - (((/* implicit */int) (unsigned char)233))));
                    }
                    for (unsigned long long int i_6 = 3; i_6 < 8; i_6 += 4) 
                    {
                        arr_28 [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [i_6 - 2]))))) : ((-(var_7)))));
                        arr_29 [i_3] [i_1] [i_3] [i_3] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [2ULL] [2ULL] [i_1]))))), (var_0)));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */int) var_1)) >= (((((/* implicit */_Bool) (short)15922)) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) arr_25 [i_1] [i_2] [i_1] [i_6 + 1]))))));
                    }
                    arr_30 [i_1] [i_1] [i_1] [(signed char)1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_3)))))) : (arr_4 [(signed char)9]))))));
                    arr_31 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */signed char) (~((-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) == (var_0))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_7 = 1; i_7 < 8; i_7 += 2) 
        {
            var_24 = ((/* implicit */short) ((((/* implicit */int) arr_13 [i_7 + 2] [i_1] [i_1] [i_1])) % (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1]))));
            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (((+(((/* implicit */int) (signed char)0)))) - ((~(((/* implicit */int) arr_33 [i_1] [i_7 + 3] [i_7])))))))));
            arr_35 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) + (var_5)));
            var_26 = ((/* implicit */signed char) (+(((/* implicit */int) var_11))));
            arr_36 [i_7] [(unsigned char)6] [i_1] = ((/* implicit */signed char) ((var_7) & (arr_24 [i_7 - 1] [i_1] [i_1] [i_1])));
        }
        /* LoopNest 3 */
        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 2) 
        {
            for (unsigned char i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                for (signed char i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    {
                        arr_43 [i_9] [(signed char)10] [(unsigned char)1] [i_1] = var_12;
                        arr_44 [i_1] [i_1] [i_10] [i_10] [i_1] [i_9] = ((/* implicit */unsigned char) var_7);
                    }
                } 
            } 
        } 
    }
}

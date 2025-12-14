/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53129
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
    var_17 = var_5;
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) << (((((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)12436)) : (((/* implicit */int) (unsigned short)12436)))) : (((/* implicit */int) (signed char)126)))) - (12430)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_2] [i_4] [i_2] [i_2] = ((/* implicit */unsigned short) ((int) ((unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_7 [i_0] [(signed char)4] [i_0] [i_0]))))));
                            var_19 = arr_8 [i_0] [i_0] [i_0] [i_0];
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */int) (unsigned short)2662)), (2147483647)))))) | (min((5821246926719018244ULL), (((/* implicit */unsigned long long int) 2147483647))))));
            }
            for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    for (unsigned short i_7 = 2; i_7 < 11; i_7 += 4) 
                    {
                        {
                            var_20 ^= ((/* implicit */unsigned short) var_16);
                            arr_21 [i_6] = (unsigned char)255;
                            arr_22 [i_7] [i_7] [i_6] = ((/* implicit */unsigned char) (-(((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)115))) <= (3446297473U)))), (max(((signed char)0), ((signed char)-126))))))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned short i_8 = 0; i_8 < 13; i_8 += 3) 
                {
                    arr_26 [i_1] [i_5] = ((/* implicit */signed char) arr_19 [10U] [i_0] [i_1] [i_0] [i_0]);
                    arr_27 [i_0] [i_0] [i_5] [(unsigned short)12] [(unsigned char)12] [(unsigned char)12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_25 [i_8] [i_1 + 1] [i_1 + 1] [i_1] [(unsigned char)2] [(unsigned char)2])) : (((/* implicit */int) arr_6 [i_1] [i_1 - 1] [i_1 - 2])))) : (((/* implicit */int) max(((unsigned char)255), ((unsigned char)147))))));
                }
                /* vectorizable */
                for (unsigned int i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)146))));
                    arr_31 [i_0] [i_1 - 2] [i_5] [i_9] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)0))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)18)) >= (((/* implicit */int) ((((/* implicit */int) (signed char)25)) > (((/* implicit */int) (signed char)18)))))));
                }
                for (unsigned char i_10 = 3; i_10 < 9; i_10 += 2) 
                {
                    var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (2130479996U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50445)))))) ? (((/* implicit */int) max((var_9), (var_5)))) : (arr_19 [i_10 + 2] [i_10] [i_5] [i_10] [i_1 + 1]))) / (((/* implicit */int) min((var_14), (((unsigned char) var_5)))))));
                    var_24 = ((/* implicit */unsigned long long int) var_0);
                    arr_34 [i_0] [i_10] [i_5] [i_10] = ((/* implicit */unsigned char) max((min((((/* implicit */int) ((unsigned char) arr_4 [i_5]))), (((((/* implicit */int) (unsigned short)58239)) << (((((/* implicit */int) (unsigned char)146)) - (146))))))), (((/* implicit */int) (signed char)25))));
                }
                for (unsigned char i_11 = 0; i_11 < 13; i_11 += 3) 
                {
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_11))))) ^ (max((-1457893518), (((/* implicit */int) (signed char)-94))))));
                    var_26 = ((/* implicit */unsigned char) (~(((2147483647) % (((/* implicit */int) arr_30 [i_1 - 1] [i_1] [i_5] [(unsigned char)8] [i_0]))))));
                    var_27 = ((/* implicit */unsigned char) arr_20 [i_0] [i_0] [i_0] [i_0] [6ULL]);
                }
                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) min((((/* implicit */int) arr_30 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [(unsigned short)1])), ((~(-1605665485))))))));
                var_29 = ((/* implicit */unsigned short) ((unsigned char) ((int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_9 [i_5] [i_1] [i_0])) : (((/* implicit */int) arr_4 [i_0]))))));
            }
            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)242))) * (2U)))))));
            /* LoopNest 2 */
            for (unsigned char i_12 = 0; i_12 < 13; i_12 += 2) 
            {
                for (unsigned char i_13 = 2; i_13 < 10; i_13 += 3) 
                {
                    {
                        var_31 -= ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)253)) << (((((/* implicit */int) var_15)) - (56437))))) * ((~(((/* implicit */int) (unsigned short)3909))))));
                        var_32 ^= ((/* implicit */unsigned long long int) ((unsigned char) min((arr_0 [i_1 + 1]), (arr_0 [i_1 - 2]))));
                        arr_42 [(unsigned char)3] [i_1 - 2] [i_1] [i_13] [i_1] = ((/* implicit */signed char) ((unsigned short) ((signed char) (unsigned short)8862)));
                        var_33 += ((/* implicit */unsigned char) min((min((arr_32 [(unsigned short)9] [(unsigned short)9] [(unsigned short)9] [i_0] [(unsigned short)11]), (arr_32 [i_0] [i_0] [3] [i_0] [i_0]))), (arr_32 [i_0] [i_0] [i_1 - 1] [i_0] [i_13 - 1])));
                    }
                } 
            } 
            arr_43 [i_0] = ((/* implicit */unsigned char) min((min((arr_38 [i_1 + 1] [i_1 - 1]), (arr_38 [i_1 - 1] [i_1 - 1]))), (((((/* implicit */_Bool) arr_38 [i_1 - 1] [i_1 + 1])) ? (arr_38 [i_1 - 1] [i_1 - 1]) : (((/* implicit */int) var_14))))));
        }
        var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) 9578377045906784298ULL)) && (((/* implicit */_Bool) (unsigned char)0))))) & (((/* implicit */int) (signed char)-87))));
        arr_44 [i_0] = arr_16 [i_0] [i_0] [i_0] [i_0];
        var_35 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) min(((unsigned char)96), ((unsigned char)147)))) : (((/* implicit */int) var_4))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_14 = 0; i_14 < 21; i_14 += 4) 
    {
        for (unsigned char i_15 = 1; i_15 < 17; i_15 += 3) 
        {
            for (unsigned char i_16 = 0; i_16 < 21; i_16 += 2) 
            {
                {
                    var_36 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57665)) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) (signed char)105))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)57665)) <= (((/* implicit */int) (unsigned short)6832))))) : (((/* implicit */int) (unsigned char)241)))) <= (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-105)), (arr_50 [i_15 + 4] [i_14]))))));
                    var_37 -= ((/* implicit */unsigned char) min((((/* implicit */int) var_0)), ((~(((/* implicit */int) arr_45 [i_15 + 4] [i_16]))))));
                }
            } 
        } 
    } 
}

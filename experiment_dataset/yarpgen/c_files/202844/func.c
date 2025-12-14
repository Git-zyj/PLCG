/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202844
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        arr_3 [i_0] = ((/* implicit */signed char) (-((+(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [(unsigned short)0]))))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) (signed char)61);
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) min((((/* implicit */unsigned int) ((unsigned char) var_10))), (((unsigned int) arr_5 [i_1]))))) > (((long long int) arr_6 [i_1]))));
        /* LoopSeq 2 */
        for (long long int i_2 = 2; i_2 < 21; i_2 += 3) 
        {
            arr_11 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((arr_8 [i_2 + 1] [i_2 + 1] [i_2 + 2]) >> (((((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39051))) : (var_6))) - (39047U)))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65533)))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)56851)) | (((/* implicit */int) arr_5 [i_1]))))) : (arr_10 [i_1])))));
            arr_12 [i_1] [i_2] = ((/* implicit */signed char) min((min((933429406U), (((/* implicit */unsigned int) arr_9 [i_2])))), (((/* implicit */unsigned int) (((-(2619387579U))) > (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)41))))))))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 1; i_3 < 22; i_3 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_4 = 1; i_4 < 22; i_4 += 2) 
                {
                    arr_18 [i_1] [i_3] [i_3] [i_2] [i_2] [i_4] = ((/* implicit */signed char) ((unsigned int) (-(((/* implicit */int) ((((/* implicit */int) arr_15 [i_3] [i_3])) <= (((/* implicit */int) (unsigned short)65510))))))));
                    var_13 ^= ((/* implicit */unsigned int) arr_16 [i_1] [i_1] [i_1]);
                    arr_19 [i_1] [i_3] [i_1] [i_1] = min((((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) || (((((/* implicit */_Bool) 7499116014532751490LL)) && (((/* implicit */_Bool) var_3))))))), ((signed char)123));
                    var_14 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) > (((/* implicit */int) arr_16 [i_3] [i_3] [i_3]))))), (((((/* implicit */_Bool) arr_8 [i_3] [i_3 + 1] [i_3 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_3] [i_3] [i_3]))) : (arr_8 [i_3 + 1] [i_3 + 1] [i_3 - 1])))));
                }
                for (unsigned int i_5 = 1; i_5 < 21; i_5 += 2) 
                {
                    arr_23 [i_1] [21LL] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) (((((~(((/* implicit */int) (!(((/* implicit */_Bool) -4880274345263922781LL))))))) + (2147483647))) >> (((((/* implicit */int) arr_14 [i_3] [i_2 - 2] [i_2 + 1] [i_5])) - (4109)))));
                    arr_24 [i_1] [i_1] [i_2] [i_3] [i_3] [i_5] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_16 [i_3 - 1] [i_2 + 2] [i_3])) && (((/* implicit */_Bool) min((arr_1 [i_1]), (arr_1 [i_2 + 1])))))), ((!(((/* implicit */_Bool) ((unsigned short) arr_6 [i_1])))))));
                }
                for (signed char i_6 = 3; i_6 < 20; i_6 += 3) 
                {
                    var_15 = ((/* implicit */unsigned int) arr_14 [i_6 + 1] [i_1] [i_2 + 1] [i_1]);
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_3 - 1] [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) arr_14 [i_3 + 1] [i_3] [(unsigned short)16] [i_3]))))) >> (((max((((/* implicit */unsigned int) arr_14 [i_3 + 1] [(unsigned short)7] [i_3 - 1] [i_3 - 1])), (arr_8 [i_2] [i_2] [i_2]))) - (1098175531U)))));
                    arr_28 [i_1] [i_3] [i_3] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62072))) : (max((((((/* implicit */_Bool) arr_13 [i_1] [i_2 - 2] [i_1] [i_1])) ? (arr_21 [i_1] [i_2] [i_2] [i_1]) : (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_3] [i_2])) >> (((((/* implicit */int) arr_1 [i_2])) + (62))))))))));
                    var_17 = (i_3 % 2 == 0) ? (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_17 [i_2 - 2] [i_3 + 1] [i_3] [i_3 + 1])) && (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [22U])) & (((/* implicit */int) arr_15 [i_3] [i_3]))))))) && (((((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) ((arr_20 [(unsigned short)22] [i_2] [5U] [5U] [i_2]) >> (((((/* implicit */int) arr_15 [i_3] [i_6])) - (44935))))))))))) : (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_17 [i_2 - 2] [i_3 + 1] [i_3] [i_3 + 1])) && (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [22U])) & (((/* implicit */int) arr_15 [i_3] [i_3]))))))) && (((((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) ((arr_20 [(unsigned short)22] [i_2] [5U] [5U] [i_2]) >> (((((((/* implicit */int) arr_15 [i_3] [i_6])) - (44935))) - (4337)))))))))));
                    var_18 = ((/* implicit */unsigned short) max((((((unsigned int) arr_1 [i_1])) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-32)) <= (((/* implicit */int) arr_6 [i_6])))))))), (((/* implicit */unsigned int) arr_0 [(unsigned char)4] [(signed char)12]))));
                }
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((((/* implicit */_Bool) -1912375010156224127LL)) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) arr_13 [i_1] [i_1] [i_2 + 1] [i_3])))) : (((/* implicit */int) (unsigned short)127))));
            }
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2 - 1])))));
        }
        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) 
        {
            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) max((((((/* implicit */int) arr_13 [i_7] [i_7] [(unsigned short)17] [i_7])) - (((/* implicit */int) arr_13 [i_7] [i_1] [i_1] [i_1])))), (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_7])))))));
            arr_32 [i_1] [(unsigned char)17] = arr_31 [i_1];
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_7])) > (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_7])))))) <= (((long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) (unsigned short)18676)))))));
        }
        arr_33 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) arr_31 [i_1]))))) || (((/* implicit */_Bool) var_7)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [(unsigned short)4] [(unsigned short)3] [i_1] [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_1] [i_1] [(unsigned short)5])) || (((/* implicit */_Bool) arr_15 [i_1] [i_1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) arr_1 [i_1]))))))))));
    }
    for (unsigned short i_8 = 2; i_8 < 12; i_8 += 3) 
    {
        var_23 = ((/* implicit */unsigned char) arr_8 [i_8] [i_8] [i_8 - 1]);
        arr_37 [i_8] = arr_5 [i_8];
        arr_38 [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_8 [i_8] [i_8] [i_8 + 1]) * (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) >> (((((/* implicit */int) arr_15 [(signed char)0] [(signed char)0])) - (44922)))))))))));
        arr_39 [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */int) ((unsigned short) arr_17 [14U] [(unsigned char)0] [(unsigned char)0] [i_8]))) * (((((/* implicit */_Bool) arr_8 [i_8 - 2] [i_8] [(unsigned short)12])) ? (((/* implicit */int) arr_9 [i_8])) : (((/* implicit */int) (signed char)-8)))))) : (((/* implicit */int) ((unsigned short) arr_17 [i_8 - 2] [i_8 + 1] [(unsigned short)20] [i_8 - 2])))));
    }
    for (long long int i_9 = 1; i_9 < 17; i_9 += 2) 
    {
        arr_43 [i_9] [14U] = ((/* implicit */signed char) max((min((((((/* implicit */_Bool) (unsigned short)25727)) ? (arr_20 [i_9] [i_9] [i_9] [5LL] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65522))))), (((/* implicit */unsigned int) arr_17 [i_9 + 1] [i_9] [(unsigned short)22] [i_9])))), (((/* implicit */unsigned int) (unsigned char)181))));
        var_24 += ((/* implicit */unsigned int) arr_1 [i_9]);
    }
    var_25 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_2))));
    var_26 &= ((/* implicit */long long int) ((signed char) max((((unsigned short) (unsigned char)59)), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)40765)) >= (((/* implicit */int) (unsigned short)0))))))));
}

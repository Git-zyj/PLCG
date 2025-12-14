/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52337
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_11 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [(short)18])) || (((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) | (((/* implicit */int) arr_0 [i_0]))))))))) % (var_0)));
        arr_3 [15ULL] = ((/* implicit */short) arr_0 [i_0]);
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            arr_6 [i_0] [3U] = ((((/* implicit */_Bool) (((~(((/* implicit */int) (signed char)23)))) % (((/* implicit */int) var_10))))) ? (((/* implicit */int) arr_0 [(unsigned short)1])) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_0 [9LL])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_0])))))));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                var_12 += ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [(signed char)7] [i_2]))))), (((arr_4 [(_Bool)1] [3]) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [(unsigned char)14])) - (((/* implicit */int) arr_4 [1LL] [8ULL]))))) : (max((((/* implicit */unsigned long long int) 4294967295U)), (12661522679498962951ULL)))))));
                arr_9 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_2] [18LL] [i_0])) * (((/* implicit */int) arr_1 [1ULL] [(unsigned char)16]))));
                var_13 = ((/* implicit */int) arr_0 [i_0]);
            }
            for (signed char i_3 = 2; i_3 < 18; i_3 += 1) 
            {
                arr_14 [(short)13] [8ULL] [i_3] = ((/* implicit */short) (~(((((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_3])), (arr_2 [(_Bool)1])))) ^ ((+(((/* implicit */int) arr_2 [i_1]))))))));
                arr_15 [12U] [(short)12] [7] = ((/* implicit */long long int) ((((((/* implicit */int) arr_12 [i_3 - 1] [i_3 + 1] [i_3])) | (((/* implicit */int) arr_12 [i_3 - 2] [i_3 - 1] [(signed char)14])))) << ((((+((+(((/* implicit */int) arr_7 [(unsigned short)8] [(_Bool)1] [13] [7U])))))) - (109)))));
            }
            arr_16 [(unsigned char)6] = ((/* implicit */unsigned char) arr_8 [(short)17] [i_1]);
        }
        /* LoopSeq 3 */
        for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_21 [i_4] [(signed char)18] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(unsigned short)3])))))));
                arr_22 [i_0] |= ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_0 [i_0])))), (max((((/* implicit */int) arr_8 [i_5] [8ULL])), (var_6)))));
            }
            for (int i_6 = 3; i_6 < 18; i_6 += 3) 
            {
                var_14 *= ((/* implicit */signed char) min((((/* implicit */long long int) arr_10 [(unsigned char)7] [i_6] [i_6 - 2] [i_6])), (((long long int) arr_26 [i_0] [4] [i_0]))));
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2889349627U)) ? (((/* implicit */long long int) 1405617668U)) : (419298180486210898LL)));
                var_16 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_4] [(short)15]))) <= (arr_20 [13U] [3LL] [(signed char)3]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) arr_0 [(short)11]))))), ((((-(arr_24 [5LL] [10] [i_6] [(short)4]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(short)10] [6LL] [i_4] [i_6])))))));
                arr_27 [i_6] [i_6] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_0)))) && (((/* implicit */_Bool) arr_17 [i_6 - 1] [i_6]))))), (arr_10 [5U] [(unsigned char)13] [i_6 + 1] [(short)0])));
            }
            arr_28 [i_0] [(unsigned char)9] [13LL] = ((/* implicit */signed char) max(((-(3628541284U))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)141)) | (((/* implicit */int) max((((/* implicit */unsigned short) arr_26 [3ULL] [9] [i_4])), (arr_2 [(unsigned short)3])))))))));
            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_8))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            arr_31 [i_7] [i_7] [(unsigned char)1] = ((/* implicit */short) ((((/* implicit */_Bool) max((134201344), (arr_17 [i_0] [i_0])))) ? ((+(((/* implicit */int) (signed char)60)))) : (((arr_17 [(short)1] [i_7]) / (((/* implicit */int) arr_10 [i_0] [i_7] [i_0] [12LL]))))));
            arr_32 [i_7] [i_0] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_30 [i_7] [17] [i_0])) ? (arr_23 [i_0] [(signed char)4] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0] [i_7] [i_0]))))), (((/* implicit */unsigned long long int) var_7))));
            arr_33 [i_0] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [(_Bool)1] [i_7] [i_0] [(unsigned short)15])))))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */signed char) var_6);
            arr_37 [(short)5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_4 [0] [4]), (arr_4 [i_0] [(short)8]))))) : ((~(1U)))));
        }
        arr_38 [(_Bool)1] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
    }
    /* LoopSeq 1 */
    for (int i_9 = 4; i_9 < 16; i_9 += 1) 
    {
        arr_43 [(unsigned char)9] = ((/* implicit */unsigned short) var_2);
        arr_44 [(unsigned char)7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) max((arr_25 [i_9] [6ULL] [(unsigned char)7] [(signed char)11]), (arr_10 [10] [13LL] [i_9] [(_Bool)1])))))))));
        arr_45 [i_9] = ((/* implicit */unsigned char) var_1);
        arr_46 [(signed char)13] = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned short) arr_10 [11LL] [i_9] [9U] [i_9]))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [(signed char)12])), (arr_25 [(unsigned short)18] [i_9] [(unsigned char)14] [(unsigned char)10]))))) : (max((arr_19 [i_9] [1ULL] [i_9]), (((/* implicit */unsigned int) var_10)))))) + (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_9 - 4] [i_9])))))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198853
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
    var_12 = var_2;
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (arr_0 [0LL]))) : (((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_1 [i_0]))))));
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */signed char) (+(20U)));
                        var_14 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_6 [(short)8] [(short)8] [(short)8]) : (arr_0 [i_3]))) + (((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */int) arr_10 [i_1] [(unsigned char)9] [i_1] [i_1] [(unsigned short)2] [i_1])) : (((/* implicit */int) var_11))))));
                        arr_12 [i_1] = ((/* implicit */long long int) 0U);
                        var_15 = ((/* implicit */signed char) (+(((arr_5 [6ULL] [5ULL] [6ULL]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)216)))))));
                    }
                } 
            } 
            var_16 = ((/* implicit */unsigned short) arr_0 [i_0]);
        }
        for (short i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
        {
            var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_0])) + (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65532))) : (arr_5 [(short)0] [i_4] [i_0])));
            var_18 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) - (arr_3 [i_4] [i_0] [2U]))));
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (arr_6 [i_4] [i_4] [3ULL]) : (((/* implicit */int) arr_11 [i_0])))))));
            var_20 -= ((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0]))));
            arr_16 [i_0] [i_4] = ((/* implicit */unsigned char) arr_3 [i_4] [i_0] [i_4]);
        }
        for (short i_5 = 0; i_5 < 10; i_5 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned short) var_4);
            var_22 = ((/* implicit */short) ((((/* implicit */int) var_2)) < (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0])) && (((/* implicit */_Bool) (signed char)-72)))))));
        }
        for (short i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
        {
            arr_22 [i_6] [i_6] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_4 [i_0] [i_6] [i_6]))));
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 9; i_7 += 4) 
            {
                for (unsigned char i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    {
                        var_23 = ((/* implicit */signed char) (+(((/* implicit */int) arr_18 [i_7 + 1] [i_7 - 1]))));
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */int) var_3)) | (arr_25 [i_7 - 2] [i_7 - 2] [i_7 - 1] [i_7 - 2] [i_7] [i_7 - 1]))))));
                    }
                } 
            } 
        }
    }
    for (unsigned short i_9 = 0; i_9 < 23; i_9 += 1) 
    {
        var_25 &= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)65534))))) ? (max((arr_28 [i_9]), (arr_28 [i_9]))) : (((((/* implicit */_Bool) arr_28 [22U])) ? (arr_28 [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)255))))))), (max((((arr_28 [i_9]) / (arr_28 [(short)21]))), (((((/* implicit */_Bool) arr_28 [5])) ? (((/* implicit */long long int) arr_27 [20ULL])) : (arr_28 [i_9])))))));
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) arr_27 [i_9])), ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) arr_27 [i_9]))))) ? (((/* implicit */long long int) arr_27 [i_9])) : (((((/* implicit */_Bool) var_9)) ? (arr_28 [i_9]) : (((((/* implicit */_Bool) (unsigned short)65514)) ? (7493127314187780267LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))))));
    }
    for (long long int i_10 = 1; i_10 < 20; i_10 += 4) 
    {
        arr_32 [(_Bool)1] [i_10] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((-2147483628) + (2147483647))) >> (((arr_30 [i_10]) + (730507316)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_29 [17U] [17U])) >> (((arr_28 [i_10]) - (2307174881645634795LL)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_29 [(unsigned char)5] [i_10]))) | (arr_27 [i_10])))))), ((+(((((/* implicit */_Bool) arr_28 [i_10])) ? (arr_31 [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)27)))))))));
        var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)3))))))))));
        arr_33 [i_10] = ((/* implicit */long long int) min((max((((/* implicit */int) arr_29 [i_10] [i_10 + 1])), (arr_30 [i_10 - 1]))), (((/* implicit */int) ((short) arr_31 [i_10])))));
        arr_34 [i_10] [i_10] = ((/* implicit */_Bool) ((long long int) (+(arr_31 [i_10]))));
    }
    for (unsigned int i_11 = 0; i_11 < 19; i_11 += 1) 
    {
        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */long long int) min((arr_30 [i_11]), (((/* implicit */int) var_9))))) : (((arr_28 [i_11]) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (140))))))) : ((-(arr_28 [i_11])))));
        arr_38 [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_29 [i_11] [i_11])) < (min((((((/* implicit */_Bool) (unsigned short)33080)) ? (((/* implicit */int) (signed char)51)) : (((/* implicit */int) (short)32767)))), (((/* implicit */int) arr_37 [i_11]))))));
    }
    var_29 = var_10;
}

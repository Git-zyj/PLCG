/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49521
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_6 [(signed char)8] [i_1] [i_1] [4] = ((/* implicit */unsigned char) 2529501965U);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_11 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 6734640094763005806ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) min((arr_4 [12LL] [i_1] [i_2] [(short)15]), (((/* implicit */int) (unsigned short)60436))))) && (((/* implicit */_Bool) arr_10 [i_0] [(unsigned short)4] [7LL] [1ULL] [i_4]))))) : (((((/* implicit */_Bool) arr_4 [(_Bool)1] [i_1] [i_2] [i_3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1152921504606846976LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [14ULL] [i_0] [(unsigned char)1])))))))));
                                var_12 *= ((/* implicit */unsigned short) ((((/* implicit */int) min(((short)(-32767 - 1)), ((short)(-32767 - 1))))) & (((/* implicit */int) min((arr_10 [i_4 - 2] [i_4 + 4] [(unsigned short)17] [i_4 + 2] [(unsigned short)4]), (arr_10 [i_4 + 2] [i_4 + 2] [i_4] [i_4 + 1] [i_4 + 2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) var_6);
    /* LoopSeq 2 */
    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        arr_14 [2LL] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (unsigned char)0)), (arr_12 [i_5])));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            var_14 *= ((/* implicit */signed char) arr_13 [i_5] [i_6]);
            arr_19 [17] [(signed char)12] = ((unsigned long long int) arr_16 [22U] [i_6]);
            arr_20 [(unsigned char)20] [12] [i_6] = ((/* implicit */int) ((((/* implicit */int) ((unsigned char) arr_18 [(unsigned short)9]))) >= (((/* implicit */int) (unsigned char)194))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 23; i_7 += 2) 
            {
                for (int i_8 = 0; i_8 < 23; i_8 += 2) 
                {
                    {
                        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((arr_18 [i_7]) != (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5]))))))));
                        var_16 = ((/* implicit */unsigned long long int) ((unsigned int) arr_25 [8ULL] [i_6]));
                    }
                } 
            } 
        }
        var_17 = ((/* implicit */short) ((arr_25 [i_5] [i_5]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5])))));
    }
    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_10 = 0; i_10 < 14; i_10 += 2) 
        {
            arr_33 [(_Bool)1] = ((/* implicit */_Bool) ((int) ((arr_30 [i_9] [i_10]) ? (((/* implicit */int) arr_30 [i_9] [(short)5])) : (((/* implicit */int) arr_30 [(unsigned char)10] [i_10])))));
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (unsigned long long int i_12 = 2; i_12 < 12; i_12 += 2) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) min((var_18), ((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_12])) - (((/* implicit */int) arr_24 [i_10]))))), (arr_25 [i_9] [(short)7]))))))));
                        arr_38 [i_9] [i_10] [i_11] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_9] [i_10] [i_10] [(signed char)11] [16])) || (((1152921504606846992LL) <= (((/* implicit */long long int) ((/* implicit */int) var_7)))))))), (((arr_25 [i_9] [i_10]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_12 - 1])))))));
                        arr_39 [i_11] [i_10] [i_11] [i_12] = ((/* implicit */unsigned int) arr_1 [i_9] [i_11]);
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 1) 
        {
            for (int i_14 = 2; i_14 < 13; i_14 += 2) 
            {
                {
                    arr_46 [(short)0] [(unsigned short)3] [(short)3] [i_14] = ((/* implicit */int) arr_44 [i_9] [i_9] [i_9] [i_9]);
                    arr_47 [13] [1] [(unsigned short)10] [1U] = ((/* implicit */long long int) arr_5 [i_9] [i_9] [i_13] [(short)15]);
                }
            } 
        } 
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_10), (((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [2])))))))) ? (1152921504606846992LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_9]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_9] [i_9])) || (((/* implicit */_Bool) (unsigned char)235))))))))));
    }
}

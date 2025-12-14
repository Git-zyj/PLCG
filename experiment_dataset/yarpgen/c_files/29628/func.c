/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29628
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-99))) != (487266962U)));
    var_19 = ((/* implicit */unsigned long long int) var_13);
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) min((5233628950972093708LL), (((/* implicit */long long int) (!(((var_12) < (((/* implicit */int) (short)-8614))))))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) var_2);
            var_22 += ((/* implicit */unsigned char) min((arr_1 [i_0]), (((int) 3422443608253841914ULL))));
            var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
        }
        for (long long int i_2 = 1; i_2 < 11; i_2 += 4) 
        {
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 3) 
                {
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        {
                            arr_17 [i_0] [i_2] [i_2] [i_2] [i_2 + 1] &= ((/* implicit */int) arr_8 [i_3]);
                            var_24 = 1527298920;
                            arr_18 [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2 - 1])) && (((/* implicit */_Bool) arr_1 [i_2 + 1])))))));
                        }
                    } 
                } 
            } 
            var_25 += ((/* implicit */signed char) arr_10 [i_0] [i_0] [i_0] [i_2]);
            var_26 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(2205518015U)))), (arr_7 [i_2 - 1] [i_2 - 1] [i_2 + 1])));
            var_27 = ((/* implicit */short) arr_11 [(unsigned char)9] [i_2] [i_2 - 1] [i_2] [i_2]);
            var_28 = ((/* implicit */unsigned int) min((((arr_7 [4] [i_0] [(unsigned char)0]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12902686)) ? (45158850U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)99)))))))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (2047462952U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_10 [0LL] [3ULL] [i_2] [i_2])) >= (arr_1 [i_2]))))))))));
        }
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            arr_21 [(_Bool)1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_6]))) / (11284728208045104845ULL)));
            /* LoopSeq 2 */
            for (unsigned long long int i_7 = 1; i_7 < 8; i_7 += 2) 
            {
                var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0]))));
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 1; i_9 < 10; i_9 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                            arr_30 [i_7] [i_8] [i_7] [i_6] [i_7] = ((/* implicit */_Bool) 3422443608253841914ULL);
                        }
                    } 
                } 
                var_31 = ((/* implicit */_Bool) var_12);
            }
            for (int i_10 = 2; i_10 < 9; i_10 += 3) 
            {
                var_32 ^= arr_28 [(unsigned char)3] [i_6] [i_6] [(unsigned char)3] [2ULL];
                var_33 -= ((/* implicit */unsigned char) arr_6 [(_Bool)1] [(_Bool)1]);
                arr_33 [8] [i_6] [i_6] [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
            }
            var_34 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (short)10488)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [(signed char)3] [i_6])) || (((/* implicit */_Bool) var_15)))))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (arr_28 [(_Bool)1] [i_6] [i_6] [10LL] [i_0])))));
        }
        arr_34 [i_0] [i_0] = ((/* implicit */unsigned int) 12902686);
        /* LoopNest 3 */
        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
        {
            for (short i_12 = 0; i_12 < 12; i_12 += 2) 
            {
                for (unsigned int i_13 = 3; i_13 < 10; i_13 += 2) 
                {
                    {
                        var_35 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((((/* implicit */int) (short)-30949)) + (2147483647))) << (((3741176706479474947ULL) - (3741176706479474947ULL))))), (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_2)), (arr_37 [(_Bool)1] [i_12])))) * (max((((/* implicit */unsigned long long int) arr_20 [i_11])), (var_16))))))));
                        /* LoopSeq 1 */
                        for (long long int i_14 = 0; i_14 < 12; i_14 += 1) 
                        {
                            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 11284728208045104845ULL)) && (((((/* implicit */_Bool) arr_31 [6ULL] [6ULL] [(unsigned char)9] [i_0])) || (((/* implicit */_Bool) arr_48 [i_0])))))))) + (((((/* implicit */_Bool) (((_Bool)1) ? (-1245444266) : (((/* implicit */int) (unsigned char)198))))) ? (((((/* implicit */_Bool) -7917658447322434118LL)) ? (45158850U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-99))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_47 [i_0] [i_11] [i_11] [(short)1])) ^ (arr_36 [i_0] [i_11]))))))));
                            var_37 = ((/* implicit */_Bool) (+((+(11284728208045104845ULL)))));
                            var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_13 - 1] [i_11 + 1])) ? (((/* implicit */unsigned long long int) max((arr_32 [i_11] [(unsigned short)7] [8ULL]), (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_39 [i_0] [0U] [i_0])))))))) : (((((/* implicit */_Bool) ((unsigned long long int) (signed char)-100))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (2824153401U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-25932)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [6ULL] [6ULL]))) * (9797347912386472782ULL)))))));
                        }
                    }
                } 
            } 
        } 
        arr_49 [i_0] [(unsigned char)3] = ((/* implicit */long long int) ((_Bool) arr_2 [i_0] [i_0]));
    }
    var_39 = ((/* implicit */unsigned char) -12902686);
}

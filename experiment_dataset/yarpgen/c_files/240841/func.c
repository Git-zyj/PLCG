/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240841
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) max((var_19), (((signed char) (short)29978))));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_1 [i_0]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) max((((((/* implicit */_Bool) max((arr_5 [i_1]), (arr_5 [0ULL])))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_3 [3])))) : ((-(((/* implicit */int) arr_5 [i_1])))))), (((/* implicit */int) arr_5 [i_1]))));
        /* LoopSeq 4 */
        for (int i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 2; i_4 < 23; i_4 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_1] [i_2] [i_2] [i_2] [(signed char)14] [12ULL] [i_2] = ((/* implicit */signed char) ((int) (!(((((/* implicit */int) arr_15 [(_Bool)1] [i_2] [(signed char)1] [i_4 - 2] [i_5])) >= (arr_14 [7LL] [7LL]))))));
                            var_21 = ((/* implicit */signed char) min((var_21), (((signed char) max((((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)58)) && (((/* implicit */_Bool) -4565023473526040706LL))))), ((signed char)58))))));
                            var_22 |= (+(((/* implicit */int) ((short) ((unsigned long long int) arr_1 [i_1])))));
                            var_23 = ((/* implicit */unsigned long long int) ((short) ((unsigned int) ((signed char) (signed char)58))));
                            arr_17 [i_1] [i_2] [i_1] [(signed char)3] [i_2] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_0 [i_4 - 2])) ? (((/* implicit */int) arr_0 [i_4 - 1])) : (((/* implicit */int) arr_0 [i_4 - 1])))), (((/* implicit */int) max((arr_0 [i_4 - 1]), (arr_0 [i_4 - 1]))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */short) max((((/* implicit */long long int) arr_18 [i_1] [i_1] [i_1] [(signed char)19] [i_1])), (min((((/* implicit */long long int) max((((/* implicit */int) arr_1 [i_3])), (arr_14 [i_1] [12LL])))), (arr_8 [i_1] [i_2])))));
                            var_25 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_0 [i_4 - 1])))) / ((-(((/* implicit */int) arr_0 [i_4 + 1]))))));
                            var_26 ^= max((max((arr_10 [0] [i_2] [(signed char)7]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_4]))))))), (((/* implicit */long long int) max((arr_13 [i_6] [i_4] [i_3] [(signed char)0] [i_1] [i_1]), (((/* implicit */short) arr_1 [i_1]))))));
                            arr_20 [i_1] = ((/* implicit */short) ((unsigned long long int) (~(((/* implicit */int) arr_1 [(_Bool)1])))));
                            arr_21 [i_1] [(signed char)4] [i_1] [(short)7] [i_3] [i_4] [i_6] = min((((((/* implicit */_Bool) arr_5 [i_4 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4] [i_4 + 1] [i_4]))) : (arr_11 [i_4 - 1]))), (((/* implicit */long long int) arr_15 [(_Bool)1] [i_1] [i_3] [19] [i_1])));
                        }
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((int) (-(((((/* implicit */_Bool) arr_0 [3ULL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [14ULL] [i_3] [i_2] [(_Bool)1] [(_Bool)1]))) : (arr_10 [i_2] [i_2] [i_4 - 2])))))))));
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_14 [i_4 - 1] [i_2]))) ? ((+(arr_14 [2] [i_3]))) : ((-(arr_14 [(_Bool)1] [i_2]))))))));
                        var_29 = ((/* implicit */signed char) ((-8865106877660780071LL) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)105)))));
                    }
                } 
            } 
            arr_22 [i_1] [i_1] = ((/* implicit */long long int) arr_5 [i_2]);
            arr_23 [i_1] = ((/* implicit */signed char) min((min((arr_10 [i_2] [i_1] [i_1]), (arr_10 [i_2] [i_2] [i_2]))), (min((min((arr_8 [i_2] [i_2]), (((/* implicit */long long int) arr_1 [i_1])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2])) || (((/* implicit */_Bool) arr_14 [19LL] [(_Bool)1])))))))));
        }
        for (int i_7 = 0; i_7 < 24; i_7 += 2) /* same iter space */
        {
            arr_26 [i_1] [i_1] [i_1] = ((signed char) ((signed char) arr_25 [i_1]));
            var_30 = arr_1 [0LL];
            var_31 = ((signed char) max((((/* implicit */unsigned int) ((signed char) arr_15 [(short)4] [i_1] [14ULL] [i_7] [i_7]))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [3] [21ULL] [i_7] [i_7] [i_7] [17LL]))) & (arr_25 [i_1])))));
            var_32 = ((/* implicit */unsigned long long int) max((var_32), (((((/* implicit */_Bool) ((((unsigned int) arr_6 [i_7])) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [16ULL] [i_1])) || (((/* implicit */_Bool) arr_15 [i_7] [i_7] [i_1] [i_1] [i_1]))))))))) ? (((/* implicit */unsigned long long int) ((int) arr_8 [i_1] [i_7]))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_1] [22] [i_7] [8ULL] [i_7])) > (arr_14 [i_1] [i_7])))), (((((/* implicit */_Bool) arr_19 [(signed char)20] [i_1])) ? (((/* implicit */unsigned long long int) arr_10 [i_1] [(short)17] [0LL])) : (arr_12 [5ULL] [i_7] [(signed char)8] [i_7] [i_7] [i_7])))))))));
            var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((_Bool) ((unsigned long long int) arr_1 [i_1]))))));
        }
        for (signed char i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            var_34 |= ((/* implicit */signed char) ((unsigned long long int) (short)16384));
            arr_30 [i_1] [i_1] [i_1] = ((/* implicit */long long int) min((((/* implicit */short) arr_15 [i_8] [i_8] [i_8] [(_Bool)1] [i_1])), (min((((/* implicit */short) arr_15 [i_1] [i_1] [i_1] [17] [i_8])), (max((((/* implicit */short) arr_5 [16LL])), (arr_28 [i_1])))))));
            arr_31 [i_1] [i_8] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */short) ((signed char) arr_29 [i_8] [15ULL]))), (max((arr_9 [i_1]), (arr_9 [i_1])))));
        }
        for (long long int i_9 = 3; i_9 < 23; i_9 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_10 = 0; i_10 < 24; i_10 += 1) 
            {
                arr_38 [i_1] [(signed char)2] [6ULL] [4LL] = ((/* implicit */int) (((-(arr_11 [i_9 - 2]))) == (((((/* implicit */_Bool) arr_11 [i_9 - 2])) ? (arr_11 [i_9 - 1]) : (arr_11 [i_9 - 1])))));
                var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((((long long int) arr_18 [1ULL] [i_10] [i_10] [i_10] [11U])) | (((/* implicit */long long int) max((3951170694U), (arr_25 [i_9 - 1])))))))));
            }
            arr_39 [i_1] [i_1] [i_9] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_8 [23ULL] [i_9 - 3])), (max((arr_37 [i_9 - 2] [i_1]), (((unsigned long long int) arr_4 [i_1]))))));
            arr_40 [(signed char)22] [i_1] [(signed char)19] = ((/* implicit */unsigned long long int) arr_10 [i_9 - 1] [i_9] [i_9 - 2]);
            var_36 = ((/* implicit */signed char) arr_25 [i_9]);
        }
    }
    var_37 = max((((/* implicit */signed char) var_9)), (((signed char) (signed char)-66)));
}

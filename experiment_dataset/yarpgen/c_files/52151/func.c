/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52151
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
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_10))) & (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) & (var_15))))))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) min((((unsigned short) (unsigned short)39912)), (((/* implicit */unsigned short) min((arr_0 [i_0]), (((/* implicit */signed char) (_Bool)1))))))))));
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) var_11))));
        arr_3 [(short)2] [i_0] = ((/* implicit */unsigned short) arr_0 [(signed char)18]);
        arr_4 [i_0] = ((/* implicit */int) arr_0 [(unsigned short)17]);
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    for (unsigned int i_4 = 2; i_4 < 20; i_4 += 1) 
                    {
                        {
                            arr_14 [1ULL] [(signed char)9] [13] [12LL] [i_0] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) & (arr_8 [i_2] [6U]))) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)25607))))));
                            arr_15 [2ULL] [20ULL] = ((/* implicit */unsigned char) (_Bool)1);
                            arr_16 [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)-38)))) != (((/* implicit */int) (unsigned short)25607))));
                            var_18 -= ((/* implicit */short) arr_10 [i_0] [(signed char)10] [(signed char)10] [i_3] [11]);
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned short)63040)))))))));
        }
        for (long long int i_5 = 2; i_5 < 18; i_5 += 1) 
        {
            arr_20 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_18 [i_5 + 1] [i_0]);
            var_20 = min((var_0), (((/* implicit */long long int) (short)32767)));
        }
        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            arr_24 [i_0] [i_6] = ((/* implicit */long long int) arr_11 [i_0] [i_6] [(_Bool)1]);
            arr_25 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-28)))) / (((/* implicit */int) var_5))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                var_21 &= ((/* implicit */signed char) ((((/* implicit */long long int) min((((/* implicit */int) arr_22 [i_0] [i_7])), (((1557748557) - (((/* implicit */int) (_Bool)1))))))) + (((long long int) arr_26 [i_0] [i_7]))));
                arr_33 [i_7] [i_8] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1741943171697113574LL)) + (arr_30 [i_0] [i_0] [i_0] [i_0])));
                arr_34 [(short)10] |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55093))) : (var_6)))) ? (((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned int) arr_9 [i_0] [18U] [18U]))))) : (arr_10 [i_0] [i_7] [i_8] [(signed char)15] [i_0]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_7])))));
                /* LoopSeq 1 */
                for (unsigned short i_9 = 0; i_9 < 21; i_9 += 2) 
                {
                    arr_39 [i_8] [i_8] [(unsigned short)13] [(unsigned short)13] = ((/* implicit */short) ((unsigned short) arr_21 [(unsigned char)3]));
                    var_22 = ((/* implicit */short) arr_38 [i_0] [i_7] [i_8] [i_9]);
                }
            }
            for (unsigned short i_10 = 4; i_10 < 20; i_10 += 2) 
            {
                arr_42 [i_10 - 2] [i_0] [i_7] [i_0] = ((/* implicit */unsigned char) arr_41 [i_0] [i_7] [i_10] [i_10]);
                /* LoopSeq 1 */
                for (unsigned char i_11 = 0; i_11 < 21; i_11 += 2) 
                {
                    arr_47 [i_0] [i_10] = ((/* implicit */long long int) ((((_Bool) max((2259202148U), (((/* implicit */unsigned int) var_4))))) ? (((((/* implicit */int) arr_29 [i_10 - 3] [i_7] [i_10])) | (((/* implicit */int) arr_29 [i_10 + 1] [i_7] [i_10])))) : (min((((/* implicit */int) ((_Bool) (short)-1))), ((-(((/* implicit */int) arr_13 [i_7] [i_10] [i_11]))))))));
                    arr_48 [i_0] [i_7] [(_Bool)1] [i_11] = (~(min((arr_31 [i_10 - 4] [(unsigned char)8] [17ULL] [i_10 - 2]), (((/* implicit */unsigned long long int) arr_22 [i_0] [i_10 - 2])))));
                    var_23 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_12 [i_10 - 4]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) != (3471320595U)))), ((unsigned short)30445))))) : (((((/* implicit */_Bool) ((signed char) var_7))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))))) : (arr_41 [i_10 - 2] [i_10] [i_10 - 4] [i_10 + 1])))));
                }
                arr_49 [0LL] [0LL] [i_7] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((1ULL) >> (((((/* implicit */int) (unsigned short)39907)) - (39860)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) (signed char)22)))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_8 [3U] [i_7])))))));
            }
            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))) ^ ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (2471631342422347338ULL)))))) ? (max((((/* implicit */int) (signed char)-34)), (arr_38 [i_0] [i_0] [i_7] [i_7]))) : (((((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) / (((/* implicit */int) arr_9 [(signed char)1] [i_0] [i_7])))))))));
        }
    }
    for (unsigned short i_12 = 0; i_12 < 21; i_12 += 1) 
    {
        var_25 *= ((/* implicit */_Bool) (unsigned char)55);
        arr_54 [(_Bool)1] = ((/* implicit */unsigned long long int) ((_Bool) 4255439640U));
    }
}

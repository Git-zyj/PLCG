/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247960
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
    for (long long int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                arr_8 [(unsigned short)14] [22LL] [0LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_0 [i_1 - 1] [i_2 + 1])) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [(unsigned char)21])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned short)28817))))));
                /* LoopSeq 4 */
                for (unsigned char i_3 = 2; i_3 < 21; i_3 += 2) 
                {
                    arr_11 [(unsigned char)22] [(unsigned char)4] [i_1] [(unsigned char)18] [15U] [(unsigned char)21] = (unsigned char)127;
                    var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [(unsigned char)21] [i_1 - 3])) : (((/* implicit */int) arr_0 [11LL] [i_1 - 2]))));
                    var_21 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)6))));
                    arr_12 [(unsigned char)17] [(unsigned short)1] = var_19;
                }
                for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        arr_17 [i_5] [(unsigned short)19] [i_2] [9LL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0 + 3] [i_0] [i_0]))) > (((((/* implicit */_Bool) arr_3 [(unsigned char)10] [(unsigned short)19])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(unsigned short)11] [2LL]))) : (arr_4 [16U] [(unsigned short)16])))));
                        var_22 = arr_10 [1LL] [i_2] [i_2 + 1] [(unsigned char)22] [i_2 + 1];
                    }
                    var_23 -= ((/* implicit */unsigned char) (unsigned short)960);
                    var_24 = ((/* implicit */unsigned char) ((long long int) var_5));
                }
                for (unsigned char i_6 = 1; i_6 < 22; i_6 += 2) 
                {
                    arr_21 [6U] [i_0] [i_1] [(unsigned char)14] [(unsigned short)0] = ((long long int) ((arr_4 [(unsigned char)20] [(unsigned char)5]) == (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                    var_25 = arr_3 [i_2 + 1] [i_1 - 2];
                    arr_22 [(unsigned char)1] = ((/* implicit */long long int) (unsigned short)63);
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [2LL] [i_0 - 3])) && (((/* implicit */_Bool) arr_4 [i_1 - 3] [i_6]))));
                }
                for (long long int i_7 = 2; i_7 < 22; i_7 += 3) 
                {
                    var_27 = ((/* implicit */unsigned int) (unsigned short)65535);
                    arr_26 [16LL] [i_1] [(unsigned char)17] [(unsigned char)21] = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)38335)) - (((/* implicit */int) (unsigned short)68)))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_0] [i_1] [(unsigned char)14])))))));
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_7 + 1])) ? (5086052299638699470LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_7 + 1] [19U] [(unsigned short)8])))));
                    arr_27 [12U] [(unsigned char)3] [5U] [22LL] = ((/* implicit */long long int) arr_5 [(unsigned char)16] [i_1] [22LL]);
                }
                arr_28 [(unsigned char)10] [(unsigned char)0] = ((unsigned char) var_7);
                var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((arr_23 [i_0] [18LL] [i_1 + 2] [(unsigned char)22]) | (arr_23 [(unsigned char)3] [13LL] [i_1 + 1] [(unsigned char)15]))))));
            }
            /* vectorizable */
            for (unsigned char i_8 = 0; i_8 < 23; i_8 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_9 = 0; i_9 < 23; i_9 += 3) 
                {
                    var_30 ^= ((/* implicit */long long int) var_1);
                    var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)128)) ? (((((/* implicit */_Bool) (unsigned short)21262)) ? (((/* implicit */int) arr_0 [(unsigned char)13] [(unsigned char)3])) : (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_0 [i_0 + 2] [3LL])))))));
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0 - 3])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55)) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) (unsigned char)0)))))));
                }
                arr_33 [(unsigned char)2] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_15 [i_0 - 2])) : (((/* implicit */int) arr_3 [i_1] [i_8]))));
                arr_34 [(unsigned char)12] [14LL] [i_8] [(unsigned char)11] = arr_16 [i_8] [i_8] [(unsigned short)10] [i_0] [i_0] [i_0];
                var_33 = ((/* implicit */long long int) var_12);
            }
            arr_35 [11U] [21LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) max((arr_16 [(unsigned short)2] [(unsigned char)7] [(unsigned short)18] [i_0] [12LL] [i_0]), (var_9)))) & (((/* implicit */int) ((((/* implicit */int) arr_13 [(unsigned short)21] [(unsigned char)10] [18U])) > (((/* implicit */int) var_1)))))))) ? (min((min((arr_30 [(unsigned char)1] [(unsigned short)9]), (((/* implicit */unsigned int) arr_3 [i_0] [(unsigned char)7])))), (((/* implicit */unsigned int) max(((unsigned char)255), (var_17)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_31 [(unsigned short)20] [(unsigned char)1]), (arr_20 [(unsigned char)22] [(unsigned short)7])))) ? (((/* implicit */int) max(((unsigned char)127), ((unsigned char)200)))) : (((/* implicit */int) arr_6 [i_0 - 2] [i_1 + 3] [i_1])))))));
            arr_36 [3U] [15U] [i_0] = ((/* implicit */long long int) arr_29 [i_1] [i_1] [(unsigned char)8]);
        }
        var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(5086052299638699470LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)938), ((unsigned short)61347))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0 + 2]))) * (arr_23 [12U] [i_0 + 1] [i_0 - 1] [i_0])))));
        arr_37 [i_0] [i_0] |= arr_0 [(unsigned char)21] [(unsigned short)19];
        arr_38 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [16LL] [(unsigned char)15] [(unsigned char)15] [i_0])) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (unsigned short)65467)))) : (((/* implicit */int) arr_32 [i_0] [(unsigned short)15] [15LL] [4U] [i_0]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [(unsigned short)15] [10LL])) : (((/* implicit */int) (unsigned char)148))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_10 [(unsigned char)9] [5LL] [3LL] [(unsigned char)5] [i_0]))) | (var_6))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_19 [16LL] [4LL] [(unsigned short)12] [i_0] [11U]))))))));
    }
    /* vectorizable */
    for (unsigned char i_10 = 1; i_10 < 20; i_10 += 2) 
    {
        var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (-1LL) : (arr_14 [(unsigned char)10] [i_10 - 1] [i_10 - 1] [(unsigned short)0]))))));
        var_36 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_10 + 1] [8U] [8LL]))));
    }
    var_37 = ((/* implicit */unsigned short) ((unsigned char) (~(((/* implicit */int) var_13)))));
    var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)102))))) ? (((/* implicit */int) ((unsigned char) (unsigned char)174))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) >= (var_11)))))))))));
}

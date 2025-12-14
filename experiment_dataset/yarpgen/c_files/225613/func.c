/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225613
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
    var_15 = ((/* implicit */unsigned char) var_5);
    var_16 = ((/* implicit */int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 2955465468U))));
    var_17 = ((/* implicit */unsigned char) 0U);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) -4643603353826993651LL)) * (0ULL))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            arr_6 [i_1] = ((/* implicit */unsigned char) (~(-1931157986738435567LL)));
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 0U)) >= (13ULL)));
                arr_10 [(unsigned char)7] [i_1] [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */int) arr_3 [i_2 - 1])) - (((/* implicit */int) var_0))))));
                var_20 &= ((/* implicit */unsigned char) arr_4 [i_2 - 2] [i_1]);
            }
            for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
            {
                arr_13 [i_0] [i_1] [i_3] = ((((/* implicit */_Bool) var_12)) ? (arr_0 [i_3] [i_0]) : (((/* implicit */int) var_13)));
                var_21 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_0])) == (arr_0 [i_0] [i_0])));
                arr_14 [i_0] [i_0] = ((/* implicit */long long int) (short)8518);
                var_22 = ((/* implicit */unsigned int) arr_7 [i_0] [i_1] [7U] [i_1]);
            }
            for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
            {
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (((+(0U))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [6U] [i_0])) : (arr_15 [i_0])))))))));
                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_3))));
                /* LoopSeq 1 */
                for (unsigned short i_5 = 2; i_5 < 12; i_5 += 1) 
                {
                    var_25 -= ((/* implicit */short) ((((/* implicit */int) arr_19 [i_0] [i_0])) + (((((/* implicit */_Bool) arr_7 [(unsigned char)8] [1U] [i_4] [1U])) ? (((/* implicit */int) (unsigned short)16294)) : (((/* implicit */int) arr_3 [i_0]))))));
                    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) arr_0 [i_5 - 1] [i_5 - 1]))));
                }
            }
        }
        for (unsigned char i_6 = 1; i_6 < 9; i_6 += 3) 
        {
            arr_25 [i_0] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_5 [i_6 + 1])) : (((/* implicit */int) (unsigned short)0))));
            arr_26 [0LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_6 - 1] [i_6 + 2])) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_6 - 1] [9LL] [i_6 + 3])) ? (((/* implicit */unsigned long long int) arr_22 [11] [i_0] [7LL] [(unsigned char)7] [i_6 + 2] [11])) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_6 + 3] [(unsigned short)3] [i_6])))));
            /* LoopSeq 2 */
            for (unsigned char i_7 = 0; i_7 < 13; i_7 += 1) 
            {
                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_5)))) ? (arr_8 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_6 + 2])))));
                var_28 = ((/* implicit */unsigned short) arr_12 [i_0] [i_0] [i_7]);
            }
            for (unsigned int i_8 = 0; i_8 < 13; i_8 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 13; i_9 += 4) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned short) (~(arr_8 [i_9] [i_9] [i_9] [3])));
                            var_30 = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_6 - 1])) < (((/* implicit */int) arr_2 [i_6 + 4]))));
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_21 [i_6])))) ? ((+(arr_1 [i_8] [7]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_20 [i_0] [i_9] [(unsigned short)11] [i_6] [i_10]))))));
                            arr_37 [(unsigned short)10] [i_9] [(_Bool)1] [(unsigned short)10] [i_0] = arr_31 [0LL];
                        }
                    } 
                } 
                arr_38 [11LL] [i_6] [(unsigned char)1] [(unsigned char)3] = ((/* implicit */int) -5170743863323680096LL);
            }
        }
    }
}

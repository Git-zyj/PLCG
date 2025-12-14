/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30876
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_10 = ((/* implicit */long long int) min((((/* implicit */unsigned char) arr_2 [i_0] [i_0])), (var_9)));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            arr_6 [i_0] = ((/* implicit */short) (+(((/* implicit */int) min((arr_1 [i_0] [i_1]), (((/* implicit */unsigned short) arr_4 [i_0])))))));
            var_11 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_0 [i_1])), ((+(((/* implicit */int) arr_0 [i_0]))))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                for (unsigned short i_3 = 1; i_3 < 9; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 2; i_4 < 10; i_4 += 4) 
                        {
                            var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_4 - 2] [i_3 - 1] [i_2 - 1])) ? (arr_5 [i_4 - 2] [i_3 - 1] [i_2 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) || ((!(((/* implicit */_Bool) arr_5 [i_4 - 1] [i_3 - 1] [i_2 - 1]))))));
                            arr_15 [i_3] [i_3] [(unsigned short)7] [i_4] = ((/* implicit */unsigned short) ((((var_1) + (9223372036854775807LL))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_4] [i_3 + 1] [i_1])))))));
                        }
                        var_13 = ((/* implicit */short) min(((+((+(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [5ULL])))))), (((/* implicit */int) arr_2 [i_2] [i_1]))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_5 = 1; i_5 < 9; i_5 += 2) 
        {
            /* LoopSeq 3 */
            for (short i_6 = 0; i_6 < 11; i_6 += 2) 
            {
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((arr_16 [i_5 + 2] [i_5]) >> (((arr_16 [i_5 + 1] [i_5]) - (13682819372706138640ULL))))))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_5 + 2] [(short)10])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_21 [i_0])));
            }
            for (int i_7 = 2; i_7 < 9; i_7 += 4) /* same iter space */
            {
                var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_7 - 2] [i_5 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_3)));
                var_17 = ((/* implicit */unsigned long long int) (~(((int) arr_5 [i_7] [i_5] [i_0]))));
                var_18 = ((/* implicit */unsigned long long int) arr_3 [i_7 + 2] [i_5 + 1]);
            }
            for (int i_8 = 2; i_8 < 9; i_8 += 4) /* same iter space */
            {
                var_19 = ((/* implicit */_Bool) (-(arr_24 [i_0] [i_5 + 2] [i_8] [9ULL])));
                /* LoopSeq 3 */
                for (short i_9 = 0; i_9 < 11; i_9 += 4) 
                {
                    var_20 = ((/* implicit */unsigned long long int) var_4);
                    var_21 = arr_23 [i_0] [i_5] [i_0];
                    arr_33 [i_0] [i_5] = ((/* implicit */unsigned long long int) (-(arr_24 [i_5 + 1] [i_5 + 1] [i_8 - 2] [i_8 - 2])));
                    arr_34 [i_0] [i_0] [i_0] [10LL] [(signed char)5] = ((/* implicit */signed char) arr_14 [i_8] [i_8]);
                    arr_35 [i_5] [i_8] [i_9] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_1 [i_0] [i_0]))));
                }
                for (long long int i_10 = 0; i_10 < 11; i_10 += 3) /* same iter space */
                {
                    var_22 = (~(((/* implicit */int) var_6)));
                    var_23 -= ((/* implicit */unsigned long long int) arr_31 [i_8 + 2] [i_5] [i_5 + 2]);
                }
                for (long long int i_11 = 0; i_11 < 11; i_11 += 3) /* same iter space */
                {
                    var_24 = ((/* implicit */int) ((((arr_18 [i_5] [i_11]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [1]))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
                    arr_43 [(unsigned char)10] [(unsigned char)10] [(unsigned char)10] [i_11] = ((/* implicit */int) var_1);
                    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_0] [i_5] [(unsigned char)3] [i_0] [i_0] [i_11]))) : (var_5)));
                    arr_44 [i_11] [i_5 + 2] = ((/* implicit */unsigned char) arr_2 [i_0] [i_8]);
                }
            }
            var_26 = ((/* implicit */unsigned int) ((arr_40 [i_5] [i_5 - 1] [i_5 + 1] [i_5 - 1]) / (arr_40 [(short)6] [i_5 + 1] [(short)6] [i_5])));
            var_27 = ((short) ((var_5) / (((/* implicit */long long int) ((/* implicit */int) var_0)))));
        }
        for (int i_12 = 2; i_12 < 9; i_12 += 3) 
        {
            var_28 = ((/* implicit */signed char) var_5);
            arr_48 [i_0] [i_0] [i_12] = ((/* implicit */unsigned int) arr_10 [i_0] [0] [i_0] [i_12 - 1]);
            /* LoopNest 3 */
            for (unsigned short i_13 = 1; i_13 < 10; i_13 += 1) 
            {
                for (unsigned char i_14 = 0; i_14 < 11; i_14 += 4) 
                {
                    for (unsigned short i_15 = 0; i_15 < 11; i_15 += 4) 
                    {
                        {
                            arr_59 [i_0] [i_0] [i_12] [i_12] [i_14] [i_15] = arr_2 [i_15] [i_12 - 2];
                            var_29 = ((/* implicit */short) var_0);
                        }
                    } 
                } 
            } 
            arr_60 [i_0] [i_0] [i_12] = ((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) arr_30 [i_12 + 1] [i_12 - 1]))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_58 [i_0] [i_12] [i_0] [i_12] [i_0] [i_12] [i_0])), (var_6)))) ? (((((/* implicit */int) var_9)) & (((/* implicit */int) arr_30 [i_0] [i_12 + 1])))) : (((/* implicit */int) arr_49 [i_12 - 2] [i_12]))))));
        }
    }
    var_30 = ((/* implicit */long long int) var_4);
    var_31 = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_0)), (min((min((var_1), (((/* implicit */long long int) var_0)))), (min((var_5), (((/* implicit */long long int) var_9))))))));
}

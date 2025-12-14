/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34685
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_20 -= ((/* implicit */unsigned int) (-(((/* implicit */int) min(((short)21256), (((/* implicit */short) (signed char)-1)))))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -890777196)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) (~(((/* implicit */int) (short)-1)))))));
    }
    var_21 = ((/* implicit */unsigned long long int) var_18);
    /* LoopSeq 1 */
    for (unsigned short i_1 = 2; i_1 < 22; i_1 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_2 = 1; i_2 < 20; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)3340))) / (4294967295U))))));
                var_23 -= ((/* implicit */unsigned char) ((arr_9 [i_3]) & (((/* implicit */unsigned long long int) (+(-1))))));
                var_24 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_5 [i_1] [(signed char)7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_2]))) : (17165119969375870651ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))));
            }
            for (unsigned short i_4 = 4; i_4 < 20; i_4 += 4) 
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 2) 
                {
                    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_2 + 3] [i_4 + 3])) ? (((/* implicit */int) arr_15 [i_2 + 2] [i_4 - 3])) : (((/* implicit */int) arr_15 [i_2 - 1] [i_4 - 2]))));
                    var_26 = ((((/* implicit */int) (short)21256)) | (arr_4 [i_1] [i_2 + 3]));
                    var_27 = ((/* implicit */signed char) 2147475456);
                    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -2064393642)) ? (arr_7 [i_1]) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))))))));
                }
                for (long long int i_6 = 3; i_6 < 22; i_6 += 4) 
                {
                    arr_21 [i_1] [(unsigned short)18] [14U] [i_1] [14U] [i_4] &= ((/* implicit */unsigned int) (+((-(-1)))));
                    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) < (1898399212))))));
                }
                for (short i_7 = 0; i_7 < 23; i_7 += 2) 
                {
                    var_30 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_1 + 1] [i_4 - 2] [i_4 - 4])) ? (arr_11 [i_7] [i_4 - 2] [i_4]) : (((/* implicit */int) arr_14 [i_1 + 1] [i_4 - 2] [i_4 - 2]))));
                    var_31 *= ((/* implicit */signed char) ((unsigned long long int) (-(0))));
                }
                for (unsigned short i_8 = 3; i_8 < 22; i_8 += 3) 
                {
                    var_32 = ((/* implicit */long long int) arr_23 [6] [i_2] [i_2] [16U]);
                    var_33 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                    var_34 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) 3023512445U)) ? (arr_26 [i_1 - 2] [i_1 - 2]) : (((/* implicit */long long int) -296560382)))));
                }
                var_35 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) + (16ULL)));
                var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_2 + 2])) ? (((/* implicit */int) arr_5 [i_1 - 2] [i_2 + 3])) : (-7)));
                var_37 &= ((/* implicit */unsigned long long int) ((unsigned char) arr_5 [i_4 - 4] [i_2 + 1]));
                var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_2 + 3] [i_1 + 1])) ? (((/* implicit */unsigned long long int) arr_4 [i_2 + 3] [i_2 + 1])) : (18446744073709551610ULL)));
            }
            var_39 = (-(arr_26 [i_1 - 1] [i_2 - 1]));
            var_40 &= ((/* implicit */signed char) arr_16 [(short)14] [(short)14] [i_1 - 1] [i_1]);
        }
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 3) 
        {
            for (unsigned short i_10 = 2; i_10 < 19; i_10 += 4) 
            {
                {
                    arr_33 [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_12 [i_1] [i_9]);
                    var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((arr_28 [i_1 + 1] [i_10] [i_10 + 1]), (((/* implicit */int) var_12))))), (arr_12 [i_1 - 2] [i_1 - 2]))))));
                    var_42 = ((/* implicit */unsigned short) ((((9223372036854775804LL) <= (-3396596245374557383LL))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_20 [i_1] [i_10] [i_9] [i_1] [i_1]))))) : ((-(((((/* implicit */_Bool) arr_17 [i_1] [i_1])) ? (arr_17 [i_1] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_1] [i_9] [i_9] [i_10])))))))));
                }
            } 
        } 
    }
    var_43 = ((/* implicit */long long int) (+(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)19540))))))));
    var_44 = ((/* implicit */short) var_2);
}

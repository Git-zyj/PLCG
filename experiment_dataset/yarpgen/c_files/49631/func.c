/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49631
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
    var_17 ^= ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -1591557488)), (var_13)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_11)), (var_10)))) : (((/* implicit */int) (_Bool)0))))), (var_6)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 4; i_3 < 8; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 1; i_4 < 10; i_4 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_2 [i_0 + 2] [i_1] [i_2])))) + ((-(((/* implicit */int) arr_6 [i_0 + 3] [(unsigned short)2] [i_0 + 3]))))));
                            arr_14 [i_2 + 1] [i_3 + 3] [i_4 + 2] |= ((/* implicit */unsigned short) ((short) (_Bool)1));
                            arr_15 [i_4] [i_0] [i_2] [i_0] [i_0 + 2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [i_0] [i_1 + 2] [(short)3]))));
                        }
                        arr_16 [i_3] [i_1 + 1] [i_3] [i_1 + 1] [i_1 - 1] = ((/* implicit */unsigned int) var_12);
                    }
                    for (unsigned char i_5 = 1; i_5 < 10; i_5 += 4) 
                    {
                        var_19 = arr_17 [i_0 + 2] [i_1] [i_2 + 1] [i_5 + 1] [i_5] [i_5];
                        var_20 += ((/* implicit */int) ((signed char) (!((_Bool)1))));
                    }
                    for (signed char i_6 = 1; i_6 < 8; i_6 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned char) var_9);
                        arr_21 [i_0 + 2] [i_1] [(unsigned short)11] [i_6] = ((/* implicit */unsigned int) var_10);
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 3) 
                        {
                            {
                                arr_29 [i_0] [i_0] [i_0] [(unsigned char)11] [11LL] = (!(((/* implicit */_Bool) arr_11 [i_0] [i_0 - 1] [i_0 - 1] [i_1 - 1] [i_2 + 1])));
                                arr_30 [i_1] [i_7] [i_8] = ((/* implicit */_Bool) 358606515U);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_9 = 4; i_9 < 10; i_9 += 3) 
        {
            for (unsigned int i_10 = 0; i_10 < 12; i_10 += 2) 
            {
                {
                    arr_37 [(unsigned short)10] [i_9 - 1] [i_9] = ((/* implicit */unsigned char) (unsigned short)6);
                    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (+(3936360806U))))));
                }
            } 
        } 
        var_23 *= ((/* implicit */short) (!(((/* implicit */_Bool) (+(var_6))))));
    }
    for (unsigned long long int i_11 = 1; i_11 < 23; i_11 += 2) 
    {
        var_24 = ((/* implicit */unsigned int) arr_39 [i_11]);
        /* LoopNest 2 */
        for (long long int i_12 = 3; i_12 < 21; i_12 += 3) 
        {
            for (unsigned short i_13 = 2; i_13 < 22; i_13 += 4) 
            {
                {
                    var_25 += ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */unsigned long long int) 578735551)) : (arr_44 [i_11 + 1] [i_12])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_11])) ? (578735537) : (((/* implicit */int) arr_43 [i_11] [i_11]))))) : (arr_40 [i_11] [6ULL]))));
                    var_26 = ((/* implicit */signed char) arr_45 [i_13] [i_13] [i_13]);
                    arr_46 [i_11 - 1] [0ULL] [i_12 - 2] [i_13] = ((/* implicit */unsigned int) max((min((((/* implicit */int) arr_43 [i_13] [i_12])), ((-(((/* implicit */int) (signed char)-101)))))), (((/* implicit */int) arr_43 [i_12] [i_12]))));
                    var_27 = ((/* implicit */int) ((max(((~(arr_44 [i_13] [i_11]))), (((/* implicit */unsigned long long int) 1213427851)))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65184)) ? (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_13 + 1] [i_11]))) : (arr_42 [i_13 - 2] [i_11])))) ? (((/* implicit */unsigned int) -1032230866)) : (((unsigned int) 358606533U)))))));
                    var_28 -= ((/* implicit */unsigned long long int) (!((_Bool)1)));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (signed char i_14 = 1; i_14 < 16; i_14 += 3) 
    {
        for (short i_15 = 3; i_15 < 18; i_15 += 4) 
        {
            for (unsigned int i_16 = 2; i_16 < 18; i_16 += 2) 
            {
                {
                    var_29 -= ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3502417357U)) ? (((/* implicit */int) arr_50 [i_15 - 2])) : (1032230866)))), (((((/* implicit */_Bool) arr_47 [i_14 + 3] [i_14 + 3])) ? (arr_53 [i_14 + 3] [i_15 - 3] [i_15] [i_16 - 2]) : (((/* implicit */unsigned long long int) -7049050645733779715LL)))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)136)), (-7049050645733779715LL))))));
                    var_30 += ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_53 [i_14] [i_14] [i_16] [i_15])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))))))));
                    var_31 += ((unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
    var_32 = ((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */long long int) ((int) ((unsigned char) var_12)))) : (var_6));
}

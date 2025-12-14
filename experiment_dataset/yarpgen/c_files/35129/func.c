/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35129
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 8; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    arr_10 [i_0] [(short)7] [i_2] = ((/* implicit */unsigned short) arr_9 [i_0] [i_1]);
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) arr_7 [i_2]);
                                arr_16 [i_0] [1] [i_0] [(signed char)7] [i_0] = ((/* implicit */unsigned char) ((arr_13 [i_2] [i_2]) / (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_3 + 1] [i_0])) / (((/* implicit */int) arr_5 [i_3 - 1] [i_3])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 3; i_5 < 10; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) (_Bool)1);
                                var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-57)))) ? (((((/* implicit */_Bool) (unsigned short)39874)) ? (-147408813081545701LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) / (-8070892172136235104LL))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) 
                        {
                            {
                                arr_28 [i_0] [i_1 - 3] [i_7] [11LL] = ((/* implicit */int) min((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)129))) : (-8869400017619800694LL)))) ? (((/* implicit */unsigned long long int) (-(arr_7 [i_0])))) : (((((/* implicit */_Bool) 0ULL)) ? (arr_27 [6LL] [i_1 - 3] [i_2] [i_7] [(unsigned char)7]) : (((/* implicit */unsigned long long int) arr_11 [(signed char)5] [i_2] [i_7] [i_8])))))), (max(((~(arr_25 [i_0] [i_1] [i_2] [i_7]))), (((/* implicit */unsigned long long int) (+(arr_13 [i_0] [i_0]))))))));
                                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_7]))))) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_7] [i_8])) : (((/* implicit */int) arr_5 [i_8] [i_1 - 4]))))) ? (min((((((/* implicit */_Bool) 12766836993503665958ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)209))) : (3451255314217851419LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32751)) ? (((/* implicit */int) arr_23 [(signed char)3] [i_1] [i_2] [i_7])) : (((/* implicit */int) arr_15 [i_0] [i_1] [1ULL] [(_Bool)0] [1ULL]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_12 [i_1] [(short)11] [i_7] [(_Bool)1]) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_7] [i_0])))))) ? (((/* implicit */int) arr_24 [(signed char)4] [i_1] [i_1])) : (((/* implicit */int) ((((/* implicit */long long int) arr_4 [i_0])) >= (1226252611122422611LL)))))))));
                                arr_29 [i_0] [i_0] [i_8] [i_7] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) 1916016997974878846ULL)) ? (11489571304815020052ULL) : (arr_19 [i_0] [i_1] [(unsigned char)3] [i_1] [(unsigned char)3] [i_8]))) >> (((((/* implicit */int) (signed char)-66)) + (80))))), (((/* implicit */unsigned long long int) (short)-4257))));
                                arr_30 [(_Bool)1] [i_0] [6ULL] [i_7] [i_8] = ((/* implicit */_Bool) arr_3 [i_0]);
                                var_15 = ((((/* implicit */_Bool) (signed char)-74)) ? (7877673289044275024ULL) : (((/* implicit */unsigned long long int) 9165997832845735360LL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_1 + 3] [i_1 + 3] [i_1 + 4] [i_1 + 1])) ? (((/* implicit */int) arr_17 [i_1 - 1] [i_1 + 1] [i_1 - 3] [i_1 - 4])) : (((/* implicit */int) arr_17 [i_1 + 3] [i_1 - 4] [i_1 - 3] [i_1 + 4]))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_17 [i_1 + 2] [i_1 - 4] [i_1 - 4] [i_1 + 4])), (arr_0 [i_1 + 1] [i_1 + 4])))) : (((/* implicit */int) ((((/* implicit */int) arr_17 [i_1 - 1] [i_1 + 2] [i_1 + 1] [i_1 + 2])) == (((/* implicit */int) arr_0 [i_1 + 2] [i_1 - 2])))))));
                                arr_36 [i_9] [i_2] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_2] [i_9])) ? (((/* implicit */unsigned long long int) arr_31 [i_0] [i_1 - 2] [i_2] [i_2] [(short)5] [i_2])) : (8782116816876772548ULL)))))) && (((/* implicit */_Bool) arr_11 [i_1 - 4] [i_1] [i_1 + 1] [i_1 - 4]))));
                            }
                        } 
                    } 
                }
                arr_37 [i_0] = (!(((((/* implicit */int) arr_17 [i_1 + 1] [1U] [(signed char)11] [i_1 - 1])) != (((/* implicit */int) arr_17 [i_1 + 2] [i_1 - 4] [i_1 - 3] [i_1 - 4])))));
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 2) 
                {
                    for (unsigned int i_12 = 3; i_12 < 10; i_12 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) min((2087923328881603717LL), (((/* implicit */long long int) (signed char)(-127 - 1)))));
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (short)29129)) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)-21621)))), (((/* implicit */int) (unsigned char)227)))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (+(((((/* implicit */_Bool) arr_3 [i_1 - 2])) ? (((/* implicit */int) arr_8 [i_1 - 3])) : (((/* implicit */int) arr_8 [i_1 - 2])))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_13 = 1; i_13 < 9; i_13 += 4) 
    {
        arr_48 [i_13] |= ((/* implicit */unsigned char) 18446744073709551615ULL);
        arr_49 [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) (short)29941)) ? (((((/* implicit */long long int) 4294705152U)) ^ (arr_13 [i_13 + 2] [i_13 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_13])))));
        var_20 = ((/* implicit */unsigned short) arr_11 [i_13] [(signed char)0] [i_13] [i_13 + 2]);
        arr_50 [i_13] = ((/* implicit */signed char) arr_8 [i_13]);
    }
    var_21 = (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (3645546871812017865LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))))) : (((/* implicit */int) var_8)));
    var_22 = ((/* implicit */short) var_0);
}

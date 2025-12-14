/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21266
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
    var_19 = ((/* implicit */signed char) var_0);
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) var_18)) * (((/* implicit */int) var_0)))) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_0)) : (((int) var_12)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) max((-1), (((/* implicit */int) var_13))))) && (((/* implicit */_Bool) ((arr_4 [(signed char)15] [i_1] [i_0]) ? (var_16) : (((/* implicit */int) (unsigned char)0))))))));
                            /* LoopSeq 2 */
                            for (unsigned char i_4 = 2; i_4 < 15; i_4 += 3) /* same iter space */
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = min((((/* implicit */int) var_6)), (max((max((arr_13 [i_0] [i_0] [i_0] [i_3] [(unsigned char)11]), (((/* implicit */int) (unsigned char)64)))), (((/* implicit */int) arr_5 [i_3] [i_2])))));
                                arr_16 [i_2] [i_3] = ((/* implicit */signed char) ((int) ((((/* implicit */int) arr_10 [i_4] [i_4 + 2] [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 2])) >> (((((/* implicit */int) arr_10 [(unsigned char)3] [i_4 + 2] [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 2])) - (28685))))));
                            }
                            for (unsigned char i_5 = 2; i_5 < 15; i_5 += 3) /* same iter space */
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) arr_6 [i_0] [i_0]);
                                var_21 = arr_1 [i_0];
                                var_22 = ((/* implicit */unsigned short) ((int) arr_13 [i_0] [i_0] [i_2] [i_0] [i_5]));
                            }
                        }
                    } 
                } 
                arr_20 [5ULL] [5ULL] = ((/* implicit */unsigned int) (unsigned char)172);
                arr_21 [i_1] [i_1] [(unsigned char)5] = ((int) min((((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-8)), (arr_1 [14U])))), (4294967295U)));
                arr_22 [i_0] = 1073741823;
                /* LoopSeq 3 */
                for (unsigned char i_6 = 2; i_6 < 16; i_6 += 1) 
                {
                    var_23 = ((/* implicit */int) ((_Bool) arr_17 [i_0] [i_1] [i_6] [i_6 - 2] [i_1] [i_6 - 2] [i_1]));
                    arr_25 [i_0] [i_0] [i_6 + 1] = max((((/* implicit */unsigned long long int) 0U)), (10303981653581132520ULL));
                }
                for (unsigned char i_7 = 0; i_7 < 17; i_7 += 2) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        arr_31 [i_0] [i_8] [i_8] [i_7] [2] = ((/* implicit */int) 0U);
                        var_24 = ((/* implicit */int) max((10303981653581132520ULL), (((/* implicit */unsigned long long int) ((arr_18 [i_0] [i_1] [i_8] [i_8] [i_7]) ? (551525734U) : (4294967291U))))));
                        var_25 = ((/* implicit */int) max((max((max((arr_28 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_18 [i_0] [i_1] [i_0] [i_7] [i_0])))), (arr_28 [i_8] [i_7] [i_1] [i_0]))), (max((((/* implicit */unsigned long long int) arr_5 [i_8] [i_1])), (max((arr_11 [i_0] [i_0] [i_0] [i_8] [i_0]), (var_3)))))));
                    }
                    for (unsigned int i_9 = 1; i_9 < 16; i_9 += 1) 
                    {
                        arr_35 [i_9] [i_7] [i_7] [i_0] [i_0] = ((/* implicit */unsigned long long int) 1073741823);
                        arr_36 [(unsigned short)7] [i_0] [i_7] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_28 [i_0] [i_0] [i_0] [i_0]);
                        arr_37 [i_0] [(unsigned short)1] [i_7] [i_0] [i_0] [i_9] = ((/* implicit */unsigned int) arr_5 [i_0] [11]);
                    }
                    for (unsigned long long int i_10 = 2; i_10 < 13; i_10 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 17; i_11 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_44 [i_0] [i_1] [i_7] [i_10] [(unsigned char)2] [(unsigned short)5])) ? (arr_28 [i_10 + 1] [i_10 - 2] [i_10 - 1] [i_10 + 2]) : (((/* implicit */unsigned long long int) arr_39 [i_0] [i_0] [i_10 + 3] [i_10 + 3]))));
                            arr_45 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(10303981653581132520ULL))))));
                            arr_46 [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_11] [i_10 + 4] [i_7] [i_1])) ? (((/* implicit */int) arr_26 [i_10])) : (((arr_23 [i_7]) ? (((/* implicit */int) arr_18 [i_10] [i_10 + 2] [i_10 + 2] [4ULL] [4ULL])) : (((/* implicit */int) (_Bool)1))))));
                            arr_47 [i_0] [i_1] [i_7] [i_0] [i_11] = ((/* implicit */int) arr_17 [i_0] [i_0] [8] [(short)3] [(short)3] [i_10 - 2] [i_11]);
                        }
                        var_27 = ((/* implicit */unsigned char) arr_14 [i_0] [i_1] [i_10] [i_10] [i_0]);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_12 = 1; i_12 < 15; i_12 += 1) 
                        {
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16769024U)) ? (var_14) : (((/* implicit */unsigned int) arr_29 [i_0] [i_10 - 1] [i_7] [i_12 - 1] [i_10 - 1] [i_12 - 1]))))) ? ((+(-1073741844))) : (((/* implicit */int) arr_17 [i_0] [i_10 + 3] [i_10 + 3] [i_10] [i_12 + 2] [i_10 + 3] [i_0]))));
                            var_29 = ((/* implicit */int) (unsigned char)229);
                            arr_50 [i_12] [i_10] [i_10] [i_7] [i_0] [i_0] [i_0] = ((/* implicit */int) (~(((((/* implicit */_Bool) var_5)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_10 + 2] [i_10 - 1] [i_10 - 2] [i_10 + 1] [i_10 + 3])))))));
                        }
                        arr_51 [(unsigned short)4] [i_7] [4U] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) ((arr_27 [i_7] [i_7]) + (3743441569U)))), (arr_11 [(signed char)5] [9ULL] [i_7] [(signed char)5] [i_7]))), (((/* implicit */unsigned long long int) var_2))));
                    }
                    arr_52 [i_0] [i_0] [i_0] [i_1] = arr_7 [14ULL] [i_7] [14ULL] [i_7];
                }
                for (unsigned char i_13 = 0; i_13 < 17; i_13 += 2) 
                {
                    arr_56 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_13]);
                    arr_57 [i_0] [i_0] [i_13] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_48 [i_0] [i_13] [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_13 [i_13] [i_13] [i_1] [i_0] [i_0])) : (max((var_7), (((/* implicit */unsigned long long int) arr_54 [i_0] [i_0] [i_0])))))), (((/* implicit */unsigned long long int) -780737205))));
                    var_30 = ((/* implicit */_Bool) (-(((/* implicit */int) min((arr_26 [i_0]), (arr_26 [i_1]))))));
                }
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned short) var_16);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215671
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
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_18 = arr_4 [i_1];
                            arr_11 [(signed char)16] [i_1] [i_2] [(signed char)16] = ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */int) var_10)) : (max((arr_7 [i_0] [i_0 + 1] [i_0 + 3] [(_Bool)1] [i_0 + 1]), (arr_7 [i_0] [i_0] [i_0 + 4] [i_0] [i_0 + 1])))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned long long int i_4 = 3; i_4 < 19; i_4 += 3) 
                {
                    var_19 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((arr_10 [i_4 + 1] [i_4] [i_4 - 1]) / (arr_10 [i_4 + 1] [i_4] [i_4 - 1]))) : (max((arr_10 [i_4 + 1] [i_4 - 3] [i_4 - 1]), (arr_10 [i_4 + 1] [(signed char)21] [i_4 - 1])))));
                    arr_14 [i_0 + 2] [(_Bool)1] [i_1] [i_4] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (short)6127)) ? (4740259815440426533LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [2ULL]))))) : (((/* implicit */long long int) ((int) 0LL))))), (((/* implicit */long long int) (~(((/* implicit */int) var_0)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            {
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (((((!(((/* implicit */_Bool) 1610336511)))) || ((!(arr_12 [i_0] [i_0 + 2] [i_0 - 1] [i_0]))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (var_3))))));
                                var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((arr_1 [i_0 + 4]), (arr_1 [i_0 + 3]))))));
                                var_21 -= ((((/* implicit */_Bool) (-(arr_10 [i_0 + 1] [i_1] [i_4 - 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_6 [(unsigned short)6] [7ULL]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-37))))))))) : (((/* implicit */int) var_13)));
                            }
                        } 
                    } 
                }
                for (signed char i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 2; i_8 < 21; i_8 += 1) 
                    {
                        for (int i_9 = 0; i_9 < 22; i_9 += 2) 
                        {
                            {
                                arr_30 [i_0] [i_0 + 1] [i_1] [i_1] [17LL] [i_8 + 1] [i_7] = ((/* implicit */int) 4740259815440426533LL);
                                var_22 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (arr_3 [i_8 + 1])))) / (((/* implicit */int) max((arr_3 [i_1]), (((/* implicit */unsigned short) (signed char)-62)))))))), ((+(max((arr_25 [i_0 - 1] [i_0 + 2]), (((/* implicit */unsigned long long int) var_1))))))));
                                arr_31 [i_7] [i_1] [i_7] [i_8] [i_8] = ((/* implicit */_Bool) (((~(arr_19 [i_0] [i_0] [i_7] [i_7] [i_0] [i_8] [i_9]))) >> (((/* implicit */int) ((_Bool) var_0)))));
                            }
                        } 
                    } 
                    var_23 ^= var_4;
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 3) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */int) (-(max((max((var_3), (((/* implicit */unsigned long long int) var_5)))), (arr_33 [i_0 + 1] [i_7])))));
                                arr_39 [i_0] [i_7] = ((/* implicit */_Bool) arr_29 [i_10] [i_10] [i_1]);
                                var_25 = ((/* implicit */unsigned short) (((+(4740259815440426533LL))) - (min((arr_0 [i_10]), (((/* implicit */long long int) var_17))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_12 = 1; i_12 < 20; i_12 += 4) /* same iter space */
                {
                    var_26 ^= ((/* implicit */_Bool) ((int) arr_1 [i_0]));
                    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) arr_13 [(_Bool)1] [i_0] [(signed char)11] [i_12]))));
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (unsigned short i_14 = 0; i_14 < 22; i_14 += 1) 
                        {
                            {
                                arr_49 [i_0 + 1] [(signed char)18] [i_12] [i_13] [12LL] [i_14] = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)40)))), (((((12424543560710134420ULL) | (((/* implicit */unsigned long long int) -2845387867743123038LL)))) | ((~(12537044877011961456ULL)))))));
                                var_28 = ((/* implicit */unsigned short) min((((long long int) arr_12 [i_12 + 2] [i_0 + 1] [i_0] [i_0])), (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_12 + 2] [i_0 + 1] [(unsigned short)15] [(unsigned short)7])) | (((/* implicit */int) arr_1 [i_0])))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_15 = 1; i_15 < 20; i_15 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_16 = 1; i_16 < 20; i_16 += 2) 
                    {
                        for (unsigned short i_17 = 0; i_17 < 22; i_17 += 1) 
                        {
                            {
                                arr_56 [13ULL] [21ULL] = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) max((var_14), (((/* implicit */int) var_6))))))));
                                arr_57 [i_0] [i_16 + 1] = ((/* implicit */long long int) (signed char)-41);
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) 18446744073709551610ULL))))))));
                }
                arr_58 [i_1] [9U] [i_0 + 2] = ((/* implicit */long long int) (-(((/* implicit */int) arr_18 [3LL] [i_0] [i_1] [i_1] [i_1] [i_1] [(signed char)18]))));
            }
        } 
    } 
    var_30 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 1492484510)) * ((-((~(8378753086284413649ULL)))))));
}

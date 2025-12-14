/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235715
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned char) -1845500245327661222LL))), (((((/* implicit */int) arr_4 [i_1])) | (((/* implicit */int) var_10))))))), (1813475390U))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 3; i_2 < 11; i_2 += 1) 
                {
                    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) -1845500245327661222LL))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_0] [i_0] [i_4] [i_2] [i_1] = ((/* implicit */unsigned char) ((unsigned short) arr_9 [i_1] [i_1] [i_2 - 2]));
                                arr_13 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_0] [i_3 + 1]);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */short) arr_2 [i_0]);
                    var_17 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_1 - 2] [(short)1] [i_2 - 3] [(_Bool)1]))));
                }
                for (long long int i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
                {
                    arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_1 - 3] [i_1 + 1] [i_1 - 3] [i_1 - 1] [i_0]))))) ? (((((/* implicit */int) arr_14 [i_1 - 3] [i_0] [i_1])) * (((/* implicit */int) arr_14 [i_1 - 2] [i_0] [(unsigned char)6])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_15 [i_1])) <= (arr_11 [i_0] [i_0] [i_1] [11U] [i_5]))))));
                    arr_17 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1] [i_0] [i_0]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            var_18 = ((/* implicit */short) ((var_1) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_7 [i_0] [i_0] [i_0] [i_1]))))));
                            arr_23 [i_1] [i_1] [i_5] [(unsigned short)8] [i_5] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (arr_18 [i_0] [i_0] [(unsigned short)3] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [(signed char)2] [i_1 - 3] [i_5] [i_1 - 3] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_0]))) : (arr_24 [i_0] [(signed char)2] [i_5] [i_6] [i_1 - 2]))))));
                        }
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (~(((((/* implicit */_Bool) 1813475390U)) ? (-1845500245327661222LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((signed char) (+(arr_24 [i_0] [i_1] [i_5] [i_5] [i_6])))))));
                        var_23 = ((/* implicit */unsigned short) (unsigned char)21);
                    }
                    arr_26 [i_0] [i_0] = ((/* implicit */long long int) -419815584);
                }
                for (long long int i_9 = 0; i_9 < 12; i_9 += 2) /* same iter space */
                {
                    arr_29 [i_0] [i_1] [i_9] [i_0] = ((/* implicit */short) (((-(var_6))) / ((((!(arr_8 [i_0]))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_5 [(short)4] [(signed char)11] [(signed char)11] [2]))) - (var_6))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1 + 1] [i_0] [i_1 - 3])))))));
                    var_24 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1])), (arr_25 [i_0] [i_9] [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_0])))), ((+((+(-1845500245327661238LL)))))));
                }
            }
        } 
    } 
    var_25 &= ((/* implicit */signed char) 4863421464120861963ULL);
    var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_12) / (((/* implicit */long long int) 2481491905U))))) ? ((+(var_6))) : (((-1845500245327661222LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-88))))))))));
    /* LoopSeq 2 */
    for (int i_10 = 3; i_10 < 10; i_10 += 3) /* same iter space */
    {
        var_27 = arr_19 [i_10] [i_10] [i_10] [i_10];
        var_28 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((unsigned int) arr_18 [i_10] [i_10] [i_10 - 3] [(unsigned char)0] [2ULL]))) - (arr_18 [i_10 - 2] [i_10 - 2] [i_10] [i_10] [(short)8])))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)12))) - (1845500245327661222LL)))), ((-(arr_9 [i_10] [i_10] [i_10]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_10 - 2] [i_10 - 3]))) != (-1845500245327661222LL)))))));
        var_29 = ((/* implicit */long long int) (signed char)-44);
        /* LoopNest 2 */
        for (unsigned int i_11 = 0; i_11 < 11; i_11 += 3) 
        {
            for (int i_12 = 0; i_12 < 11; i_12 += 1) 
            {
                {
                    var_30 ^= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_10] [(short)6] [i_10] [i_10] [(unsigned short)0])) ? (arr_18 [i_10] [i_10] [i_10] [i_10] [10LL]) : (arr_18 [i_10] [i_10] [i_10] [i_10] [(short)6]))));
                    arr_39 [i_10] [i_11] [i_11] = min((((/* implicit */unsigned long long int) var_12)), (((unsigned long long int) var_10)));
                    arr_40 [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? ((+(((/* implicit */int) arr_1 [i_10])))) : (((/* implicit */int) arr_7 [i_10] [i_11] [i_10 - 1] [i_10]))))) || (((/* implicit */_Bool) ((min((-1845500245327661222LL), (((/* implicit */long long int) arr_38 [i_10] [i_10] [i_12])))) | (((/* implicit */long long int) (-(((/* implicit */int) var_8))))))))));
                }
            } 
        } 
    }
    for (int i_13 = 3; i_13 < 10; i_13 += 3) /* same iter space */
    {
        arr_45 [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_13 - 2])) ? (((/* implicit */int) arr_1 [i_13])) : (arr_32 [i_13 - 2])))) ? (((((/* implicit */_Bool) arr_20 [i_13 + 1] [i_13])) ? (((/* implicit */long long int) ((((/* implicit */int) var_7)) + (((/* implicit */int) arr_10 [i_13] [3ULL] [i_13 - 1] [i_13] [i_13]))))) : ((-(-1845500245327661238LL))))) : (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_41 [i_13] [i_13])) ? (((/* implicit */int) arr_42 [8LL] [i_13 - 2])) : (((/* implicit */int) var_10)))), (((int) arr_2 [i_13])))))));
        var_31 -= ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) <= ((+(arr_25 [i_13] [6ULL] [i_13] [10] [i_13] [i_13] [10])))))), (((((/* implicit */_Bool) arr_2 [8LL])) ? (((/* implicit */long long int) arr_21 [i_13 - 3] [(signed char)11] [i_13] [(unsigned short)8] [i_13 - 2] [i_13])) : (((long long int) (signed char)3))))));
        arr_46 [i_13] = ((/* implicit */long long int) arr_38 [i_13] [i_13] [i_13 - 2]);
        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((/* implicit */int) arr_5 [i_13] [i_13] [i_13] [i_13])) * ((((_Bool)1) ? ((+(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (_Bool)1)))))))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228180
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
    var_10 = ((/* implicit */long long int) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_11 = max((((unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_4] [i_3] [i_2] [i_1] [i_0] [i_0])) ? (var_5) : (var_8)))), (((((/* implicit */_Bool) arr_10 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)134))) <= (var_2))))) : (var_5))));
                                var_12 += ((/* implicit */unsigned char) ((signed char) min((((unsigned long long int) arr_1 [i_0] [(signed char)10])), (((/* implicit */unsigned long long int) (!((_Bool)1)))))));
                            }
                        } 
                    } 
                } 
                var_13 = min((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1] [i_0])) ? (arr_10 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_1])) || (((/* implicit */_Bool) arr_10 [i_1] [i_0]))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_1 [i_5] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_1 [i_5] [i_1]))))))));
                    var_15 = ((/* implicit */long long int) arr_0 [i_0]);
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) var_8)))));
                                arr_19 [i_0] [i_1] [i_5] [i_6] [i_1] [i_5] = ((/* implicit */unsigned char) max((var_0), (((/* implicit */unsigned long long int) (!(var_9))))));
                                var_17 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_6] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6266))) : (arr_4 [i_0] [i_1] [i_5] [i_6]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))));
                                var_19 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_13 [i_0] [i_5] [i_8] [i_8]))))) : (arr_10 [i_8] [i_9])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246))) : ((+(var_2)))));
                                var_20 = ((/* implicit */unsigned long long int) ((max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_7))))))) < (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_9)))))));
                                var_21 += ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_8])))))));
                                var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((+(arr_2 [i_9] [i_0] [i_0]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_5] [i_8] [i_0] [7U])))))) ? ((+(((((/* implicit */_Bool) arr_10 [i_0] [i_1])) ? (var_6) : (((/* implicit */unsigned long long int) var_3)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16030297609051589627ULL)) ? (((/* implicit */int) (signed char)29)) : (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    var_23 -= ((/* implicit */unsigned char) max((((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_4))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (var_1)))))))), (arr_28 [i_0])));
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 4) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) var_4)) ? (max((arr_30 [i_12] [i_1] [i_10] [i_1] [i_0]), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_10] [i_1])))))));
                                var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (((_Bool)1) ? (arr_16 [i_11] [(short)10] [(short)10] [i_10]) : (16102433306684999064ULL)))) ? (((((/* implicit */_Bool) var_4)) ? (15620123342258571693ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_10] [i_1])) | (((/* implicit */int) arr_15 [i_12] [i_11] [i_10] [i_1] [i_0]))))))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_21 [i_1])))))));
                            }
                        } 
                    } 
                    var_26 -= ((/* implicit */_Bool) (+(((/* implicit */int) var_9))));
                    var_27 -= ((/* implicit */_Bool) var_8);
                }
                /* LoopNest 3 */
                for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 3) 
                {
                    for (signed char i_14 = 0; i_14 < 11; i_14 += 1) 
                    {
                        for (short i_15 = 0; i_15 < 11; i_15 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */long long int) arr_12 [i_0] [9ULL] [i_1]);
                                arr_41 [i_14] [i_14] [i_0] [i_13] [i_15] [i_1] [i_13] = ((/* implicit */long long int) var_0);
                                var_29 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(var_4)))), ((~(arr_2 [i_0] [i_0] [i_0])))));
                                var_30 += (_Bool)1;
                                var_31 = ((/* implicit */_Bool) (+(((long long int) arr_4 [i_1] [i_13] [i_1] [i_1]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned int) var_5);
}

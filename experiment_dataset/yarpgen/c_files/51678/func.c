/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51678
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
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) (unsigned char)180))))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) max((var_18), (max((max((min((var_12), (((/* implicit */unsigned long long int) arr_7 [i_0 + 1])))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])) != (var_9)))))), (((/* implicit */unsigned long long int) arr_0 [i_0] [(signed char)8]))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            var_19 = ((/* implicit */signed char) (unsigned short)55519);
                            arr_10 [i_3] [i_3] [i_2 - 1] [i_1 - 3] [i_3] = ((/* implicit */unsigned long long int) arr_3 [(unsigned short)11] [i_1]);
                            arr_11 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)0)), ((signed char)14)))) ? (arr_9 [i_3] [i_1] [i_1 - 1]) : (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_3]))));
                            var_20 = ((/* implicit */unsigned short) var_14);
                            var_21 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) (unsigned short)32543)) & (((/* implicit */int) (unsigned short)33993)))));
                        }
                        for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                        {
                            arr_14 [i_0] [i_3] [i_0 + 1] [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 679834179)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30968))) : (16383U)));
                            arr_15 [i_3] = ((/* implicit */short) (-(((/* implicit */int) ((short) (signed char)14)))));
                            arr_16 [i_3] [i_2] [i_3] = ((/* implicit */long long int) (((+(((/* implicit */int) (signed char)124)))) + (((arr_13 [i_3] [i_1] [i_1 - 1] [i_2] [i_2] [i_3 - 1]) ? (679834179) : (((/* implicit */int) arr_13 [i_3] [2] [i_1 + 1] [i_3] [i_3] [10]))))));
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) max((arr_12 [i_3 - 1] [i_5] [i_2 + 1] [i_5] [i_0]), (arr_12 [i_3 - 1] [i_1] [i_2 + 1] [i_1] [i_0 - 1])))) : (max((arr_9 [i_5] [i_1 - 3] [i_5]), (((/* implicit */long long int) -679834180)))))))));
                        }
                    }
                    for (unsigned char i_6 = 2; i_6 < 17; i_6 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_7 = 1; i_7 < 16; i_7 += 2) /* same iter space */
                        {
                            arr_23 [i_0] [(short)12] [i_1] [i_2 - 1] [(unsigned char)12] [(unsigned char)8] [i_7 + 2] = ((/* implicit */unsigned short) 0U);
                            var_23 = ((/* implicit */unsigned int) max((min((499730897371303221ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 243291819)) ? (((/* implicit */int) (unsigned short)42398)) : (-1317070375)))))), (((/* implicit */unsigned long long int) (signed char)-15))));
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_19 [i_1 - 3] [i_6] [i_7 + 2]) / (-243291819)))) ? (((((unsigned long long int) -243291820)) ^ (((/* implicit */unsigned long long int) (-(var_15)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1 - 4] [i_2 + 1] [i_0] [i_7])))))) : (((unsigned int) (_Bool)0)))))));
                        }
                        for (long long int i_8 = 1; i_8 < 16; i_8 += 2) /* same iter space */
                        {
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) 16ULL))));
                            arr_27 [i_2] [i_0 - 1] [(unsigned char)5] [i_2] [6] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned int) max((min((max((((/* implicit */unsigned long long int) (unsigned char)242)), (var_9))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_21 [i_6 - 2] [i_6] [i_6] [i_6 - 1] [i_6]))))))), (((/* implicit */unsigned long long int) arr_19 [i_1] [i_1] [i_1 - 1]))));
                            var_26 = ((/* implicit */long long int) min((var_26), (var_14)));
                        }
                        var_27 |= ((/* implicit */unsigned long long int) var_3);
                    }
                    for (unsigned int i_9 = 2; i_9 < 17; i_9 += 3) 
                    {
                        arr_30 [i_0] [4] [i_9] [i_9] [i_1] = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned int) var_15)), (((arr_24 [i_0] [i_1 - 4] [8] [i_2] [i_9]) - (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 0; i_10 < 18; i_10 += 3) 
                        {
                            var_28 |= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [(unsigned short)12] [i_0 + 1] [i_9] [(unsigned short)12]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0 - 1] [i_1] [i_1 - 1] [i_9] [i_1 - 3])) ? (((/* implicit */int) arr_18 [i_0] [i_1 - 4] [i_1 - 4] [i_9] [i_10])) : (-243291819))))));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) + (15195396210299910736ULL)))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_2 + 1])) == (((/* implicit */int) arr_3 [4] [15]))))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_22 [i_10] [i_9] [i_2] [i_2] [i_1] [i_0])), ((unsigned char)249))))))) ? (max((max((((/* implicit */unsigned int) var_16)), (4294950913U))), (((/* implicit */unsigned int) (signed char)15)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [13ULL] [13ULL] [i_9])) ? (((/* implicit */int) arr_6 [i_10] [9U] [i_2 + 1] [i_0] [i_0])) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)0)) : (-1217427729))))))));
                            var_30 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_32 [i_0] [i_1 + 1] [5ULL] [3U] [i_10] [i_0 + 1] [i_2 + 1]))));
                            var_31 ^= ((/* implicit */unsigned short) min((max(((-(((/* implicit */int) (short)-25563)))), (-679834186))), (((((/* implicit */_Bool) (unsigned short)29734)) ? (((((/* implicit */_Bool) 2350316629U)) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_21 [i_2 + 1] [i_1 - 3] [i_2] [i_9] [i_2]))))));
                            var_32 = ((/* implicit */unsigned char) ((((_Bool) ((((/* implicit */unsigned int) arr_12 [i_1] [i_1] [i_2] [i_1] [i_0])) < (arr_24 [i_0] [(unsigned char)4] [13] [i_9] [i_10])))) ? (((((/* implicit */_Bool) arr_32 [i_9] [i_9 - 2] [(unsigned char)15] [i_9 - 2] [(unsigned char)15] [i_9 + 1] [(unsigned char)15])) ? (((unsigned long long int) arr_20 [(unsigned char)5] [(short)6] [i_2] [i_9] [(unsigned char)5])) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_11), (((/* implicit */unsigned short) var_3)))))))) : (((((_Bool) arr_19 [i_9] [i_1 - 1] [i_2])) ? (15551339663713642906ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (arr_34 [i_10] [i_9] [i_2 - 1] [i_1] [i_0] [(short)4])))))))));
                        }
                    }
                    var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) >> (((((/* implicit */int) arr_22 [i_2] [i_2] [i_2 + 1] [15LL] [1U] [1U])) - (29)))))), (18446744073709551615ULL)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(var_16)))), ((+(arr_4 [i_0 + 1] [i_1] [i_2]))))))));
                    var_34 = ((/* implicit */short) ((unsigned short) (+(arr_1 [i_2 - 1]))));
                }
            } 
        } 
    } 
}

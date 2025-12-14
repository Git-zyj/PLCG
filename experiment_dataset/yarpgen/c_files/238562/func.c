/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238562
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
    for (signed char i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_16 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 3326590872U)) == (6ULL)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) var_11);
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((6ULL), (18446744073709551612ULL)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(arr_5 [i_1])))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) * (arr_0 [i_3]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 2) 
        {
            for (short i_6 = 4; i_6 < 19; i_6 += 2) 
            {
                {
                    var_19 = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_14 [i_4] [(unsigned char)18] [i_6 + 2])), (var_14)))) ? (max((((/* implicit */unsigned long long int) (unsigned char)204)), (arr_11 [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)170)) != (((/* implicit */int) arr_14 [i_4] [(unsigned char)9] [(unsigned char)9])))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (signed char)59)) : (((/* implicit */int) (_Bool)1)))))));
                    var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_6] [i_5] [i_5 - 1] [i_5])) || (((/* implicit */_Bool) arr_19 [i_6] [i_6] [i_5 - 2] [i_4])))))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(4294967288U)))) ? (((((/* implicit */_Bool) arr_10 [i_4] [i_4 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_3))) : (min((arr_13 [i_4] [i_4]), (4294967273U)))))), (((((/* implicit */_Bool) ((18446744073709551608ULL) - (2843674031114170487ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_4] [(short)13] [i_4] [i_4])))))) : (((unsigned long long int) arr_19 [i_4] [i_4] [i_4] [i_4]))))));
        var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_10 [i_4] [i_4]), (((/* implicit */unsigned int) var_9)))))));
        var_23 = ((/* implicit */long long int) (((-(0LL))) < (((/* implicit */long long int) (-(var_1))))));
    }
    for (signed char i_7 = 1; i_7 < 17; i_7 += 1) 
    {
        var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_7 + 1] [i_7 - 1])) ? (((/* implicit */int) arr_20 [i_7 - 1] [i_7 + 1])) : (((/* implicit */int) arr_20 [i_7 - 1] [i_7 + 1])))))));
        var_25 *= ((/* implicit */short) max((((arr_21 [i_7 + 1] [i_7 + 1]) ^ (((/* implicit */unsigned long long int) 3676309118U)))), (min((((/* implicit */unsigned long long int) min((var_5), (((/* implicit */unsigned int) var_9))))), ((~(arr_11 [i_7 + 1])))))));
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 1) 
        {
            for (long long int i_9 = 2; i_9 < 16; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 2; i_10 < 16; i_10 += 1) 
                    {
                        for (unsigned char i_11 = 3; i_11 < 14; i_11 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (-(((/* implicit */int) (!(((((/* implicit */_Bool) -427215866)) && (((/* implicit */_Bool) 563459332678735766ULL))))))))))));
                                var_27 = ((/* implicit */unsigned short) arr_12 [i_7]);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 3) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned short) (+(6945414040380766865ULL)));
                        arr_32 [i_8] [(signed char)3] [i_9] [i_8] [i_8] = ((/* implicit */int) ((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 19U))))))));
                        arr_33 [i_12] [i_8] [i_8] [i_9] [i_8] [i_7 + 1] = ((/* implicit */unsigned short) var_1);
                        var_29 = ((/* implicit */unsigned char) min((((/* implicit */int) var_13)), (((((/* implicit */_Bool) arr_19 [13ULL] [i_9 + 2] [i_8] [i_7])) ? (((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_19 [i_7] [i_7] [i_9] [i_12])))) : (((/* implicit */int) arr_28 [i_9 - 2] [i_8] [i_8] [i_7 + 1]))))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 3) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned long long int) arr_22 [i_8]);
                        arr_36 [i_7] [i_7] [i_8] [i_9 - 1] [i_8] [i_13] = ((/* implicit */unsigned int) max(((~(((/* implicit */int) (!(arr_30 [i_8] [i_9 - 1] [i_8])))))), (((/* implicit */int) ((signed char) (short)20333)))));
                    }
                }
            } 
        } 
        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) 590542139U)) || (((/* implicit */_Bool) (unsigned char)237))));
    }
    var_32 |= ((/* implicit */_Bool) (+(((/* implicit */int) var_12))));
    var_33 += ((/* implicit */unsigned int) var_2);
}

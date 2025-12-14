/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212507
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [(unsigned char)14])) : (((/* implicit */int) arr_0 [8U])))))));
        var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) ^ (((((/* implicit */_Bool) 1439693176)) ? (((/* implicit */int) arr_1 [(short)6])) : (((/* implicit */int) arr_1 [(signed char)8]))))));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1])) && (((/* implicit */_Bool) arr_5 [i_1] [i_2])))))));
            var_22 = ((/* implicit */short) (((+(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))) >> (((min((var_2), (((/* implicit */unsigned long long int) ((signed char) var_6))))) - (79ULL)))));
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) arr_2 [i_2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_6), (arr_5 [i_1] [i_1])))) ? (((long long int) arr_1 [i_2])) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2])))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) - (((/* implicit */int) var_17))))), (((unsigned long long int) arr_4 [(signed char)10]))))));
            var_24 = ((/* implicit */unsigned short) (-(max((-1439693177), (1439693177)))));
        }
        for (long long int i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
        {
            arr_11 [i_1] = ((/* implicit */unsigned char) var_13);
            arr_12 [i_3] [(unsigned short)6] [i_1] = ((((/* implicit */_Bool) min((min((var_2), (((/* implicit */unsigned long long int) arr_4 [(signed char)12])))), (((/* implicit */unsigned long long int) max((arr_3 [i_1] [i_1]), (arr_5 [i_1] [i_1]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_14), (var_17))))) : (min((var_2), (((/* implicit */unsigned long long int) arr_4 [i_1])))));
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) arr_8 [16LL]))));
                        arr_18 [i_3] [i_3] [(short)18] = ((/* implicit */_Bool) arr_1 [2]);
                        arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] = min((((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_6 [i_5])), (arr_2 [9LL])))) ? (arr_7 [(signed char)18] [i_4] [i_4]) : (max((((/* implicit */long long int) var_0)), (arr_4 [i_1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [(short)13] [12] [(short)13] [7LL])) ? (((/* implicit */int) arr_0 [(unsigned char)4])) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_5]))))));
                    }
                } 
            } 
            arr_20 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_3]);
        }
        /* LoopNest 3 */
        for (short i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned int i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 0; i_9 < 20; i_9 += 3) 
                        {
                            var_26 = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_22 [i_6] [i_6])) : (((/* implicit */int) var_5)))))))), (min((((/* implicit */unsigned long long int) arr_13 [(signed char)8] [(short)0] [i_7] [i_7])), (max((var_8), (((/* implicit */unsigned long long int) var_6)))))));
                            arr_30 [i_1] [i_1] [i_1] [i_1] [i_1] [(unsigned char)14] [i_6] = ((/* implicit */unsigned short) min((max((arr_28 [i_1] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) ((int) var_17))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((2389914596138070824LL), (((/* implicit */long long int) arr_1 [i_6]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_3 [i_1] [i_9])))) : (arr_23 [i_1] [i_6] [i_6]))))));
                            var_27 = ((/* implicit */_Bool) (~(arr_23 [i_1] [i_1] [i_1])));
                        }
                        for (unsigned short i_10 = 0; i_10 < 20; i_10 += 3) 
                        {
                            arr_33 [i_6] [(signed char)3] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (arr_14 [i_1] [i_1] [i_1]))))) >= (arr_21 [i_1])))), (var_13)));
                            var_28 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_26 [i_1] [i_1] [(short)8] [i_1] [i_1] [i_6])), (max((((/* implicit */unsigned int) 1439693164)), (var_1)))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_11 = 0; i_11 < 20; i_11 += 3) 
                        {
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(var_1)))) == (arr_4 [i_1])))), (arr_32 [i_1] [i_1] [i_7] [i_1] [i_11]))))));
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)51413)) ? (((/* implicit */int) arr_25 [i_6] [i_6] [i_7] [i_7])) : (((/* implicit */int) arr_16 [i_1] [i_1] [(unsigned short)15] [18LL]))))) ? (((/* implicit */unsigned long long int) ((int) arr_16 [i_6] [i_6] [i_8] [i_11]))) : ((-(6355588321357619435ULL)))));
                            var_31 *= ((/* implicit */_Bool) ((unsigned char) arr_8 [19ULL]));
                        }
                        /* vectorizable */
                        for (unsigned short i_12 = 0; i_12 < 20; i_12 += 3) 
                        {
                            var_32 = ((/* implicit */short) ((unsigned char) var_4));
                            var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) arr_35 [(unsigned short)12] [i_6] [i_6] [i_6]))));
                            var_34 = ((/* implicit */unsigned long long int) var_3);
                            arr_40 [i_6] [i_6] [(short)2] = ((unsigned char) arr_29 [i_1] [i_1] [i_1] [i_7] [i_8] [(unsigned char)11]);
                            arr_41 [i_1] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_22 [i_6] [i_7])) : (((/* implicit */int) arr_5 [i_1] [i_1]))))) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_36 [i_1] [i_1] [i_7] [i_1] [i_12] [i_8] [i_1]))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 3) 
                        {
                            arr_45 [i_1] [i_6] [i_6] [(unsigned char)3] [i_6] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) 2147483647))));
                            arr_46 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_1] [(signed char)5] [(signed char)5])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((arr_4 [i_1]) >= (((/* implicit */long long int) ((/* implicit */int) arr_27 [(short)15] [i_6]))))))));
                            arr_47 [i_1] [i_6] [6U] [i_6] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_6]))) & (((((/* implicit */_Bool) arr_32 [i_7] [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_6] [i_6] [i_6] [11ULL]))) : (arr_23 [i_1] [i_1] [i_1])))));
                        }
                        var_35 = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) max((var_1), (((/* implicit */unsigned int) arr_38 [i_6] [i_6] [16ULL] [i_6] [i_6] [16ULL]))))))));
                    }
                } 
            } 
        } 
        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) -1439693177)) ? (-896855875881084184LL) : (((/* implicit */long long int) 1439693176))));
    }
    var_37 = ((/* implicit */short) ((((/* implicit */int) ((signed char) var_13))) - (((/* implicit */int) var_6))));
}

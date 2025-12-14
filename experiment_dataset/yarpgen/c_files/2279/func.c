/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2279
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
    var_10 = ((/* implicit */unsigned short) var_9);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [2ULL] [9ULL] [3U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) 3958959742U)), (arr_0 [i_2 - 1])))) && (((/* implicit */_Bool) min((arr_6 [i_2 + 1] [(unsigned short)5]), (((/* implicit */unsigned long long int) arr_0 [i_2 - 1])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_11 |= max((((/* implicit */long long int) max((((/* implicit */int) max(((unsigned char)127), (((/* implicit */unsigned char) (_Bool)1))))), ((+(((/* implicit */int) (unsigned char)128))))))), (max((arr_0 [(unsigned short)13]), (((/* implicit */long long int) ((unsigned char) arr_2 [i_0]))))));
                                arr_13 [i_4] [i_3] |= ((/* implicit */short) max((((/* implicit */unsigned int) arr_12 [i_4 - 2] [i_4 - 3] [i_4 - 3] [i_2 - 1] [i_2 + 1])), (((3958959742U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_2 - 1] [i_2 - 1])))))));
                                var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) arr_5 [i_0] [8ULL] [i_4 - 3]))));
                                arr_14 [i_1] [(unsigned short)4] = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4 - 1] [(unsigned char)7] [0LL] [i_0] [i_0]))) + (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))) - (arr_5 [i_4] [i_3] [(unsigned short)4])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_5 = 3; i_5 < 10; i_5 += 4) /* same iter space */
    {
        arr_18 [(unsigned short)0] [i_5] &= ((/* implicit */unsigned short) (+(arr_6 [i_5 - 2] [(_Bool)1])));
        /* LoopSeq 4 */
        for (unsigned int i_6 = 3; i_6 < 10; i_6 += 2) 
        {
            var_13 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_5 + 1] [i_6 + 1] [i_6] [i_5 - 2] [i_6 + 1])) & (((/* implicit */int) arr_12 [i_6] [i_6 - 3] [i_6] [i_5 - 3] [i_6 - 1]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_5] [i_6 - 1] [(_Bool)1] [i_5 - 2] [(unsigned short)4]))))) : (max((((/* implicit */long long int) 1396467251U)), (var_6)))));
            var_14 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) var_7)))))), (((arr_9 [6ULL] [i_6 - 2] [i_5 - 3] [6ULL] [6ULL]) | (((/* implicit */long long int) ((/* implicit */int) max((var_2), (((/* implicit */unsigned char) arr_11 [i_5 - 2] [(unsigned char)5]))))))))));
            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) max((var_6), (((/* implicit */long long int) arr_4 [i_5] [i_5 + 1])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)44))) && (((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (((/* implicit */int) arr_10 [i_5] [10U] [i_6]))))))))) : ((((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (857422498948926992LL))) - (max((arr_9 [i_6] [i_6] [i_6] [i_6] [8ULL]), (((/* implicit */long long int) 1396467255U))))))));
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_6 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_6]))) : (max((((/* implicit */long long int) (+(((/* implicit */int) arr_21 [i_6] [i_5]))))), (arr_9 [6U] [i_6] [i_6 + 1] [6U] [(short)3])))));
        }
        for (long long int i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            arr_24 [i_7] [i_7] [(short)9] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_7 [i_5] [i_5] [i_7]))));
            arr_25 [i_7] = var_7;
            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_7 [i_5] [i_7] [i_7])), (arr_16 [i_7])))) - (((((/* implicit */int) arr_7 [i_5 - 3] [i_7] [(unsigned short)2])) | (((/* implicit */int) arr_7 [i_7] [i_7] [i_7])))))))));
            var_18 = max((max((((/* implicit */unsigned long long int) ((arr_11 [i_5] [i_7]) ? (((/* implicit */long long int) 2898500040U)) : (arr_9 [(unsigned short)9] [4LL] [(unsigned char)6] [(unsigned char)9] [i_7])))), (((((/* implicit */_Bool) (unsigned short)45682)) ? (7389914279866208071ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47988))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)1008))) ? (max((4016547890226768240LL), (((/* implicit */long long int) arr_20 [i_7] [i_5 - 3] [i_7])))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127)))))));
        }
        /* vectorizable */
        for (long long int i_8 = 0; i_8 < 11; i_8 += 2) 
        {
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_5 - 1] [i_8] [i_8])) || (((/* implicit */_Bool) (unsigned char)15))));
            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_5 - 2] [i_8] [i_5 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (arr_22 [i_5] [i_8] [(unsigned char)6]))))));
            var_21 = ((/* implicit */unsigned long long int) 1396467251U);
        }
        /* vectorizable */
        for (unsigned char i_9 = 1; i_9 < 10; i_9 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_10 = 3; i_10 < 7; i_10 += 3) 
            {
                arr_34 [i_9] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_30 [i_9]))));
                arr_35 [(unsigned short)0] [i_9] [(unsigned char)0] = ((/* implicit */unsigned char) (((((~(((/* implicit */int) var_4)))) + (2147483647))) >> (((((/* implicit */_Bool) arr_12 [i_5] [(unsigned short)9] [i_10] [i_10] [i_5])) ? (((/* implicit */int) arr_7 [i_5] [i_5] [i_5])) : (((/* implicit */int) (unsigned char)177))))));
                arr_36 [(unsigned char)1] [2LL] [i_9] [i_9 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(-6289988630015740909LL)))) ? (((/* implicit */int) ((unsigned char) 11901346792518556160ULL))) : (((/* implicit */int) arr_23 [i_9] [i_9]))));
                arr_37 [i_9] [i_9 + 1] [i_9] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_17 [4U]))));
            }
            /* LoopNest 2 */
            for (unsigned char i_11 = 0; i_11 < 11; i_11 += 1) 
            {
                for (unsigned short i_12 = 0; i_12 < 11; i_12 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned long long int) var_7);
                        arr_43 [i_9] = ((/* implicit */unsigned short) (+(2898500044U)));
                        var_23 = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)17547)))))) > (((arr_21 [i_12] [(unsigned char)9]) ? (arr_3 [i_9] [i_11] [i_12]) : (4016547890226768224LL))));
                        arr_44 [i_12] [i_9] [i_9] [i_12] [i_9] [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)15)) / (((/* implicit */int) (unsigned short)355)))) - ((~(((/* implicit */int) (unsigned char)20))))));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((((-4246412643973990436LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7))))) + (9223372036854775807LL))) << (((((/* implicit */int) arr_38 [4ULL] [i_5 - 3] [i_9 - 1] [i_9 - 1])) - (17677))))))));
        }
    }
    for (unsigned char i_13 = 3; i_13 < 10; i_13 += 4) /* same iter space */
    {
        arr_47 [i_13] = ((/* implicit */unsigned char) 786432LL);
        var_25 -= ((/* implicit */short) ((long long int) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)25)))));
        /* LoopSeq 2 */
        for (long long int i_14 = 4; i_14 < 8; i_14 += 4) 
        {
            var_26 = ((/* implicit */unsigned short) 2898500039U);
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_13 - 1]))))) : (((((/* implicit */_Bool) 2974037074U)) ? (((/* implicit */int) arr_17 [i_13 - 1])) : (((/* implicit */int) arr_17 [i_13 - 1]))))));
        }
        /* vectorizable */
        for (unsigned int i_15 = 1; i_15 < 10; i_15 += 1) 
        {
            arr_54 [i_13] [i_15] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2898500039U))));
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_13 + 1] [i_15 - 1] [i_15 - 1])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_32 [i_13 + 1] [i_15 - 1] [i_15]))));
            var_29 = ((/* implicit */unsigned int) ((unsigned char) arr_7 [i_13 - 2] [i_13] [i_13]));
            /* LoopNest 3 */
            for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 4) 
            {
                for (unsigned char i_17 = 0; i_17 < 11; i_17 += 4) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned long long int) ((arr_31 [i_13 - 1] [i_15 - 1]) | (arr_31 [i_13 - 1] [i_15 + 1])));
                            var_31 -= ((/* implicit */unsigned int) ((0U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)162)))));
                            arr_62 [9U] [i_16] [i_17] [6ULL] [i_15] [i_15] [(unsigned char)3] = ((/* implicit */unsigned char) arr_19 [i_18]);
                            var_32 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) -4016547890226768215LL))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)195)) - (((/* implicit */int) (_Bool)1)))))));
                            var_33 = ((/* implicit */unsigned char) (-((+(0ULL)))));
                        }
                    } 
                } 
            } 
            arr_63 [i_13] [i_13] [i_15] = ((/* implicit */unsigned short) arr_3 [i_13 - 3] [i_13 - 2] [i_13 + 1]);
        }
    }
}

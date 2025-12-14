/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244579
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
    /* LoopSeq 4 */
    for (int i_0 = 2; i_0 < 20; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */int) min((var_14), ((-((+(((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 3] [i_0 + 2]))))))));
                    var_15 = ((/* implicit */_Bool) ((int) arr_2 [i_0]));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3] [i_2] [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 2]))) : (arr_2 [i_3])));
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)251)) ? ((+(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))));
                        arr_12 [(_Bool)1] [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_17 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_13 [i_2] [i_0] [i_0]))) ? (((((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_4])) / (((/* implicit */int) arr_1 [i_2])))) : (((int) max((((/* implicit */unsigned long long int) arr_9 [i_0 + 3])), (var_9))))));
                        var_18 = ((((/* implicit */_Bool) arr_5 [i_0 - 2] [i_0 - 2] [i_2] [i_4])) ? ((~(((/* implicit */int) arr_14 [i_0 - 1] [i_0 - 1] [(short)14] [i_4])))) : (((/* implicit */int) arr_3 [i_0 - 2] [6ULL] [i_2])));
                        var_19 = ((/* implicit */_Bool) ((arr_2 [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_0]))))));
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) arr_6 [i_0] [i_0] [i_0 + 3]))));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned char) var_8);
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned short) ((((_Bool) arr_16 [i_5])) ? (((/* implicit */int) ((((/* implicit */_Bool) 8140184192018150835ULL)) && (((/* implicit */_Bool) 8140184192018150840ULL))))) : (((/* implicit */int) ((short) arr_4 [i_1] [i_2] [(_Bool)1])))));
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_0] [i_0] [(signed char)21] [i_5] [(signed char)21] [(signed char)21]))))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_6]))))))));
                        }
                        var_24 = ((/* implicit */short) ((signed char) var_9));
                        var_25 *= ((/* implicit */signed char) (-((-(((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [i_1] [i_5] [i_1]))))));
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        arr_25 [i_0] = ((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 - 2] [i_7]);
                        var_26 *= ((/* implicit */_Bool) (+((~(((/* implicit */int) var_3))))));
                        var_27 *= ((/* implicit */unsigned short) arr_1 [i_1]);
                        arr_26 [i_0 - 1] [i_1] [i_2] [i_0] = ((/* implicit */int) var_11);
                        var_28 += ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) (unsigned short)18422)) ? (arr_22 [i_0] [14ULL] [i_2] [(unsigned short)3] [i_2] [(unsigned short)3]) : (((/* implicit */int) var_5)))));
                    }
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) 8140184192018150818ULL))));
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) (_Bool)1))) ^ (max((((((/* implicit */_Bool) 54043195528445952ULL)) ? (var_6) : (((/* implicit */int) (unsigned char)242)))), (((/* implicit */int) arr_13 [i_0] [i_0] [i_0]))))));
    }
    for (int i_8 = 2; i_8 < 20; i_8 += 1) /* same iter space */
    {
        var_31 = ((/* implicit */int) max((var_31), (var_2)));
        arr_30 [i_8] [i_8] = ((/* implicit */_Bool) (-(-2112350347159008458LL)));
    }
    for (int i_9 = 2; i_9 < 20; i_9 += 1) /* same iter space */
    {
        arr_33 [(unsigned char)17] [i_9 + 1] = ((/* implicit */long long int) (-(((int) ((unsigned long long int) arr_15 [i_9] [i_9] [i_9] [(short)22] [i_9] [i_9])))));
        var_32 -= ((/* implicit */short) ((int) min(((+(((/* implicit */int) arr_18 [i_9] [(short)4] [i_9] [i_9] [(short)4] [i_9])))), (((/* implicit */int) min((arr_24 [(unsigned char)8] [i_9] [(unsigned char)8] [(unsigned char)6] [i_9 + 1] [i_9]), (((/* implicit */short) arr_5 [i_9] [(signed char)4] [i_9] [i_9]))))))));
        arr_34 [(short)0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 10306559881691400779ULL)) ? (((/* implicit */unsigned long long int) arr_28 [i_9])) : (8347701972856196003ULL))), (((((/* implicit */unsigned long long int) 1773648222)) - (10306559881691400798ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? ((+(((/* implicit */int) (signed char)-17)))) : (((((/* implicit */_Bool) arr_4 [(_Bool)1] [i_9] [i_9 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_14 [i_9] [i_9 + 3] [i_9 + 3] [i_9]))))))) : ((+(10306559881691400761ULL)))));
        var_33 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_28 [17]) : (((/* implicit */int) arr_24 [i_9] [12ULL] [i_9] [(unsigned char)20] [i_9] [i_9]))))) ? (((/* implicit */int) arr_13 [i_9 + 3] [i_9 + 3] [i_9 - 1])) : ((-(((/* implicit */int) arr_32 [(_Bool)1])))))));
    }
    /* vectorizable */
    for (int i_10 = 2; i_10 < 20; i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_11 = 0; i_11 < 23; i_11 += 1) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    arr_43 [i_11] [i_12] = ((/* implicit */unsigned char) (+(var_8)));
                    var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((unsigned long long int) 18446744073709551615ULL)))));
                    arr_44 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */int) ((short) arr_17 [i_10]));
                }
            } 
        } 
        arr_45 [i_10] = ((/* implicit */_Bool) (~(arr_0 [(unsigned char)6])));
    }
    var_35 = ((/* implicit */short) ((int) min((((/* implicit */unsigned long long int) ((int) var_8))), (2765419685107411642ULL))));
    var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) var_5))))) & (18446744073709551607ULL))))))));
}

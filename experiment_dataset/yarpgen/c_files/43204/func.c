/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43204
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
    for (long long int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_8 [i_3] [i_2] [i_0] [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((arr_0 [i_3] [i_0]), (((/* implicit */int) arr_5 [i_3] [i_2] [i_1]))))), (((unsigned int) var_0))))) - (1ULL)));
                            var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) && ((!(var_0))))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
                            {
                                var_15 = ((/* implicit */unsigned char) min((var_15), (((unsigned char) arr_7 [i_2] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0]))));
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 2] [i_0] [i_0])) && (((/* implicit */_Bool) ((arr_6 [i_0] [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))));
                                arr_13 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0] = ((/* implicit */signed char) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0 - 2] [i_0]);
                            }
                            arr_14 [i_0 - 1] [i_0] [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */unsigned int) arr_9 [i_1]);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_5 = 4; i_5 < 8; i_5 += 2) 
                {
                    arr_18 [i_0] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((arr_7 [5ULL] [5ULL] [0] [i_5 + 2] [5ULL] [i_5 + 2]), (arr_7 [i_5] [i_5] [i_5] [i_5 + 2] [i_5 + 3] [i_5 + 2])))) | (((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0 - 1] [i_5] [i_5] [i_5]))) | (((-3389086223421761543LL) / (((/* implicit */long long int) arr_4 [i_0]))))))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            {
                                var_17 *= ((/* implicit */unsigned short) arr_16 [i_5] [i_5]);
                                arr_25 [i_0] [i_6] [i_5] [i_0] [i_0] = ((/* implicit */short) arr_21 [i_0] [i_1] [i_5] [i_0] [i_0]);
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (+(arr_9 [i_0 - 1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 4; i_8 < 9; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_5 - 1])) ? (((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */int) arr_15 [i_0 - 2] [i_1] [i_8] [i_9])) : (((/* implicit */int) arr_22 [i_9] [i_9] [i_8 + 2] [i_5 - 1] [i_0] [i_0])))) : (((/* implicit */int) var_5)))))));
                                var_20 *= ((/* implicit */unsigned char) max((((/* implicit */long long int) min((arr_21 [i_8] [i_8] [i_1] [i_1] [i_8]), (((unsigned int) arr_16 [i_8] [i_8]))))), (((((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_8]))) ^ (-1254310598709206008LL))) + (9223372036854775807LL))) << (((var_8) - (14984652150143799139ULL)))))));
                                arr_32 [i_0] [(unsigned short)7] [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 2]))) ^ (arr_7 [i_0] [i_0] [i_1] [(signed char)10] [i_8 + 1] [i_9])))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 2) 
                {
                    arr_35 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_11 [i_0 + 1] [i_0 + 1] [i_1] [i_10] [i_10])) * (((/* implicit */int) arr_26 [i_0 - 2] [i_0 - 2] [i_10] [i_10] [i_0 - 2]))))))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_28 [i_0])))))));
                    arr_36 [i_0] [i_1] [i_1] [i_10] = max((((/* implicit */unsigned long long int) arr_22 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0])), ((~(((var_8) | (arr_12 [i_0 - 2] [(short)8] [i_0] [i_0] [i_1] [i_10]))))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)162)) ? (((/* implicit */int) var_5)) : (var_10)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned char) var_2)), ((unsigned char)162)))))))));
    var_22 = ((/* implicit */unsigned short) max(((+(((/* implicit */int) max((((/* implicit */signed char) var_2)), ((signed char)28)))))), (((/* implicit */int) (!(((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (unsigned char)94)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_11 = 0; i_11 < 16; i_11 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            arr_41 [i_11] [i_12] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)93))));
            var_23 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)18)), (arr_39 [4U] [i_11] [4U]))))));
            arr_42 [i_11] [i_11] = ((/* implicit */_Bool) min((max((((((/* implicit */_Bool) var_12)) ? (arr_40 [i_11] [i_11] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_12]))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-1))))))), (((((/* implicit */unsigned long long int) min((arr_39 [i_11] [i_11] [i_11]), (arr_39 [14] [i_12] [i_11])))) * (arr_40 [i_11] [i_12] [i_11])))));
            arr_43 [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) min(((~(arr_39 [i_11] [i_11] [i_11]))), ((~(arr_39 [i_11] [i_12] [i_11])))));
        }
        /* LoopNest 3 */
        for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 2) 
        {
            for (short i_14 = 0; i_14 < 16; i_14 += 2) 
            {
                for (int i_15 = 2; i_15 < 14; i_15 += 4) 
                {
                    {
                        arr_50 [i_11] [i_11] [i_15 + 1] = ((/* implicit */short) (-((~(min((((/* implicit */int) arr_44 [i_11] [i_11])), (arr_39 [i_11] [i_13] [i_11])))))));
                        var_24 &= -527375359;
                        var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) min(((unsigned char)93), (((/* implicit */unsigned char) (signed char)121)))))))) == (((((((/* implicit */_Bool) (signed char)57)) ? (11787150680149385434ULL) : (((/* implicit */unsigned long long int) arr_45 [i_11])))) >> (((((/* implicit */int) arr_48 [i_11] [i_11])) & (((/* implicit */int) arr_49 [i_11] [i_11] [i_11] [7LL] [i_15]))))))));
                    }
                } 
            } 
        } 
        arr_51 [i_11] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)162)) ? (942979082786246405ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)100)))))) ? (min((0ULL), (((/* implicit */unsigned long long int) arr_48 [i_11] [i_11])))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_44 [i_11] [i_11])))))))) ? (((((/* implicit */_Bool) min((arr_49 [i_11] [i_11] [i_11] [i_11] [i_11]), (((/* implicit */unsigned char) arr_44 [i_11] [i_11]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_11]))) : (max((4998952286857385792ULL), (((/* implicit */unsigned long long int) (unsigned char)106)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_13)))) ? (4294967290U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_38 [i_11])) || ((_Bool)1)))))))));
        var_26 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_46 [i_11] [0U] [i_11])) ? ((+(((/* implicit */int) var_2)))) : (((/* implicit */int) max((arr_37 [8ULL]), (((/* implicit */short) var_9)))))));
    }
}

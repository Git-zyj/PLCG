/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245307
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned short) ((int) ((arr_6 [i_0] [i_1]) || (((/* implicit */_Bool) 2035623521U))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (unsigned short i_3 = 1; i_3 < 12; i_3 += 3) 
                {
                    {
                        var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */int) var_2)), (var_3))) == (((/* implicit */int) ((short) arr_4 [i_3 - 1] [i_2] [i_1]))))))) / (((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_3 + 1])) ? (arr_10 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3] [i_3] [i_2] [i_3] [i_0]))))) >> (((((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_2]))))) - (12926869337449154221ULL)))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 2; i_4 < 12; i_4 += 1) 
                        {
                            arr_16 [i_4] [i_3] [10] [i_2] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_1] [i_3] [i_3] [i_3] [i_2])) - (((/* implicit */int) arr_12 [i_0] [i_4 - 1] [i_2] [i_3] [i_3 + 1]))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-16518)) - (((/* implicit */int) (signed char)-95))))), (((var_11) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_4 + 1]))))))) : (max((((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-16518)) + (2147483647))) << (((((((/* implicit */int) (short)-16526)) + (16538))) - (12)))))), (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_4)))))));
                            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) arr_13 [i_0] [i_2] [i_2] [i_3] [i_4]))));
                        }
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
                        {
                            var_17 += ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */long long int) arr_20 [i_5] [i_5])) != (arr_8 [i_1] [i_2] [i_2]))))));
                            var_18 -= ((/* implicit */long long int) ((((/* implicit */int) var_13)) + (((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_3 + 2] [i_5] [i_0] [(short)6]))));
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (+(var_11))))));
                        }
                    }
                } 
            } 
        }
        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_6] [i_6] [i_8] [i_8])) || (((/* implicit */_Bool) var_3))))) * (((/* implicit */int) ((((/* implicit */int) (short)32767)) == (((/* implicit */int) (short)16517)))))))) && (((/* implicit */_Bool) ((((long long int) var_12)) | (((/* implicit */long long int) arr_25 [i_0] [i_0] [i_0]))))))))));
                        var_21 = min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)16540))))), (((min((var_8), (((/* implicit */unsigned long long int) var_13)))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [12U] [12U])) * (((/* implicit */int) arr_5 [i_6] [i_6]))))))));
                        var_22 = ((/* implicit */unsigned int) ((long long int) ((arr_0 [i_0]) | (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_6] [i_8]))))))));
                    }
                } 
            } 
            arr_30 [9U] [i_0] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)216))) + (-9223372036854775806LL)));
            arr_31 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (((~(arr_8 [i_6] [i_6] [i_6]))) | (((/* implicit */long long int) (~(((/* implicit */int) arr_17 [i_0] [i_0] [i_6] [i_0] [i_0] [i_0] [i_6])))))));
        }
        for (unsigned short i_9 = 0; i_9 < 14; i_9 += 3) 
        {
            arr_34 [i_0] [i_0] [i_9] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) arr_11 [i_0] [i_0] [(unsigned char)2] [i_9])) | (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_9])))));
            arr_35 [i_0] [i_0] = ((/* implicit */unsigned char) arr_4 [i_0] [i_0] [i_9]);
        }
        for (int i_10 = 2; i_10 < 13; i_10 += 2) 
        {
            var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_10 + 1] [i_10 + 1])) ? (arr_36 [i_0] [i_0] [(unsigned short)13]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)16525)))))) >> ((((~(((((var_10) + (9223372036854775807LL))) << (((var_4) - (181218550403948714ULL))))))) + (7599058149488965712LL)))));
            arr_38 [i_10] [1] = ((/* implicit */long long int) arr_13 [i_0] [i_10] [i_10] [8LL] [i_10 - 1]);
        }
        var_24 = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_17 [i_0] [i_0] [(short)0] [i_0] [i_0] [i_0] [i_0])) & (((/* implicit */int) arr_37 [i_0] [i_0])))), (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_25 -= ((min((((/* implicit */long long int) arr_3 [9LL] [i_0])), (arr_24 [0ULL] [i_0] [i_0] [i_0]))) * (((/* implicit */long long int) ((/* implicit */int) (((+(3759430546108157341LL))) < (((/* implicit */long long int) ((((/* implicit */int) var_14)) - (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [12LL]))))))))));
        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) max(((-(((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) + (arr_24 [(unsigned short)9] [i_0] [i_0] [i_0]))))), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) < (var_7))))))))))));
        arr_39 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 3759430546108157363LL)) && (((/* implicit */_Bool) ((((-5561887173183278286LL) + (9223372036854775807LL))) << (0ULL)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) > (((/* implicit */int) arr_1 [i_0] [i_0]))))) : (((arr_22 [i_0] [i_0] [i_0]) & (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [2] [i_0]))))));
    }
    for (unsigned int i_11 = 1; i_11 < 13; i_11 += 3) 
    {
        var_27 = ((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_43 [i_11])))) * (((unsigned int) var_14))))));
        arr_44 [i_11] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) arr_42 [i_11 + 3])) >= (((/* implicit */int) arr_41 [i_11 + 3])))))));
    }
    var_28 = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) var_6)) < (var_3))));
    var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) var_14))));
    /* LoopNest 2 */
    for (unsigned long long int i_12 = 3; i_12 < 11; i_12 += 1) 
    {
        for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 3) 
        {
            {
                var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((arr_15 [(signed char)4] [i_12 + 1] [i_12] [i_12 - 1] [i_12 - 2]) * (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_24 [i_12] [i_12] [i_12] [i_13])))))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) + (((/* implicit */int) arr_26 [i_12 - 3] [i_12 + 1] [i_12 - 1] [i_12 - 1]))))))))));
                arr_49 [i_12] = ((/* implicit */unsigned long long int) ((unsigned int) max((((-3759430546108157352LL) / (-5561887173183278286LL))), (((/* implicit */long long int) arr_42 [i_12 + 1])))));
                arr_50 [i_12] [2ULL] = var_12;
            }
        } 
    } 
}

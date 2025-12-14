/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29067
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
    var_14 ^= ((/* implicit */unsigned int) var_11);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 &= ((/* implicit */int) min((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_0]))))), ((-(arr_2 [i_0]))))), (((unsigned int) ((arr_2 [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))));
        var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0])))))));
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (~(((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0]))))), (arr_0 [i_0])))))))));
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (~(max(((+(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)5))))))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                {
                    var_19 = ((/* implicit */signed char) ((((long long int) arr_4 [i_1])) / (((/* implicit */long long int) ((/* implicit */int) ((short) arr_9 [i_1] [i_1] [i_3]))))));
                    var_20 = ((/* implicit */short) ((((/* implicit */int) (signed char)-20)) - (((/* implicit */int) (signed char)-33))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        for (short i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) max((((/* implicit */long long int) (signed char)14)), (-9121200241348653410LL))))));
                                var_22 = ((/* implicit */short) (+(((/* implicit */int) arr_8 [i_2] [i_3] [i_5]))));
                                var_23 = ((/* implicit */int) arr_7 [i_1] [i_1] [i_1]);
                                var_24 = ((/* implicit */unsigned int) arr_12 [i_1] [12U] [12U] [i_4]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [15LL])))))))), (arr_10 [0U] [i_1] [i_1] [3] [i_1])));
    }
    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) 
    {
        var_26 = ((/* implicit */long long int) min((var_26), (max((arr_16 [i_6] [i_6]), (((/* implicit */long long int) (~(((/* implicit */int) arr_17 [i_6])))))))));
        /* LoopSeq 1 */
        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-5)))))));
                var_28 = ((/* implicit */unsigned int) (+(arr_19 [i_6])));
            }
            /* LoopSeq 4 */
            for (short i_9 = 0; i_9 < 16; i_9 += 2) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 3) 
                {
                    var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_7]))))))))));
                    var_30 = ((/* implicit */signed char) arr_19 [i_6]);
                    var_31 -= ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_1 [i_10]))))));
                    var_32 = ((/* implicit */unsigned long long int) ((unsigned short) ((int) arr_2 [i_10])));
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 16; i_11 += 2) 
                {
                    for (short i_12 = 0; i_12 < 16; i_12 += 3) 
                    {
                        {
                            var_33 = ((/* implicit */short) max((((/* implicit */unsigned int) arr_27 [i_6])), (((((unsigned int) arr_25 [i_6] [i_7] [5ULL])) / (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_12])))))));
                            var_34 = arr_18 [i_6];
                            var_35 = max((((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-21)) + (2147483647))) >> (((/* implicit */int) (signed char)17)))))))), (max(((signed char)-18), ((signed char)1))));
                            var_36 = ((/* implicit */int) arr_1 [i_7]);
                        }
                    } 
                } 
            }
            for (unsigned int i_13 = 0; i_13 < 16; i_13 += 4) 
            {
                var_37 = ((/* implicit */short) ((min((3126998923U), (((/* implicit */unsigned int) (signed char)13)))) + (((/* implicit */unsigned int) arr_22 [i_6] [i_6] [i_6]))));
                var_38 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) min((arr_35 [i_6] [i_6] [(signed char)11] [i_13]), (((/* implicit */unsigned int) arr_1 [i_6]))))) % (arr_19 [i_6]))) % (((/* implicit */long long int) max((((/* implicit */unsigned int) max((arr_17 [i_6]), (arr_26 [i_7] [i_7] [i_13])))), (max((((/* implicit */unsigned int) arr_17 [i_6])), (arr_34 [i_6] [i_7] [i_13]))))))));
                var_39 = ((/* implicit */unsigned int) arr_23 [i_13] [i_7] [(unsigned short)7] [i_6]);
                var_40 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((+(((/* implicit */int) arr_25 [i_6] [i_7] [i_6])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_6]))))))))));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 16; i_14 += 4) 
                {
                    for (int i_15 = 0; i_15 < 16; i_15 += 2) 
                    {
                        {
                            var_41 = ((/* implicit */int) min((var_41), (((((/* implicit */int) ((((/* implicit */unsigned long long int) (~(arr_39 [i_6] [i_15] [i_13] [i_14] [i_14] [(unsigned short)2])))) < (min((arr_30 [i_14] [i_13] [15]), (((/* implicit */unsigned long long int) arr_34 [i_14] [i_7] [i_13]))))))) ^ ((-(((/* implicit */int) arr_1 [i_6]))))))));
                            var_42 = (-(((/* implicit */int) (signed char)-17)));
                        }
                    } 
                } 
            }
            for (signed char i_16 = 0; i_16 < 16; i_16 += 2) 
            {
                var_43 = ((/* implicit */_Bool) (+(min((max((((/* implicit */unsigned long long int) arr_40 [i_6] [i_6])), (arr_38 [i_6]))), (((/* implicit */unsigned long long int) (-(arr_18 [i_6]))))))));
                var_44 = ((/* implicit */unsigned long long int) arr_2 [i_6]);
                var_45 ^= ((/* implicit */signed char) (+(max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_27 [i_7])) - (arr_22 [i_6] [1U] [i_6])))), (max((((/* implicit */unsigned long long int) arr_33 [i_6] [i_6] [i_6])), (arr_30 [i_7] [i_7] [i_7])))))));
            }
            for (unsigned int i_17 = 0; i_17 < 16; i_17 += 3) 
            {
                var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) ((max((((unsigned int) arr_28 [i_6] [12ULL] [i_17] [7U])), (((/* implicit */unsigned int) ((short) arr_47 [2U]))))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_15 [i_7])), (arr_42 [i_17] [(unsigned short)2] [i_6])))))))))))));
                var_47 = ((/* implicit */unsigned int) ((long long int) max((((arr_37 [(unsigned char)6] [i_7] [(signed char)13] [(signed char)13]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_6] [i_6] [i_7] [i_7] [(short)14] [i_7] [i_17]))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)3))))))));
            }
        }
        /* LoopNest 2 */
        for (unsigned short i_18 = 0; i_18 < 16; i_18 += 2) 
        {
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                {
                    var_48 = ((/* implicit */unsigned char) ((int) (-(arr_29 [i_6] [i_18] [i_6] [i_19]))));
                    var_49 = ((/* implicit */unsigned long long int) (+(((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)18))) != (2529874268U))))));
                }
            } 
        } 
    }
    var_50 = ((/* implicit */int) (~(((unsigned long long int) (signed char)-47))));
    var_51 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)11)) != (2097151)));
    var_52 = ((/* implicit */unsigned int) var_0);
}

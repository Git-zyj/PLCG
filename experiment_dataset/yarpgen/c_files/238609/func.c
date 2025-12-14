/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238609
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
    var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_9))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_18 = ((/* implicit */int) var_5);
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (+(((/* implicit */int) arr_3 [i_1] [i_1])))))));
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((unsigned short) arr_5 [i_0]));
        }
        var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (unsigned char)86)), (20ULL)));
    }
    for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_3 = 1; i_3 < 18; i_3 += 4) 
        {
            var_21 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_14 [i_3 + 2] [i_3 + 2] [i_2])))), (((/* implicit */int) ((short) arr_13 [(unsigned char)18] [i_3 + 1] [i_3 + 1])))));
            arr_16 [i_3] [i_3] = ((/* implicit */signed char) ((arr_15 [i_3]) != (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_12 [i_2] [i_3] [i_3])) != (var_3)))))))));
        }
        for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            var_22 = ((/* implicit */signed char) max(((~(arr_10 [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2] [i_4] [i_4]))) == (arr_17 [i_2] [i_2]))))));
            arr_19 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_3) << (((((/* implicit */int) arr_14 [i_2] [(signed char)14] [i_2])) - (14)))))) ? (((/* implicit */long long int) (+(((((/* implicit */int) arr_18 [i_2] [i_4] [i_4])) ^ (var_3)))))) : (((long long int) ((var_2) << (((((/* implicit */int) (signed char)112)) - (112))))))));
            var_23 = ((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */short) arr_11 [i_2])), (var_16))))));
            /* LoopNest 3 */
            for (signed char i_5 = 2; i_5 < 19; i_5 += 4) 
            {
                for (signed char i_6 = 3; i_6 < 19; i_6 += 2) 
                {
                    for (short i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        {
                            arr_28 [i_2] [i_5] [i_6] [i_6 - 2] [i_7] [i_4] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_9 [i_2])), ((((_Bool)1) ? (((/* implicit */long long int) 4294967285U)) : (16777214LL)))));
                            arr_29 [i_2] [(signed char)1] [i_5] [i_6] [i_7] = ((/* implicit */unsigned int) var_4);
                            arr_30 [i_2] [i_6] [i_2] [i_2] [i_6] [i_2] [i_2] = ((/* implicit */short) arr_25 [i_2] [i_2] [i_5] [i_6] [i_7]);
                            var_24 = ((/* implicit */int) ((signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (arr_25 [(signed char)0] [(signed char)9] [i_5] [i_6] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_5])))))), (((((/* implicit */_Bool) 6070306837431812768ULL)) ? (4398046511103LL) : (((/* implicit */long long int) 1877800005)))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (long long int i_8 = 0; i_8 < 20; i_8 += 4) 
            {
                var_25 = ((/* implicit */_Bool) min((max((arr_17 [i_2] [i_4]), (((/* implicit */unsigned long long int) var_5)))), (((((/* implicit */_Bool) arr_17 [i_2] [i_4])) ? (arr_17 [i_2] [i_2]) : (var_10)))));
                /* LoopSeq 2 */
                for (long long int i_9 = 0; i_9 < 20; i_9 += 4) 
                {
                    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((1877800021) / (1900362372))))));
                    arr_37 [i_2] [i_4] = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned int) arr_12 [i_2] [i_4] [i_8])));
                    var_27 += ((/* implicit */unsigned char) (+(((long long int) arr_27 [i_2]))));
                    arr_38 [i_2] [i_9] [i_8] [i_9] [i_9] [i_4] = ((/* implicit */signed char) arr_24 [i_2] [i_4] [i_2] [(short)15] [i_9] [(short)15]);
                }
                /* vectorizable */
                for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 2) 
                {
                    var_28 = ((/* implicit */long long int) ((((/* implicit */long long int) arr_25 [i_2] [i_4] [i_8] [i_10] [i_2])) != ((~(4398046511125LL)))));
                    arr_42 [i_2] [i_10] [i_2] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_2] [i_4] [i_8] [i_4] [i_2])) ? (arr_35 [i_2] [i_8]) : (((/* implicit */long long int) arr_20 [i_10] [i_8] [i_4] [i_2]))));
                }
            }
            /* vectorizable */
            for (short i_11 = 1; i_11 < 18; i_11 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 2) 
                {
                    for (signed char i_13 = 0; i_13 < 20; i_13 += 4) 
                    {
                        {
                            arr_52 [i_2] [i_4] [i_11] [i_2] [i_12] [i_13] = ((/* implicit */long long int) ((short) (signed char)127));
                            arr_53 [i_2] [i_2] [i_11] [i_11] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)236))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 20; i_14 += 2) 
                {
                    for (unsigned long long int i_15 = 1; i_15 < 19; i_15 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */int) min((var_29), (((arr_47 [(signed char)11] [i_15 - 1] [i_15 + 1] [i_11 - 1]) ? (((/* implicit */int) arr_47 [i_15 - 1] [i_15 + 1] [i_15 - 1] [i_11 + 2])) : (((/* implicit */int) arr_47 [i_15] [i_15 - 1] [i_15 + 1] [i_11 + 1]))))));
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)27))))) ? (arr_33 [i_15 + 1]) : (((/* implicit */long long int) (~(((/* implicit */int) arr_50 [i_2] [i_2] [i_11] [i_14] [i_15])))))));
                            var_31 = ((/* implicit */unsigned char) ((short) (+(var_3))));
                        }
                    } 
                } 
                arr_59 [i_2] = ((/* implicit */signed char) ((unsigned long long int) (short)11574));
            }
            for (signed char i_16 = 0; i_16 < 20; i_16 += 4) 
            {
                arr_64 [i_2] [i_4] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_3))) ? (((((/* implicit */int) ((signed char) arr_12 [i_16] [i_2] [i_2]))) + (((((/* implicit */_Bool) arr_55 [i_4])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_8 [i_16])))))) : (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) 15899455160986420481ULL))))))));
                arr_65 [i_16] = ((/* implicit */unsigned long long int) ((unsigned int) arr_27 [i_16]));
                arr_66 [i_2] [i_4] [i_16] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-4398046511097LL)))) ? (max((((/* implicit */unsigned long long int) arr_62 [i_2] [i_2] [i_2] [i_2])), (var_7))) : (((/* implicit */unsigned long long int) 4398046511085LL))))) ? ((~(((/* implicit */int) ((unsigned char) arr_33 [i_16]))))) : (var_14)));
            }
        }
        var_32 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-121))));
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 20; i_17 += 4) 
        {
            for (unsigned int i_18 = 1; i_18 < 19; i_18 += 2) 
            {
                {
                    var_33 += ((/* implicit */int) ((short) (~(max((((/* implicit */int) arr_44 [i_2])), (var_2))))));
                    var_34 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_2] [i_17] [i_17] [i_18])) ? (arr_39 [i_18 + 1] [i_18 + 1] [i_17] [i_2]) : (arr_39 [i_2] [i_17] [i_17] [i_18])))), (((((/* implicit */_Bool) arr_12 [i_18 + 1] [i_18 + 1] [i_18 - 1])) ? (var_7) : (arr_60 [i_18 - 1] [i_18 - 1] [i_18 - 1]))));
                    arr_74 [i_18] = ((/* implicit */short) arr_18 [i_17] [i_17] [i_17]);
                    var_35 = ((/* implicit */signed char) arr_43 [i_2] [i_17] [i_18]);
                }
            } 
        } 
        var_36 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_5)), (max((arr_71 [i_2] [i_2] [i_2] [i_2]), ((~(((/* implicit */int) (unsigned char)47))))))));
    }
    for (unsigned char i_19 = 0; i_19 < 13; i_19 += 2) 
    {
        arr_77 [i_19] = min((((/* implicit */unsigned long long int) ((unsigned char) (signed char)123))), (((((/* implicit */_Bool) (unsigned char)23)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)59))))));
        arr_78 [i_19] [i_19] = ((/* implicit */int) arr_70 [i_19] [i_19] [i_19] [i_19]);
    }
    var_37 = ((/* implicit */unsigned char) (signed char)-1);
}

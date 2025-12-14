/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48499
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 944782643U)) ? (((((/* implicit */_Bool) ((var_2) + (((/* implicit */long long int) var_11))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_2)) : (11900633022915938352ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_2)))))) : (((((((/* implicit */_Bool) var_12)) ? (11900633022915938352ULL) : (11900633022915938361ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */long long int) 3350184670U)) : (var_14))))))));
    var_17 = ((/* implicit */int) (~(max((11900633022915938352ULL), (((/* implicit */unsigned long long int) (_Bool)0))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) ((long long int) arr_0 [i_0]));
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_0]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-9))))) * (arr_1 [i_0])));
            var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_12))));
        }
        for (int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            /* LoopNest 3 */
            for (signed char i_3 = 1; i_3 < 16; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        {
                            var_20 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) 4029331539U)) ? (6546111050793613263ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)46))))) != (6546111050793613253ULL)));
                            var_21 = ((/* implicit */unsigned long long int) (-(arr_12 [i_3 + 2] [i_2] [i_0])));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */unsigned long long int) (_Bool)1);
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 1) 
            {
                for (unsigned short i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    {
                        var_23 |= ((/* implicit */signed char) arr_21 [i_0] [i_2] [i_6] [i_7] [i_6]);
                        var_24 = ((/* implicit */_Bool) var_11);
                        var_25 = ((/* implicit */long long int) arr_10 [i_6] [i_2] [i_0]);
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 3) 
            {
                var_26 = (~(arr_19 [i_0] [i_0] [i_0] [i_0]));
                arr_26 [i_0] [i_2] [i_0] = ((/* implicit */signed char) ((((arr_12 [i_0] [i_0] [i_0]) + (2147483647))) << (((((/* implicit */int) (unsigned short)680)) - (680)))));
                var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)38)) != (((/* implicit */int) (unsigned char)255))));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_28 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_4)) ? (6546111050793613272ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                arr_30 [i_0] [i_0] [i_2] [i_9] |= ((int) arr_13 [i_2]);
                arr_31 [i_0] [i_2] [i_9] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)209))));
                arr_32 [i_0] [i_0] = ((/* implicit */signed char) ((arr_10 [i_2] [i_2] [i_0]) != (((/* implicit */int) (signed char)-22))));
                arr_33 [i_0] [i_0] [i_0] [i_9] = ((((/* implicit */_Bool) arr_8 [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) -983067281)))) : (((((/* implicit */_Bool) 4611686018427387903ULL)) ? (arr_23 [i_0]) : (((/* implicit */long long int) arr_10 [i_0] [i_2] [i_0])))));
            }
            for (unsigned long long int i_10 = 1; i_10 < 17; i_10 += 2) 
            {
                var_29 = ((((/* implicit */_Bool) 7623411701378035630ULL)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_0])) ? (arr_2 [i_0] [i_0] [i_10]) : (((/* implicit */int) arr_13 [i_0]))))) : (arr_22 [i_0]));
                arr_37 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (!((_Bool)1)))));
            }
        }
        for (int i_11 = 0; i_11 < 19; i_11 += 1) 
        {
            arr_40 [i_0] [2U] [i_11] &= ((/* implicit */signed char) arr_34 [i_0] [i_0] [i_0] [i_11]);
            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_11] [i_11])) ? (arr_5 [i_0] [i_11] [i_11]) : (arr_5 [i_0] [i_0] [i_11]))))));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 19; i_12 += 1) 
            {
                for (unsigned int i_13 = 0; i_13 < 19; i_13 += 1) 
                {
                    {
                        arr_48 [i_0] [i_0] [i_0] = ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (signed char)24))))) < (-1178576980787923648LL));
                        var_31 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [(unsigned char)2] [i_12] [(unsigned char)2])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_11] [i_12])) ? (((/* implicit */int) (_Bool)1)) : (arr_34 [i_0] [i_11] [i_0] [i_13])))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16010))) - (var_5)))));
                    }
                } 
            } 
        }
        for (unsigned char i_14 = 0; i_14 < 19; i_14 += 3) 
        {
            arr_53 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)0)) - ((+(((/* implicit */int) (signed char)9))))));
            var_32 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-1))));
            arr_54 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 523366348113673433ULL)) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        }
        arr_55 [i_0] = ((/* implicit */long long int) ((int) (((_Bool)1) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)47))))));
        var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((17923377725595878175ULL) >> (((17923377725595878198ULL) - (17923377725595878136ULL))))))));
    }
    for (long long int i_15 = 0; i_15 < 17; i_15 += 1) 
    {
        arr_60 [i_15] [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_15] [2ULL] [i_15] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)36))) : (var_14)))) ? (((((/* implicit */_Bool) arr_20 [i_15] [(signed char)2] [(signed char)2] [i_15])) ? (((/* implicit */long long int) var_4)) : (arr_20 [i_15] [10] [i_15] [i_15]))) : (max((arr_20 [i_15] [(unsigned char)14] [i_15] [i_15]), (((/* implicit */long long int) 1746598957U))))));
        arr_61 [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)210))) & (1233506783U))))) ? (((((/* implicit */int) (unsigned char)186)) / (((int) (signed char)11)))) : ((-(((/* implicit */int) (unsigned char)17))))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41455
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
    for (signed char i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        var_18 = arr_0 [i_0];
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_1] = arr_3 [i_0] [i_0] [i_1];
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_2 [i_1] [i_0]), (arr_2 [i_1] [i_0])))) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_0] [i_0])) ? (arr_4 [i_0] [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_0]))))) : (arr_4 [i_0] [i_1] [i_0])))) ? (arr_4 [i_0] [i_1] [i_1]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_1]))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) : (arr_4 [i_1] [i_1] [i_0]))) : (min((((/* implicit */long long int) arr_0 [i_0])), (arr_4 [i_0] [i_1] [i_1])))))));
            var_20 = ((/* implicit */short) arr_4 [i_1] [i_0] [i_0]);
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) arr_4 [i_1] [i_0] [i_0]))));
            var_22 -= ((/* implicit */unsigned short) arr_0 [i_0]);
        }
        for (unsigned short i_2 = 1; i_2 < 22; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) arr_2 [i_3] [i_4]);
                        arr_12 [i_4] [i_3] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */int) arr_0 [i_2]);
                    }
                } 
            } 
            arr_13 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (min((arr_4 [i_0] [i_2] [i_2]), (((/* implicit */long long int) arr_3 [i_0] [i_0] [i_2])))) : (arr_8 [i_0] [i_2] [i_2] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_2]))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_6 [i_0])), (arr_1 [i_0])))) ? (min((((/* implicit */long long int) arr_11 [i_2] [i_2] [i_2] [i_2] [i_0] [i_0])), (arr_8 [i_2] [i_2] [i_2] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_0] [i_2])), (arr_3 [i_0] [i_2] [i_2])))))))));
            arr_14 [i_0] [i_2] = ((/* implicit */unsigned char) arr_9 [i_0] [i_2]);
            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) arr_7 [i_0] [i_2]))));
            arr_15 [i_2] [i_0] = ((/* implicit */long long int) arr_11 [i_0] [i_0] [i_2] [i_2] [i_2] [i_2]);
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 22; i_5 += 3) 
        {
            var_25 = ((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5]);
            var_26 ^= ((/* implicit */_Bool) arr_9 [i_5] [i_5]);
        }
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_6 [i_0])), (arr_0 [i_0])))) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_6 [i_0]))));
        var_28 = arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
    }
    for (unsigned int i_6 = 1; i_6 < 23; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) arr_19 [i_6] [i_7]))));
                    var_30 = arr_21 [i_6] [i_6];
                    arr_25 [i_6] [i_6] [i_8] = ((/* implicit */unsigned long long int) arr_23 [i_7] [i_7]);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_9 = 2; i_9 < 22; i_9 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_10 = 3; i_10 < 23; i_10 += 3) 
                        {
                            var_31 = ((/* implicit */unsigned short) ((arr_30 [i_10] [i_9] [i_8] [i_8] [i_7] [i_6]) ? (arr_24 [i_6] [i_7] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_6] [i_6] [i_7] [i_7] [i_8] [i_9] [i_6])))));
                            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_6] [i_7] [i_7])) ? (((/* implicit */int) arr_29 [i_6] [i_6] [i_7] [i_8] [i_8] [i_9] [i_6])) : (((/* implicit */int) arr_22 [i_6]))))) ? (((((/* implicit */_Bool) arr_23 [i_6] [i_7])) ? (((/* implicit */int) arr_28 [i_6] [i_8] [i_10])) : (((/* implicit */int) arr_18 [i_6] [i_6])))) : (((((/* implicit */_Bool) arr_24 [i_6] [i_7] [i_8])) ? (((/* implicit */int) arr_18 [i_6] [i_6])) : (((/* implicit */int) arr_18 [i_6] [i_10]))))));
                            var_33 = ((/* implicit */short) arr_30 [i_6] [i_7] [i_8] [i_9] [i_9] [i_10]);
                            var_34 = arr_29 [i_6] [i_6] [i_7] [i_8] [i_9] [i_9] [i_6];
                        }
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            arr_33 [i_6] [i_7] [i_7] [i_8] [i_9] [i_9] [i_6] = ((/* implicit */_Bool) arr_22 [i_6]);
                            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) arr_18 [i_9] [i_9]))));
                            arr_34 [i_11] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_30 [i_11] [i_11] [i_9] [i_8] [i_7] [i_6]);
                            var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_8] [i_9])) ? (arr_19 [i_11] [i_8]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_6] [i_7] [i_9])) ? (((/* implicit */int) arr_22 [i_6])) : (((/* implicit */int) arr_32 [i_6])))))));
                        }
                        var_37 -= ((/* implicit */signed char) arr_21 [i_9] [i_7]);
                        var_38 = arr_18 [i_6] [i_6];
                    }
                    for (unsigned int i_12 = 4; i_12 < 24; i_12 += 4) /* same iter space */
                    {
                        arr_37 [i_6] [i_6] [i_8] [i_12] [i_12] = ((/* implicit */long long int) arr_35 [i_6] [i_7] [i_8] [i_12]);
                        arr_38 [i_7] [i_8] [i_7] |= min((((/* implicit */unsigned long long int) arr_23 [i_7] [i_12])), (5426220525103371148ULL));
                        arr_39 [i_6] [i_6] [i_7] [i_8] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_32 [i_7])), (min((((/* implicit */int) arr_29 [i_6] [i_7] [i_8] [i_8] [i_8] [i_8] [i_6])), (arr_21 [i_6] [i_12])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_26 [i_12] [i_8] [i_7] [i_6]), (((/* implicit */unsigned int) arr_29 [i_6] [i_8] [i_8] [i_8] [i_7] [i_7] [i_6]))))) ? (((/* implicit */int) arr_29 [i_6] [i_12] [i_8] [i_7] [i_7] [i_6] [i_6])) : (((/* implicit */int) arr_22 [i_6]))))) : (max((arr_24 [i_6] [i_7] [i_8]), (((/* implicit */unsigned int) (unsigned short)34693))))));
                    }
                    for (unsigned int i_13 = 4; i_13 < 24; i_13 += 4) /* same iter space */
                    {
                        var_39 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) arr_27 [i_6] [i_7] [i_6])), (arr_18 [i_6] [i_8])));
                        var_40 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max((((/* implicit */unsigned char) arr_22 [i_6])), (min((arr_35 [i_6] [i_7] [i_8] [i_13]), (arr_40 [i_13] [i_13] [i_8] [i_7] [i_6])))))), (min((arr_31 [i_6] [i_6] [i_7] [i_8] [i_13]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [i_6] [i_7] [i_8] [i_13])) ? (((/* implicit */int) arr_32 [i_8])) : (((/* implicit */int) arr_22 [i_6])))))))));
                    }
                    arr_42 [i_6] [i_7] [i_6] [i_8] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (unsigned short)65516)), (13020523548606180462ULL)));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_14 = 0; i_14 < 25; i_14 += 4) 
        {
            for (unsigned long long int i_15 = 0; i_15 < 25; i_15 += 3) 
            {
                for (short i_16 = 0; i_16 < 25; i_16 += 3) 
                {
                    {
                        var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) arr_49 [i_6] [i_6] [i_14] [i_14] [i_16]))));
                        var_42 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_14] [i_16])) ? (((/* implicit */int) arr_22 [i_14])) : (((/* implicit */int) arr_30 [i_6] [i_6] [i_14] [i_15] [i_15] [i_16]))))) ? (((/* implicit */long long int) max((arr_24 [i_6] [i_14] [i_16]), (((/* implicit */unsigned int) arr_30 [i_6] [i_14] [i_15] [i_15] [i_15] [i_16]))))) : (((((/* implicit */_Bool) arr_49 [i_16] [i_14] [i_15] [i_14] [i_6])) ? (arr_50 [i_6] [i_14] [i_15] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_6] [i_14] [i_15] [i_15] [i_15] [i_16] [i_14])))))))) ? (((((/* implicit */_Bool) max((arr_36 [i_14] [i_14] [i_14] [i_15]), (((/* implicit */unsigned long long int) arr_46 [i_16] [i_15] [i_14] [i_6]))))) ? (((((/* implicit */_Bool) arr_46 [i_16] [i_15] [i_14] [i_6])) ? (arr_45 [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_15] [i_6]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_6] [i_6] [i_14] [i_14] [i_16]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_16] [i_14] [i_14] [i_14] [i_6])) ? (((/* implicit */int) arr_44 [i_14])) : (arr_46 [i_6] [i_14] [i_15] [i_16])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_6] [i_14] [i_14] [i_14] [i_16]))) : (max((((/* implicit */unsigned long long int) arr_44 [i_14])), (arr_20 [i_14])))))));
                        var_43 = min((arr_19 [i_16] [i_6]), (((/* implicit */unsigned long long int) min(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (arr_24 [i_16] [i_15] [i_14]))), (min((arr_24 [i_6] [i_14] [i_16]), (((/* implicit */unsigned int) arr_46 [i_16] [i_15] [i_14] [i_6]))))))));
                        arr_51 [i_16] [i_6] [i_15] [i_6] [i_6] = ((/* implicit */unsigned int) arr_41 [i_6] [i_14] [i_14] [i_15] [i_15] [i_16]);
                        arr_52 [i_16] [i_6] [i_16] [i_14] = ((/* implicit */_Bool) max((min((((((/* implicit */_Bool) 2251799746576384LL)) ? (13020523548606180462ULL) : (5426220525103371148ULL))), (((((/* implicit */_Bool) arr_48 [i_6] [i_6] [i_14] [i_15] [i_15] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_16] [i_14]))) : (arr_20 [i_6]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_16] [i_16] [i_15] [i_14] [i_6])) ? (((/* implicit */int) arr_32 [i_6])) : (((/* implicit */int) arr_41 [i_6] [i_6] [i_14] [i_15] [i_15] [i_16]))))) ? (((/* implicit */int) arr_40 [i_6] [i_14] [i_15] [i_16] [i_16])) : (((((/* implicit */_Bool) arr_40 [i_16] [i_16] [i_15] [i_14] [i_6])) ? (arr_48 [i_6] [i_6] [i_14] [i_15] [i_15] [i_16]) : (((/* implicit */int) arr_32 [i_6])))))))));
                    }
                } 
            } 
        } 
    }
    var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (min((min((((/* implicit */unsigned long long int) var_5)), (var_14))), (((/* implicit */unsigned long long int) min((var_17), (var_17)))))) : (((/* implicit */unsigned long long int) min((min((var_7), (((/* implicit */unsigned int) var_16)))), (max((((/* implicit */unsigned int) var_15)), (var_17))))))));
    var_45 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_13)))) ? (min((((/* implicit */unsigned long long int) (signed char)3)), (var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
    var_46 = ((/* implicit */int) var_4);
    var_47 = ((/* implicit */signed char) var_17);
}

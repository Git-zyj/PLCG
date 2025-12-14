/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242713
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_0])) : (var_14)))));
        var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [15U]))));
        var_21 &= ((/* implicit */unsigned long long int) var_9);
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) min(((~(((/* implicit */int) arr_1 [i_3])))), (var_17)))) < (((long long int) ((unsigned int) var_12)))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
                            arr_13 [i_3] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_14))));
                        }
                    }
                } 
            } 
            arr_14 [i_0] = ((/* implicit */unsigned int) arr_4 [i_0]);
            var_23 = ((/* implicit */unsigned long long int) (((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_0] [i_0]))) : (arr_5 [i_0] [i_0] [i_1] [i_0]))))) > (((/* implicit */unsigned long long int) max((((unsigned int) (unsigned char)190)), (((unsigned int) var_10)))))));
        }
        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) var_2))));
    }
    for (unsigned int i_5 = 2; i_5 < 9; i_5 += 3) /* same iter space */
    {
        arr_18 [1] [i_5] = ((/* implicit */unsigned int) arr_15 [i_5]);
        var_25 = ((/* implicit */int) ((long long int) ((long long int) (-(182349830)))));
        arr_19 [i_5] [i_5 + 1] = (~(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_17 [i_5] [7]))))))));
        var_26 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) arr_2 [i_5 + 3] [i_5 - 1])))));
        /* LoopSeq 4 */
        for (long long int i_6 = 1; i_6 < 9; i_6 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_7 = 3; i_7 < 11; i_7 += 1) 
            {
                arr_24 [i_6] [i_5] = ((/* implicit */long long int) arr_20 [i_6] [i_5 - 2]);
                arr_25 [i_5] [i_5] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) max((-1), (((/* implicit */int) arr_7 [i_5] [i_5] [i_6] [i_7]))))) ? (((unsigned long long int) var_14)) : (((((/* implicit */_Bool) var_5)) ? (13438243838370763044ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5 + 3] [i_5 - 1] [i_6 - 1] [5] [4LL] [i_7 - 1]))))))));
            }
            arr_26 [i_5] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) 6060197387785293301LL)) ? (((2500980019159588173ULL) + (((/* implicit */unsigned long long int) -821506746)))) : (((/* implicit */unsigned long long int) ((int) arr_20 [i_6 + 1] [3])))));
        }
        for (signed char i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
        {
            arr_30 [i_5] [i_5] [i_5] = ((unsigned int) ((((/* implicit */_Bool) arr_12 [i_5 + 3] [i_5 - 1] [i_5] [i_5 - 2] [i_5] [i_5 + 3])) ? (((/* implicit */int) arr_12 [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5])) : (((/* implicit */int) arr_12 [i_5 + 2] [i_5 + 2] [i_5] [i_5] [i_5 + 3] [i_5 - 1]))));
            var_27 = ((/* implicit */int) arr_17 [i_5] [i_5 + 2]);
            arr_31 [i_5] [9U] [i_8] = ((/* implicit */unsigned long long int) var_4);
            var_28 ^= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_6 [i_8] [i_8])) ? (var_12) : (var_2))), (((/* implicit */long long int) arr_6 [i_8] [i_8]))));
        }
        /* vectorizable */
        for (signed char i_9 = 0; i_9 < 12; i_9 += 4) /* same iter space */
        {
            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_5] [i_5 - 2] [i_5] [i_5 + 2])) < (((/* implicit */int) arr_7 [i_5 - 1] [i_5] [i_5 - 2] [i_5 - 2])))))));
            /* LoopNest 3 */
            for (short i_10 = 0; i_10 < 12; i_10 += 1) 
            {
                for (long long int i_11 = 0; i_11 < 12; i_11 += 1) 
                {
                    for (int i_12 = 0; i_12 < 12; i_12 += 2) 
                    {
                        {
                            arr_44 [i_5 - 1] [i_5 + 3] [i_5] = ((/* implicit */unsigned long long int) var_0);
                            arr_45 [i_5] = ((arr_20 [i_5 + 3] [i_5 + 3]) & (var_15));
                            var_30 = ((/* implicit */long long int) ((arr_7 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_12]) ? (((/* implicit */int) arr_7 [i_5 - 1] [i_5 - 1] [i_10] [i_5 - 1])) : (((/* implicit */int) arr_7 [i_9] [i_10] [i_11] [4U]))));
                            arr_46 [i_5] [11] [i_5] [i_11] [i_12] [8ULL] = ((/* implicit */unsigned short) arr_22 [i_11] [i_10] [i_5 + 3] [i_5 + 3]);
                            var_31 = ((/* implicit */long long int) var_17);
                        }
                    } 
                } 
            } 
            arr_47 [i_5] = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [i_5] [i_5 + 3] [i_5 + 1])) | (arr_39 [i_5 - 2] [(signed char)8] [i_5 + 3] [i_5 + 2] [i_5] [i_5 - 1])));
        }
        for (long long int i_13 = 0; i_13 < 12; i_13 += 1) 
        {
            arr_52 [i_5] [i_5] [i_5] = ((/* implicit */signed char) max((arr_51 [i_5 + 1]), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 - 1])))))));
            var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) arr_48 [i_13] [i_13]))));
            /* LoopSeq 1 */
            for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 3) 
            {
                arr_57 [i_5] [i_5] = ((/* implicit */short) ((long long int) -7117854204196844059LL));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 12; i_15 += 3) 
                {
                    for (long long int i_16 = 1; i_16 < 8; i_16 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_28 [i_5]))))));
                            arr_65 [i_5] [i_13] [i_13] [i_13] [i_14] [i_5] [i_16] = ((/* implicit */unsigned long long int) ((short) arr_43 [i_16 - 1] [i_15] [i_5] [i_5] [i_5] [i_5] [i_5 + 1]));
                            var_34 = ((((/* implicit */long long int) ((unsigned int) (short)-30492))) - ((~(-8633696638178990994LL))));
                        }
                    } 
                } 
                arr_66 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) ((unsigned int) ((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_13] [i_13] [i_14] [i_13]))))));
            }
        }
    }
    for (unsigned int i_17 = 2; i_17 < 9; i_17 += 3) /* same iter space */
    {
        arr_70 [i_17] = ((/* implicit */unsigned char) ((var_6) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))));
        /* LoopSeq 2 */
        for (unsigned int i_18 = 0; i_18 < 12; i_18 += 1) /* same iter space */
        {
            arr_74 [i_17 - 1] = ((/* implicit */unsigned int) max((arr_40 [6]), (min((min((((/* implicit */int) var_5)), (var_17))), ((+(((/* implicit */int) arr_27 [i_17] [i_17 - 2] [i_18]))))))));
            var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) (((!(((/* implicit */_Bool) (-(arr_69 [8U] [i_18])))))) ? (((/* implicit */unsigned long long int) ((arr_68 [i_17 + 3] [i_18]) ^ (arr_32 [i_17 - 1] [8U])))) : (min((((/* implicit */unsigned long long int) var_15)), (arr_53 [2ULL] [i_18] [2ULL]))))))));
        }
        for (unsigned int i_19 = 0; i_19 < 12; i_19 += 1) /* same iter space */
        {
            arr_78 [i_17 - 1] [i_17 - 2] [i_19] = ((/* implicit */int) var_6);
            arr_79 [i_19] = var_9;
        }
        arr_80 [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_17] [i_17] [i_17] [i_17 + 3] [i_17 - 1] [i_17 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_17 + 1] [i_17 - 1] [4LL] [i_17 + 1] [i_17 - 1] [i_17 + 2])) && (((/* implicit */_Bool) var_15)))))) : ((~(6932107817101053814LL)))));
    }
    var_36 = min((min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) 0U)) == (5255073774015436995ULL)))), (max((var_4), (6060197387785293301LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_16))))));
}

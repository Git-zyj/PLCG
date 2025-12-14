/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249070
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
    for (short i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        arr_4 [i_0 + 2] [i_0 + 2] &= arr_2 [i_0] [i_0];
        arr_5 [i_0] [i_0] = ((/* implicit */short) arr_1 [i_0 + 3] [i_0]);
    }
    for (int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        arr_9 [i_1] [i_1] = ((/* implicit */long long int) (unsigned short)57445);
        /* LoopSeq 3 */
        for (short i_2 = 0; i_2 < 14; i_2 += 3) /* same iter space */
        {
            arr_14 [i_1] = ((/* implicit */int) arr_11 [i_1] [i_1] [i_1]);
            arr_15 [i_1] [i_2] = ((/* implicit */unsigned short) var_3);
            arr_16 [i_1] [i_1] [i_1] = ((/* implicit */signed char) arr_3 [i_1] [i_2]);
            arr_17 [i_1] [i_1] = ((/* implicit */_Bool) min((arr_1 [i_2] [i_2]), (((/* implicit */long long int) (short)16))));
        }
        /* vectorizable */
        for (short i_3 = 0; i_3 < 14; i_3 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                arr_23 [i_1] [i_1] [i_1] [(short)12] |= ((/* implicit */short) (!(((/* implicit */_Bool) var_12))));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 2; i_5 < 13; i_5 += 2) 
                {
                    for (int i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        {
                            arr_29 [i_6] = ((/* implicit */unsigned char) var_11);
                            arr_30 [6] [i_1] [i_1] [i_1] [i_4] [i_5 + 1] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_28 [i_1] [i_4] [i_5 + 1]))));
                        }
                    } 
                } 
                arr_31 [i_1] [(unsigned short)3] [(unsigned short)3] = arr_21 [i_1] [i_4];
                arr_32 [i_1] [i_1] [i_1] = ((/* implicit */short) 914796988U);
            }
            for (short i_7 = 0; i_7 < 14; i_7 += 4) 
            {
                arr_36 [i_1] = ((/* implicit */unsigned char) 5330630911213508512ULL);
                arr_37 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned char) arr_28 [i_1] [i_1] [i_1]));
            }
            for (unsigned int i_8 = 0; i_8 < 14; i_8 += 1) 
            {
                arr_40 [(short)2] [(short)2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_21 [6ULL] [i_3])) <= (((/* implicit */int) var_18))));
                arr_41 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (arr_3 [i_1] [i_3]) : (arr_3 [i_1] [i_8])));
            }
            /* LoopSeq 1 */
            for (unsigned short i_9 = 2; i_9 < 13; i_9 += 4) 
            {
                arr_46 [i_3] [i_9] = ((/* implicit */unsigned short) 82893813U);
                arr_47 [i_1] [i_3] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 254115667U)) ? (arr_2 [(short)3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35752)))));
            }
            arr_48 [6ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1888))) : (arr_25 [i_1] [i_1] [i_1] [i_3] [i_3])));
        }
        for (short i_10 = 0; i_10 < 14; i_10 += 3) /* same iter space */
        {
            arr_53 [i_1] = ((/* implicit */unsigned long long int) (unsigned short)36365);
            arr_54 [i_1] = ((/* implicit */unsigned short) arr_44 [i_1] [i_1] [i_1] [i_10]);
            arr_55 [(short)2] [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_28 [i_1] [i_10] [i_10]))))), (max((((/* implicit */unsigned long long int) (unsigned short)58629)), (14627447413271239574ULL)))))) ? (((((/* implicit */_Bool) arr_43 [i_1] [(short)6] [i_10])) ? (((/* implicit */int) var_11)) : (var_15))) : (((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))))), (var_13))))));
        }
    }
    for (unsigned short i_11 = 0; i_11 < 17; i_11 += 3) 
    {
        arr_60 [i_11] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_58 [i_11])) ? (((/* implicit */int) arr_58 [i_11])) : (((/* implicit */int) arr_58 [i_11])))));
        arr_61 [i_11] = ((/* implicit */unsigned long long int) ((unsigned int) (~(arr_3 [i_11] [i_11]))));
        arr_62 [i_11] = ((/* implicit */long long int) min((var_9), (((/* implicit */unsigned short) (short)-25708))));
        arr_63 [i_11] = ((/* implicit */_Bool) 11870097006284650015ULL);
        /* LoopNest 3 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (unsigned short i_13 = 0; i_13 < 17; i_13 += 1) 
            {
                for (unsigned short i_14 = 0; i_14 < 17; i_14 += 1) 
                {
                    {
                        arr_71 [i_11] [i_12] = ((/* implicit */short) arr_64 [i_14]);
                        arr_72 [i_12] [i_11] [i_11] [i_11] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_69 [i_11] [i_11]))))), (((((/* implicit */_Bool) arr_69 [i_11] [i_11])) ? (((/* implicit */unsigned long long int) arr_57 [i_11] [i_11])) : (arr_69 [i_12] [i_11])))));
                        arr_73 [i_11] [i_12] [i_13] [i_11] [i_13] = ((/* implicit */_Bool) arr_64 [i_11]);
                    }
                } 
            } 
        } 
    }
    var_19 &= var_15;
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_15 = 0; i_15 < 10; i_15 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 4) 
        {
            for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 1) 
            {
                {
                    arr_83 [i_15] [i_17] [i_17] [i_15] = ((/* implicit */int) (unsigned short)32256);
                    arr_84 [i_15] [i_16] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_56 [i_15])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_56 [i_16]))));
                }
            } 
        } 
        arr_85 [i_15] = ((/* implicit */int) ((long long int) 16818989415956957777ULL));
    }
    for (long long int i_18 = 0; i_18 < 10; i_18 += 2) /* same iter space */
    {
        arr_90 [(unsigned short)6] = ((/* implicit */unsigned long long int) (short)9448);
        arr_91 [i_18] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_88 [i_18])) ? (arr_25 [i_18] [i_18] [i_18] [i_18] [i_18]) : (8952566656078620784ULL)))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_18] [i_18] [i_18] [i_18]))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (max((arr_2 [i_18] [i_18]), (var_1))) : (arr_44 [i_18] [i_18] [i_18] [i_18]))))));
    }
    var_20 = ((/* implicit */short) var_16);
    var_21 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (max((((/* implicit */unsigned long long int) var_9)), (min((var_17), (((/* implicit */unsigned long long int) (_Bool)0))))))));
}

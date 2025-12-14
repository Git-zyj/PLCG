/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40077
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
    var_12 = ((/* implicit */signed char) var_5);
    var_13 = ((/* implicit */unsigned long long int) var_6);
    var_14 = ((/* implicit */short) var_8);
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned short) arr_0 [(unsigned short)12] [(unsigned char)13]);
                arr_8 [i_1] [i_1] [i_1] = min((((/* implicit */unsigned short) var_3)), (var_6));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18; i_2 += 4) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_1] [i_1] [(signed char)11] = ((/* implicit */unsigned char) ((int) (~(arr_12 [i_0 + 2]))));
                            arr_15 [i_0] = ((/* implicit */unsigned long long int) (+((+((-(((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_4 = 1; i_4 < 24; i_4 += 2) 
    {
        arr_18 [i_4] = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_9)))) ^ ((~(((/* implicit */int) (unsigned short)5938))))));
        /* LoopSeq 2 */
        for (unsigned short i_5 = 2; i_5 < 24; i_5 += 1) 
        {
            arr_21 [(unsigned short)20] [i_5 - 1] = ((/* implicit */unsigned long long int) arr_19 [14] [i_5] [i_5 - 1]);
            arr_22 [i_4] [i_4] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) var_1)))));
            arr_23 [i_4] [6ULL] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) (short)21813))) | (((/* implicit */int) var_6))));
        }
        for (unsigned short i_6 = 3; i_6 < 22; i_6 += 1) 
        {
            arr_27 [i_6] [i_4] = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_19 [i_4] [(unsigned short)6] [i_6]))))));
            /* LoopSeq 4 */
            for (int i_7 = 1; i_7 < 23; i_7 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 1; i_8 < 23; i_8 += 4) 
                {
                    for (unsigned long long int i_9 = 1; i_9 < 24; i_9 += 4) 
                    {
                        {
                            arr_34 [6] [(unsigned char)10] [i_8] = ((/* implicit */int) ((min((arr_33 [i_8 + 2] [i_8 + 2] [(unsigned short)0] [i_8 + 2] [i_8 + 2]), (arr_33 [i_8 + 2] [i_8 + 2] [(unsigned char)16] [(unsigned short)6] [i_8 - 1]))) & (((/* implicit */unsigned long long int) ((long long int) var_8)))));
                            arr_35 [i_4] [i_6] [i_7] [i_8] [i_4] [i_9] [i_9 - 1] = ((/* implicit */unsigned long long int) (short)-21814);
                            arr_36 [(unsigned short)24] [(unsigned short)24] = ((/* implicit */long long int) ((unsigned short) var_5));
                            arr_37 [i_4] [i_6] [19ULL] [i_4] [i_9] = ((/* implicit */int) var_10);
                            arr_38 [i_4 + 1] [i_4] [i_6] [i_7] [i_6] [i_9] = ((/* implicit */long long int) arr_30 [i_4] [i_6 + 3]);
                        }
                    } 
                } 
                arr_39 [i_4 + 1] [i_6] [(_Bool)1] [i_7] &= ((/* implicit */unsigned char) min((((unsigned short) arr_25 [i_6] [i_4 + 1] [i_4 - 1])), (((/* implicit */unsigned short) min((arr_25 [i_4 - 1] [i_4 + 1] [i_4]), (arr_25 [i_6] [i_4 + 1] [i_4]))))));
                arr_40 [i_4] [i_4] = (-((~(var_5))));
            }
            /* vectorizable */
            for (unsigned long long int i_10 = 3; i_10 < 24; i_10 += 4) 
            {
                arr_43 [2] [(short)12] [i_6] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) 7080118650873856197LL))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))) : (((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_11))))));
                arr_44 [i_4] = ((/* implicit */unsigned char) var_7);
                arr_45 [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) var_5)))));
                arr_46 [(unsigned char)10] [(signed char)20] [i_6] [i_10] |= (~(var_5));
            }
            for (signed char i_11 = 4; i_11 < 23; i_11 += 4) 
            {
                arr_49 [i_4] = var_4;
                arr_50 [i_4] = ((unsigned long long int) ((_Bool) arr_47 [i_4] [i_4]));
                /* LoopNest 2 */
                for (signed char i_12 = 2; i_12 < 23; i_12 += 2) 
                {
                    for (unsigned short i_13 = 1; i_13 < 24; i_13 += 4) 
                    {
                        {
                            arr_56 [i_6] [i_6] [i_11 - 4] [i_11] = var_3;
                            arr_57 [i_12] [i_6] [i_11] [i_12] [i_13] [(unsigned char)10] [i_6 - 3] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) (unsigned char)242)) && (((/* implicit */_Bool) arr_33 [i_13 + 1] [i_12] [i_11] [i_6] [i_4])))));
                            arr_58 [i_4] [i_4] [i_11] [i_4] [i_13 + 1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_5)), (((unsigned long long int) ((_Bool) 17835077118219560459ULL)))));
                            arr_59 [i_4] [i_6] [i_11 + 2] [i_12 + 2] [i_13] = ((/* implicit */_Bool) ((unsigned short) (unsigned short)5319));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_14 = 1; i_14 < 22; i_14 += 4) 
            {
                arr_62 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) arr_61 [i_6] [i_4]);
                arr_63 [(signed char)2] &= ((/* implicit */short) (((~(((/* implicit */int) arr_60 [i_14 + 2] [i_14 + 1] [(signed char)2])))) ^ (((/* implicit */int) ((signed char) arr_60 [i_14 + 3] [i_14 - 1] [(short)18])))));
                arr_64 [i_4] [i_4] [i_4 - 1] = arr_52 [i_14];
                arr_65 [i_4] [i_6] [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_0))));
                /* LoopSeq 1 */
                for (signed char i_15 = 2; i_15 < 24; i_15 += 2) 
                {
                    arr_68 [i_4 - 1] [i_6] [i_6] [i_4] [6] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)9))));
                    arr_69 [i_4] [i_4] [i_6] [i_4] [i_6] = ((/* implicit */short) ((unsigned char) min((((/* implicit */unsigned short) arr_25 [i_4] [i_4 - 1] [i_4])), (var_6))));
                    arr_70 [i_4] [i_15] [i_6] [i_14] [i_15] [i_15 + 1] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_47 [i_14 + 1] [i_15])) ? (((/* implicit */int) arr_41 [i_6] [i_6] [i_6] [i_6 + 2])) : (((/* implicit */int) var_3)))));
                }
            }
            arr_71 [i_4] = ((/* implicit */signed char) ((unsigned char) min((((/* implicit */unsigned char) (signed char)48)), ((unsigned char)72))));
            arr_72 [(signed char)14] = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */short) ((unsigned char) (-(((/* implicit */int) var_0))))))));
        }
        arr_73 [i_4] = ((/* implicit */int) arr_51 [i_4] [i_4] [i_4 + 1] [i_4 + 1] [i_4] [i_4]);
    }
    for (unsigned char i_16 = 2; i_16 < 19; i_16 += 1) 
    {
        arr_78 [i_16] = ((/* implicit */unsigned long long int) ((signed char) (-(((/* implicit */int) ((signed char) (unsigned char)72))))));
        arr_79 [i_16] [i_16] = ((/* implicit */int) var_2);
    }
    for (signed char i_17 = 2; i_17 < 13; i_17 += 2) 
    {
        arr_83 [i_17] = ((/* implicit */unsigned short) ((short) (-(((/* implicit */int) arr_2 [i_17 + 1] [3])))));
        /* LoopSeq 1 */
        for (unsigned short i_18 = 2; i_18 < 12; i_18 += 2) 
        {
            arr_87 [i_17] [i_17] = ((/* implicit */unsigned short) arr_66 [i_17] [i_17] [i_17] [i_17]);
            arr_88 [i_17] [i_18] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_17 - 1] [i_17]))));
            arr_89 [i_17 + 1] = ((unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_18 + 2] [i_18] [i_18 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_5)))))) : (-2962432632869633161LL)));
        }
    }
}

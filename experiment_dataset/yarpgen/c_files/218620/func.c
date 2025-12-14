/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218620
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
    var_15 = ((/* implicit */unsigned short) var_12);
    var_16 = var_1;
    var_17 += (-(((/* implicit */int) (((+(var_12))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 14378395592443452828ULL)) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 13; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 1) 
                {
                    {
                        arr_8 [i_1 + 1] [i_1] [i_1 + 3] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_2 + 2])) ? (arr_0 [i_2 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))));
                        var_19 = ((/* implicit */unsigned short) (~(4294967295U)));
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (((+(14378395592443452840ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [0]))))))));
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            arr_16 [i_0] [i_5] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_6] [i_6] [i_1 - 2])) | (((/* implicit */int) arr_4 [i_1 + 2] [i_1] [i_1] [i_1 - 1]))));
                            var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) var_10))));
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((var_12) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [i_6])) : (var_8)))))))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) arr_5 [i_1] [i_5]);
                            var_24 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_2 [i_1]))));
                        }
                        var_25 -= ((/* implicit */unsigned short) ((14378395592443452840ULL) | (14378395592443452845ULL)));
                        var_26 = ((/* implicit */unsigned int) (signed char)127);
                        var_27 = ((/* implicit */unsigned short) ((signed char) var_0));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 15; i_8 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 15; i_9 += 3) 
        {
            for (unsigned long long int i_10 = 1; i_10 < 13; i_10 += 1) 
            {
                {
                    var_28 = ((/* implicit */unsigned short) (-((+(8982772458172124643ULL)))));
                    var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) (!(arr_14 [2] [i_9] [i_10 + 1] [i_10] [10U] [2] [i_10]))))));
                    arr_28 [i_8] [i_9] [i_10 + 2] [i_8] = ((((/* implicit */_Bool) 18446744073709551614ULL)) ? (4068348481266098801ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_8] [i_9] [i_9] [i_10 + 1]))));
                    var_30 -= ((/* implicit */unsigned char) ((arr_12 [i_8] [(_Bool)1] [i_8]) << ((((~(4068348481266098787ULL))) - (14378395592443452823ULL)))));
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_25 [i_8] [i_8] [i_8])))))));
        var_32 = ((/* implicit */signed char) (+(((/* implicit */int) arr_2 [i_8]))));
    }
    for (int i_11 = 0; i_11 < 15; i_11 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (signed char i_12 = 0; i_12 < 15; i_12 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (unsigned char i_14 = 0; i_14 < 15; i_14 += 1) 
                {
                    {
                        arr_38 [i_14] = ((/* implicit */signed char) ((max((min((((/* implicit */unsigned long long int) arr_17 [11U] [i_11] [(unsigned char)0] [i_13] [i_13] [i_14] [i_14])), (4068348481266098787ULL))), (max((((/* implicit */unsigned long long int) arr_30 [4] [4])), (7ULL))))) | (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) var_5)))))))));
                        var_33 -= ((/* implicit */unsigned long long int) arr_35 [i_14] [i_12] [i_12]);
                    }
                } 
            } 
            arr_39 [i_12] [i_11] = arr_12 [i_11] [i_12] [i_12];
            var_34 -= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~(((((/* implicit */int) arr_20 [i_12])) * (((/* implicit */int) var_4))))))), (((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_12]))) : (3205258107U)))));
        }
        /* vectorizable */
        for (short i_15 = 0; i_15 < 15; i_15 += 3) 
        {
            arr_43 [i_11] [(unsigned short)12] [i_15] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) 13548124777239022796ULL)) && (((/* implicit */_Bool) 4898619296470528827ULL)))))));
            /* LoopNest 3 */
            for (short i_16 = 0; i_16 < 15; i_16 += 1) 
            {
                for (unsigned char i_17 = 0; i_17 < 15; i_17 += 3) 
                {
                    for (unsigned long long int i_18 = 1; i_18 < 12; i_18 += 3) 
                    {
                        {
                            arr_52 [i_11] [i_11] [i_15] [i_15] = ((/* implicit */unsigned char) (((-(var_0))) * (((/* implicit */unsigned long long int) arr_46 [i_15] [i_15] [i_18 - 1] [i_17]))));
                            arr_53 [i_15] [i_15] [i_16] [i_17] [i_17] = ((/* implicit */unsigned long long int) ((int) var_11));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_19 = 0; i_19 < 15; i_19 += 3) 
        {
            var_35 -= ((/* implicit */signed char) min(((+(((/* implicit */int) arr_2 [(unsigned short)6])))), (((((/* implicit */int) arr_2 [(short)14])) + (((/* implicit */int) arr_2 [(short)0]))))));
            var_36 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(14378395592443452837ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_1), (arr_4 [i_19] [i_19] [i_11] [i_11]))))) : (4898619296470528819ULL)));
        }
        for (unsigned char i_20 = 0; i_20 < 15; i_20 += 3) 
        {
            var_37 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_26 [i_20] [(unsigned char)4] [i_20] [i_20])))) & (((/* implicit */int) ((arr_5 [(signed char)4] [(signed char)4]) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_11] [i_20])) || (arr_20 [(unsigned short)4])))))))));
            var_38 = ((/* implicit */signed char) min((-4096), (128)));
            var_39 = ((/* implicit */short) (~(((/* implicit */int) var_1))));
        }
        var_40 = ((/* implicit */int) max((var_40), ((~((~(((/* implicit */int) arr_55 [i_11]))))))));
    }
    var_41 = ((/* implicit */unsigned int) (~(var_2)));
}

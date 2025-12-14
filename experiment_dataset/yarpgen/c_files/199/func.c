/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199
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
    var_11 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) -1967578253)) ? (235914247286544042ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7)))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)74)) >= (var_5)))) : (((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_3))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            arr_4 [i_0] = ((/* implicit */signed char) ((arr_0 [i_0]) * (arr_0 [i_0])));
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (-(arr_7 [i_1 + 1] [i_1 - 3] [i_1] [i_1 - 3])));
                arr_9 [i_0] [i_1 - 3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(unsigned short)20])) ? (-2992173465204541970LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (1030171621) : ((~(((/* implicit */int) (unsigned char)175)))));
                arr_10 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_8)) == (arr_3 [i_1 - 3] [i_1 - 2] [i_0])));
            }
        }
        for (short i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            var_12 = ((/* implicit */long long int) (+(var_0)));
            var_13 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)18768)) ? (((/* implicit */int) (signed char)74)) : (-1030171622))) > (var_2)));
        }
        for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned short i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    arr_24 [i_6] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)7)) ? (arr_19 [5U] [i_4] [5U] [i_6]) : (1405453548U))))));
                    var_14 = ((/* implicit */int) max((var_14), ((+(((/* implicit */int) arr_18 [i_0] [i_4] [i_5] [i_6]))))));
                }
                for (unsigned long long int i_7 = 1; i_7 < 20; i_7 += 3) 
                {
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) 6798149588514452508LL))))))));
                    /* LoopSeq 4 */
                    for (signed char i_8 = 2; i_8 < 18; i_8 += 3) 
                    {
                        var_16 = ((/* implicit */short) (unsigned char)67);
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */long long int) -1030171621)) >= ((-(var_8)))));
                        arr_32 [i_0] [i_0] [i_4] [i_5] [12ULL] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_25 [i_8] [i_7] [i_7 + 1] [(_Bool)1]))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        arr_36 [i_0] [i_0] [i_4] [i_0] [i_5] [(_Bool)1] [i_9] = ((/* implicit */signed char) ((arr_22 [i_9] [i_7 - 1] [i_4] [i_0]) + (((unsigned long long int) (unsigned char)46))));
                        arr_37 [i_0] [i_0] [i_4] [(unsigned char)0] [i_7] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned char) (unsigned char)135));
                    }
                    for (short i_10 = 0; i_10 < 21; i_10 += 2) /* same iter space */
                    {
                        arr_40 [i_0] [i_4] [i_5] [i_0] [i_5] [i_7 - 1] [(signed char)17] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_17 [i_0] [i_4]))));
                        arr_41 [i_0] = ((/* implicit */_Bool) arr_12 [i_7] [i_7 + 1]);
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_7 - 1] [i_7 - 1] [i_10])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_0] [(unsigned char)5] [(unsigned char)5]))))) : (arr_3 [i_0] [i_4] [i_5]))))));
                        arr_42 [i_0] [i_4] [i_4] [i_0] [i_7 + 1] [i_10] = ((/* implicit */unsigned char) ((arr_33 [i_4] [i_4] [i_0] [(unsigned char)11] [i_7 - 1] [i_4] [4]) + (((/* implicit */long long int) 1183448156U))));
                    }
                    for (short i_11 = 0; i_11 < 21; i_11 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))))));
                        var_20 = ((/* implicit */_Bool) var_7);
                    }
                }
                var_21 += ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_4] [i_4])) || (((/* implicit */_Bool) (unsigned char)248))))) << (((arr_33 [i_0] [i_5] [i_4] [i_0] [i_0] [i_5] [i_0]) + (4301580281666913236LL)))));
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_0] [i_4] [i_5] [i_4] [i_4])) ? (((/* implicit */int) (_Bool)0)) : (1030171621)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_5]))) : (((long long int) var_8)))))));
                arr_45 [i_0] [(short)6] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) var_7))));
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) arr_35 [i_0] [i_12] [i_5] [i_0] [i_0]);
                            var_24 = (unsigned short)41895;
                        }
                    } 
                } 
            }
            for (unsigned short i_14 = 0; i_14 < 21; i_14 += 4) /* same iter space */
            {
                arr_54 [i_0] [i_4] [i_0] [(short)2] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_0] [i_0] [i_14] [i_0]))) : (6798149588514452508LL)));
                var_25 = ((/* implicit */short) ((signed char) (unsigned short)49038));
                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_5)))) ? (((((/* implicit */_Bool) (signed char)-22)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_0] [(unsigned char)11] [i_14] [i_14] [i_14]))) : (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248))) != (var_4)))))));
            }
            /* LoopNest 3 */
            for (unsigned int i_15 = 4; i_15 < 18; i_15 += 1) 
            {
                for (unsigned char i_16 = 1; i_16 < 20; i_16 += 1) 
                {
                    for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */int) (signed char)-91);
                            arr_64 [i_0] [i_0] [i_4] [i_15] [i_16] [i_17] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)31))));
                            var_28 ^= ((/* implicit */unsigned short) ((((9007199254216704ULL) == (((/* implicit */unsigned long long int) var_4)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)56751)) != (((/* implicit */int) arr_13 [i_0] [i_15 + 2] [i_4]))))) : (((((/* implicit */_Bool) 10770274128119538902ULL)) ? (var_2) : (-1555896551)))));
                            var_29 = (+(((/* implicit */int) arr_43 [i_16 - 1] [i_15 - 2] [i_15])));
                        }
                    } 
                } 
            } 
            var_30 = 2889513747U;
        }
        var_31 = ((/* implicit */signed char) var_7);
        var_32 = ((/* implicit */unsigned int) min((var_32), (((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [(unsigned char)8] [i_0] [i_0]))) ^ (2889513747U)))));
    }
}

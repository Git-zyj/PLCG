/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35126
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
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_10)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_21 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 1186453322)) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        /* LoopSeq 3 */
        for (short i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        {
                            arr_12 [i_2] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_0))))));
                            var_22 += ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 660683154U)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)-106)))), (((/* implicit */int) (signed char)-13))));
                        }
                    } 
                } 
            } 
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)18))))) : (var_8))));
        }
        for (unsigned short i_5 = 1; i_5 < 20; i_5 += 3) 
        {
            arr_17 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_16 [i_0] [i_0] [i_5])), (min((((/* implicit */int) var_18)), (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))))));
            arr_18 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0] [i_5] [i_5] [i_5] [i_5])) ? ((+(((/* implicit */int) (unsigned char)216)))) : (((/* implicit */int) arr_9 [i_5] [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5 + 1]))));
        }
        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            var_23 = arr_1 [i_6] [i_0];
            arr_21 [i_0] [(short)6] = ((/* implicit */short) ((unsigned long long int) arr_16 [i_6] [i_6] [i_0]));
            /* LoopNest 2 */
            for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                for (short i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_9 = 0; i_9 < 21; i_9 += 4) 
                        {
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_0] [i_6]))))) ? (((/* implicit */int) max((arr_14 [i_0] [i_0]), (arr_14 [i_0] [i_6])))) : (((((/* implicit */_Bool) arr_14 [i_8] [i_7])) ? (arr_15 [i_7]) : (((/* implicit */int) arr_14 [i_7] [i_0]))))));
                            arr_32 [i_0] = var_7;
                        }
                        for (unsigned char i_10 = 0; i_10 < 21; i_10 += 2) 
                        {
                            arr_37 [i_0] [i_6] [i_6] [i_7] [i_8] [i_0] [i_6] = ((/* implicit */unsigned short) max(((_Bool)0), (arr_33 [i_10] [11U] [i_8] [i_7] [(_Bool)1] [i_0])));
                            var_25 -= ((/* implicit */unsigned int) var_14);
                            var_26 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((arr_20 [i_0] [i_7]) ? (((/* implicit */int) (unsigned short)50885)) : (((/* implicit */int) var_18))))), (arr_8 [i_0] [i_6] [i_7] [i_8])));
                            arr_38 [(signed char)1] [i_6] [i_7] [i_8] [i_10] [i_8] |= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((unsigned char) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (var_12)))), (((arr_10 [i_0] [i_8] [i_6] [i_0]) ? (((((/* implicit */_Bool) arr_0 [i_8])) ? (((/* implicit */unsigned long long int) -1186453323)) : (arr_31 [i_0]))) : (((/* implicit */unsigned long long int) var_16))))));
                        }
                        /* LoopSeq 1 */
                        for (short i_11 = 0; i_11 < 21; i_11 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_30 [i_0] [i_6] [(unsigned char)16] [i_8] [i_11]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (max((((/* implicit */unsigned int) (signed char)-113)), (3634284142U)))))));
                            var_28 ^= ((/* implicit */unsigned long long int) (-((((-(((/* implicit */int) var_13)))) - (((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                        }
                        var_29 = ((/* implicit */long long int) min(((~((+(((/* implicit */int) (short)7174)))))), (((/* implicit */int) (!(((/* implicit */_Bool) 3351326358U)))))));
                        arr_42 [i_0] = ((/* implicit */long long int) var_15);
                        var_30 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(max((((/* implicit */int) (unsigned short)38863)), (arr_28 [i_6] [i_6] [i_6] [i_6])))))) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) min((arr_27 [i_0]), (arr_27 [i_0]))))));
                    }
                } 
            } 
        }
        arr_43 [i_0] = ((/* implicit */int) (signed char)-115);
    }
    for (unsigned int i_12 = 0; i_12 < 11; i_12 += 3) 
    {
        arr_46 [i_12] [i_12] = ((/* implicit */signed char) min((((/* implicit */short) var_10)), ((short)32)));
        arr_47 [i_12] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_33 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])) : (arr_28 [i_12] [i_12] [i_12] [i_12])))) ? (((/* implicit */unsigned long long int) (-(660683156U)))) : (arr_31 [i_12]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_39 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)0))))) > (max((var_5), (((/* implicit */unsigned int) (unsigned char)0))))))))));
        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) (_Bool)1))));
    }
    for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 3) 
    {
        arr_50 [(short)5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1048575)) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (short)14336))));
        arr_51 [i_13] [i_13] = ((/* implicit */unsigned long long int) ((long long int) ((arr_10 [(unsigned char)18] [i_13] [i_13] [(unsigned char)18]) ? (((/* implicit */int) (short)-32761)) : (((/* implicit */int) (unsigned short)35442)))));
    }
}

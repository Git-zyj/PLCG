/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190526
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) var_9))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (~(((/* implicit */int) (_Bool)1)))))));
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 2] [i_1 + 1])) ? (arr_2 [i_1 + 2] [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                    /* LoopSeq 1 */
                    for (short i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 1; i_4 < 10; i_4 += 2) 
                        {
                            arr_15 [(_Bool)1] [i_1] [(unsigned char)12] [i_1] [i_4 - 1] = ((/* implicit */short) ((unsigned int) ((short) (_Bool)1)));
                            arr_16 [i_0] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((unsigned int) (short)18812));
                        }
                        arr_17 [i_3] [i_1] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_3 - 2] [8] [i_2] [i_3] [i_3] [i_2] [i_2])) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))) : (((/* implicit */int) var_6))));
                        var_17 = ((/* implicit */short) 1958410552);
                    }
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned int) ((long long int) arr_0 [i_0] [i_0]));
        /* LoopSeq 3 */
        for (short i_5 = 1; i_5 < 12; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_6 = 1; i_6 < 11; i_6 += 4) 
            {
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_19 |= ((/* implicit */unsigned int) ((1259095697221213103ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                        arr_25 [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) (_Bool)1)))));
                    }
                } 
            } 
            var_20 = ((arr_3 [i_5]) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)28316)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_7)))));
        }
        for (unsigned int i_8 = 1; i_8 < 12; i_8 += 4) 
        {
            var_21 ^= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (308946623U)))));
            var_22 += ((/* implicit */int) ((((14288206765714944381ULL) >> (((((/* implicit */int) var_2)) - (22769))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
            var_23 = ((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) (unsigned short)19554)) : (((/* implicit */int) var_8))));
        }
        for (short i_9 = 3; i_9 < 10; i_9 += 4) 
        {
            arr_32 [i_0] [i_0] [(_Bool)1] = ((/* implicit */short) (~(4158537307994607230ULL)));
            var_24 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)155))));
            arr_33 [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned long long int) var_10));
        }
    }
    for (unsigned char i_10 = 0; i_10 < 19; i_10 += 4) 
    {
        arr_38 [i_10] = ((/* implicit */unsigned int) ((signed char) (~(min((((/* implicit */unsigned int) var_1)), (arr_34 [i_10]))))));
        arr_39 [i_10] [(short)13] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)71)) | (((/* implicit */int) var_6))));
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        arr_43 [i_11] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((((/* implicit */int) arr_37 [i_11])), (arr_36 [i_11] [i_11])))), (((4294967295U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_11])))))));
        arr_44 [6U] = ((/* implicit */unsigned char) var_6);
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (short)-28921))));
    }
    var_26 = ((/* implicit */int) 2610432663U);
    var_27 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_4))))))));
}

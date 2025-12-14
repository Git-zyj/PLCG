/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36230
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
    var_18 = ((/* implicit */unsigned char) max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) ((unsigned short) (unsigned char)50))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_3))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) (unsigned short)65535)) : (arr_0 [i_0 - 1])));
        var_19 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) arr_2 [i_0])))));
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 3; i_2 < 23; i_2 += 2) 
        {
            var_20 = ((((/* implicit */_Bool) ((short) (unsigned char)206))) ? (arr_5 [8] [(unsigned short)9]) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)205)) / (((/* implicit */int) arr_7 [i_2] [i_2 - 3]))))));
            var_21 = ((/* implicit */signed char) ((((((arr_5 [i_2 - 1] [i_2 + 1]) + (9223372036854775807LL))) >> (((/* implicit */int) arr_8 [i_2])))) >> (((3131044568877742373ULL) - (3131044568877742348ULL)))));
            var_22 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) (unsigned char)214)), (7476256546677570847ULL))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)206)) ? (var_13) : (780453887446213132LL))))))), ((-(((((/* implicit */_Bool) (unsigned short)1396)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(_Bool)1]))) : (70368744177663ULL)))))));
        }
        arr_9 [7LL] = ((/* implicit */unsigned short) ((unsigned char) (+(((((-3367990708513117271LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned char)171)) - (137))))))));
    }
    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        arr_12 [i_3] = max((min((-1156027078), (((/* implicit */int) (unsigned short)64512)))), (((int) (_Bool)1)));
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                {
                    arr_17 [i_3] [4LL] [i_3] = ((/* implicit */_Bool) 1156027068);
                    var_23 &= ((/* implicit */unsigned int) (((-((~(((/* implicit */int) (unsigned char)17)))))) + (-739633104)));
                    /* LoopSeq 3 */
                    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        var_24 &= ((/* implicit */_Bool) 7476256546677570847ULL);
                        var_25 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4101064350U)) ? (((/* implicit */int) (unsigned char)50)) : (((/* implicit */int) ((_Bool) 4101064350U)))));
                        var_26 = ((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) ((1293104997340411390LL) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2158095789154578380ULL)))))))))));
                        var_27 -= ((/* implicit */short) (!(((/* implicit */_Bool) 780453887446213109LL))));
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((-780453887446213133LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-94)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_4] [4] [i_6])))))))) : (max((arr_6 [i_3] [i_6] [i_3]), (((/* implicit */unsigned long long int) max((1121570266), (((/* implicit */int) arr_11 [i_4])))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        arr_25 [i_3] [i_7] = ((/* implicit */signed char) (((+(((/* implicit */int) var_0)))) > ((+(((/* implicit */int) arr_13 [1] [8ULL] [i_7]))))));
                        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) 780453887446213132LL))));
                    }
                    for (unsigned int i_8 = 4; i_8 < 9; i_8 += 2) 
                    {
                        var_30 *= ((int) max((arr_8 [i_8]), (arr_8 [i_8])));
                        var_31 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_3]))))) ? ((~(var_9))) : ((~(((/* implicit */int) (signed char)-88))))))));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 19; i_9 += 3) 
    {
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 17; i_10 += 1) 
        {
            for (int i_11 = 0; i_11 < 19; i_11 += 4) 
            {
                {
                    var_32 *= ((/* implicit */long long int) ((((/* implicit */int) arr_34 [8] [(unsigned short)4] [i_11])) >> (((((((/* implicit */int) (unsigned char)44)) - (((/* implicit */int) arr_34 [i_9] [(unsigned char)2] [i_11])))) - (21)))));
                    arr_36 [i_9] [i_10] [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_10 + 2] [i_10]))));
                    var_33 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 3535867424187738754LL)) < (((((/* implicit */_Bool) 545350663)) ? (var_17) : (arr_1 [i_9])))));
                }
            } 
        } 
        arr_37 [i_9] [i_9] &= ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
        arr_38 [i_9] = ((_Bool) arr_2 [i_9]);
        var_34 &= ((/* implicit */unsigned short) ((6498989534607825037ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(short)8] [i_9])))));
    }
    var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? ((-(((((/* implicit */int) (short)-17490)) + (-545350664))))) : (((/* implicit */int) var_11))));
}

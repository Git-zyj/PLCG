/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211521
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
    var_11 = ((/* implicit */unsigned short) ((unsigned long long int) var_3));
    /* LoopSeq 2 */
    for (long long int i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        var_12 -= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [7LL] [i_0])) ? (arr_0 [4]) : (arr_0 [(unsigned short)2])))) ? (((long long int) arr_0 [6])) : (arr_1 [i_0 - 1] [i_0])))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) -1082036723)) % (3912932516U)));
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)34670)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30866))) : (382034780U))))));
        arr_3 [i_0] = ((long long int) 382034780U);
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        arr_6 [8LL] = ((/* implicit */unsigned long long int) (~(521083949)));
        arr_7 [i_1] = ((/* implicit */long long int) arr_5 [i_1]);
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((((/* implicit */_Bool) (unsigned short)10080)) ? (((/* implicit */unsigned long long int) 382034779U)) : (10271893874753931274ULL)))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_2 = 4; i_2 < 11; i_2 += 2) 
    {
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13724799978120377412ULL)) ? (((/* implicit */unsigned long long int) 2947202787216776154LL)) : (4721944095589174204ULL)))) ? (((((/* implicit */_Bool) 13724799978120377425ULL)) ? (arr_5 [i_2]) : (arr_9 [i_2] [i_2]))) : (((/* implicit */unsigned long long int) ((long long int) 1146375683391371826LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2 + 4])) ? (arr_9 [i_2] [i_2]) : (13724799978120377439ULL)))) ? (((/* implicit */unsigned long long int) (+(arr_4 [i_2] [i_2])))) : (((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (arr_5 [i_2]) : (((/* implicit */unsigned long long int) 2947202787216776184LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34688)))));
        var_16 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_8 [i_2])) ? (arr_5 [i_2]) : (arr_9 [i_2] [i_2]))))))));
        var_17 = ((/* implicit */long long int) arr_4 [i_2] [i_2]);
        var_18 = ((/* implicit */long long int) max((var_18), (7818993265162451362LL)));
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 3912932535U)) / (13724799978120377413ULL)))) ? (((arr_9 [i_2] [i_2]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3912932512U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19035))) : (arr_8 [i_2])))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 2147483647)) > (13724799978120377432ULL)))), (2640201026158545159ULL)))));
    }
    /* LoopSeq 3 */
    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
    {
        arr_12 [i_3] [i_3] = ((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */unsigned long long int) ((long long int) 5783271857499357916ULL))) : (((((/* implicit */_Bool) 2104678080U)) ? (((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) arr_10 [i_3] [i_3])) : (10271893874753931278ULL))) : (18055133005520243428ULL))));
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 3; i_4 < 15; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                for (long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    {
                        var_20 = ((/* implicit */int) (((((-(arr_19 [i_3] [i_4] [i_3] [i_6]))) > ((~(arr_13 [i_3] [i_4] [i_3]))))) && (((/* implicit */_Bool) (-(arr_15 [i_4 - 1] [i_4 - 1] [i_4 - 2]))))));
                        var_21 = ((/* implicit */unsigned long long int) arr_17 [i_3] [i_4 - 2] [6U] [13ULL] [i_3]);
                        arr_20 [i_3] [i_3] [12] [i_6] = ((/* implicit */unsigned short) ((int) 2148495138U));
                        arr_21 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = arr_18 [i_3] [i_3] [i_3] [1ULL];
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 7036256333114328500LL)) ? ((-(arr_17 [i_3] [i_3] [i_3] [i_3] [i_3]))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((9505776693347612563ULL), (((/* implicit */unsigned long long int) (unsigned short)33852))))))))));
        arr_22 [i_3] = (i_3 % 2 == 0) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (arr_15 [i_3] [i_3] [i_3]) : (((/* implicit */unsigned long long int) 1973372986))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_3])))))) : (((((/* implicit */_Bool) 1973372986)) ? (arr_5 [i_3]) : (arr_11 [7ULL] [i_3]))))) >> (((min((((((/* implicit */_Bool) arr_18 [i_3] [i_3] [i_3] [13ULL])) ? (arr_15 [11LL] [11LL] [11LL]) : (arr_13 [i_3] [i_3] [i_3]))), (((/* implicit */unsigned long long int) ((int) arr_16 [i_3] [i_3] [i_3]))))) - (33093ULL)))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (arr_15 [i_3] [i_3] [i_3]) : (((/* implicit */unsigned long long int) 1973372986))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_3])))))) : (((((/* implicit */_Bool) 1973372986)) ? (arr_5 [i_3]) : (arr_11 [7ULL] [i_3]))))) >> (((((min((((((/* implicit */_Bool) arr_18 [i_3] [i_3] [i_3] [13ULL])) ? (arr_15 [11LL] [11LL] [11LL]) : (arr_13 [i_3] [i_3] [i_3]))), (((/* implicit */unsigned long long int) ((int) arr_16 [i_3] [i_3] [i_3]))))) - (33093ULL))) - (18446744073709549139ULL))))));
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 15; i_7 += 1) 
    {
        arr_27 [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_19 [i_7] [i_7] [4] [4ULL]))));
        var_23 = (~(arr_19 [i_7] [i_7] [6U] [i_7]));
    }
    for (unsigned int i_8 = 0; i_8 < 24; i_8 += 4) 
    {
        arr_32 [i_8] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_8] [i_8])))))) == (max((arr_28 [i_8] [i_8]), (((/* implicit */unsigned long long int) -2125445909)))))) || ((!(((/* implicit */_Bool) arr_31 [i_8]))))));
        arr_33 [i_8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_8])) ? (((arr_28 [12ULL] [i_8]) ^ (((/* implicit */unsigned long long int) arr_31 [i_8])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_30 [i_8]) >= (4397509640192ULL)))))))) ? (((((/* implicit */_Bool) ((int) arr_28 [i_8] [i_8]))) ? (((/* implicit */unsigned long long int) -2947202787216776163LL)) : (arr_28 [i_8] [i_8]))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_29 [i_8]))));
        var_24 = ((((/* implicit */_Bool) arr_28 [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_8])) ? (arr_31 [i_8]) : (arr_31 [i_8])))) : (8174850198955620355ULL));
    }
}

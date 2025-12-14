/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245169
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
    var_11 = var_10;
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_12 = ((/* implicit */signed char) 4294967295U);
        arr_3 [i_0] = ((/* implicit */signed char) 10540725362376936775ULL);
        var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) (((-(arr_0 [i_0]))) - (((/* implicit */unsigned long long int) ((16U) + (((/* implicit */unsigned int) var_4))))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((18446744073709551602ULL) * (((((/* implicit */_Bool) 1434928071)) ? (((/* implicit */unsigned long long int) 4294967285U)) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (1842726473499774189ULL))))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((signed char) (_Bool)1));
    }
    for (int i_2 = 3; i_2 < 17; i_2 += 1) 
    {
        arr_11 [i_2] = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) 2U)), (var_7))) * (((((/* implicit */_Bool) 1U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32766))) : (18446744073709551615ULL)))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (~(16U)))))) * (var_9)));
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                for (int i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    {
                        var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_17 [i_2]) / (((/* implicit */long long int) var_5)))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */short) (_Bool)1);
                            var_18 += ((/* implicit */short) arr_1 [i_2]);
                        }
                        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned char) (!(((_Bool) ((((/* implicit */unsigned long long int) 17U)) * (12662071421375959186ULL))))));
                            arr_26 [i_7] [i_4] [i_4] = ((/* implicit */_Bool) (-(524287)));
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_4))));
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((2097151) / (min(((+(var_5))), (((int) var_10)))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 1) /* same iter space */
                        {
                            arr_30 [(short)16] [i_8] [5ULL] [i_3] [i_8] [i_4] [3U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 8972768199897560366LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 668044888234448406LL)))))) : (18446744073709551601ULL)));
                            arr_31 [(unsigned short)2] [i_8] [i_4] [i_8] [(unsigned short)2] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2 - 3])) ? (((/* implicit */int) arr_4 [i_2 + 1])) : (((/* implicit */int) var_10))));
                            arr_32 [i_8] [(_Bool)1] [1LL] [(_Bool)1] [i_8] [i_8] = ((((/* implicit */unsigned long long int) var_6)) * (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1740386609762901703ULL))));
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)2832)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                            var_23 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 4294967272U)) ? (((/* implicit */unsigned long long int) 4294967288U)) : (2ULL)))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 18; i_9 += 1) /* same iter space */
                        {
                            var_24 ^= 1015908961;
                            arr_37 [i_9] [i_5] [i_3] [i_3] [i_2 - 2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_20 [i_2] [i_2 - 2]))))) * (((((1740386609762901706ULL) * (((/* implicit */unsigned long long int) 4294967295U)))) * (max((((/* implicit */unsigned long long int) (signed char)-109)), (15302196589349749857ULL)))))));
                            arr_38 [i_2] [9LL] [i_4] [i_5] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)52713))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2831))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_27 [i_2] [11LL] [i_9] [11LL] [i_9] [i_4])) : (((/* implicit */int) (signed char)-94))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))) : (((unsigned long long int) arr_0 [i_4]))))));
                        }
                    }
                } 
            } 
        } 
        var_25 &= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned short)10349)) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) (unsigned char)70))))));
    }
    for (short i_10 = 1; i_10 < 23; i_10 += 2) 
    {
        var_26 = ((/* implicit */_Bool) (unsigned char)4);
        arr_42 [i_10] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_39 [i_10 - 1])))) * (((((/* implicit */long long int) ((/* implicit */int) arr_41 [i_10 - 1]))) / (arr_40 [i_10 - 1])))));
        var_27 = ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_39 [i_10])) * (((/* implicit */int) (_Bool)1)))))));
    }
    /* LoopSeq 1 */
    for (short i_11 = 0; i_11 < 24; i_11 += 3) 
    {
        var_28 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [(unsigned short)8])) || ((!(((/* implicit */_Bool) 17179868672ULL))))))), (((((/* implicit */_Bool) ((int) 14ULL))) ? (((((/* implicit */_Bool) 72057594037927935LL)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)83))))) : (((/* implicit */long long int) ((/* implicit */int) max(((short)2837), (((/* implicit */short) var_0))))))))));
        arr_45 [i_11] = ((/* implicit */short) max((((((/* implicit */long long int) (-(((/* implicit */int) var_0))))) - (arr_40 [i_11]))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_8) & (((/* implicit */long long int) arr_44 [(signed char)7]))))) ? (15U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))))));
        var_29 = max((var_7), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) * (((/* implicit */int) arr_39 [i_11]))))));
        var_30 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_2))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191280
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
    var_20 &= ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))) == (((/* implicit */int) ((unsigned char) var_11)))))) < (((/* implicit */int) var_15))));
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_5))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            var_22 = ((/* implicit */short) (+(((unsigned long long int) var_6))));
                            arr_16 [i_0] [i_0] [i_3] [i_0] [i_0] [i_4] [i_4] &= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3] [i_3] [i_3] [i_3] [i_4]))) <= ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_11 [i_0] [i_1] [i_0] [i_0] [i_4])))))) == ((((+(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4])))) & (((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_3] [i_3]))))));
                            arr_17 [i_0] [i_0] [i_0] [i_3] [i_0] = (unsigned char)105;
                        }
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            var_23 &= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_5 [i_0] [i_0]))));
                            var_24 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_3])) && (((/* implicit */_Bool) ((((/* implicit */int) var_10)) / (((/* implicit */int) arr_9 [i_0] [i_0] [i_0])))))));
                            arr_20 [i_1] [i_1] = arr_6 [i_0] [i_2] [i_0];
                        }
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_2])) | (((/* implicit */int) arr_19 [i_1]))));
                        var_26 = ((/* implicit */_Bool) max((var_26), ((!(((((/* implicit */unsigned int) ((/* implicit */int) var_7))) == (arr_10 [i_0] [i_1])))))));
                        var_27 |= ((/* implicit */long long int) arr_14 [i_0] [i_1] [i_0] [i_3]);
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            arr_25 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-27455))));
            var_28 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_6] [i_0] [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) ((short) arr_9 [i_0] [i_0] [i_0])))));
            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_6] [i_6] [i_6] [i_6] [i_6]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_23 [i_0] [i_0] [i_6])))) : ((((-(arr_15 [i_6] [i_6] [i_6]))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)56)) || (((/* implicit */_Bool) arr_7 [i_6] [i_6] [i_6])))))))))))));
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                for (long long int i_8 = 0; i_8 < 14; i_8 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((_Bool) (short)-9086);
                            var_30 = ((/* implicit */unsigned long long int) ((short) (_Bool)1));
                            arr_35 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_32 [i_9] [i_8] [i_6] [i_0])) - (((/* implicit */int) arr_32 [i_8] [i_8] [i_7] [i_8]))))) && (arr_32 [i_6] [i_7] [i_6] [i_9]));
                            var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) var_19))));
                        }
                        /* vectorizable */
                        for (short i_10 = 0; i_10 < 14; i_10 += 4) 
                        {
                            var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_8])) / (((/* implicit */int) (unsigned char)105)))))));
                            var_33 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_7]))));
                            var_34 += ((/* implicit */short) (+(((long long int) arr_30 [i_8] [i_8]))));
                        }
                        var_35 = ((/* implicit */unsigned char) (((!(((_Bool) arr_0 [i_0])))) ? (((/* implicit */int) ((unsigned char) ((_Bool) arr_28 [i_6] [i_7] [i_8])))) : (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_0]))))) || (((/* implicit */_Bool) (unsigned char)0)))))));
                    }
                } 
            } 
            var_36 = ((/* implicit */unsigned char) ((short) max((3382786310580500215LL), (((/* implicit */long long int) var_4)))));
        }
        for (short i_11 = 0; i_11 < 14; i_11 += 4) 
        {
            arr_40 [i_0] [i_0] [i_0] = max((arr_4 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_11] [i_11] [i_11])) % (((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_11] [i_0] [i_0] [i_0]))))) > (arr_11 [i_11] [i_11] [i_11] [i_11] [i_11])))));
            var_37 &= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_11] [i_11] [i_11]))))) ? (((/* implicit */int) ((unsigned char) (signed char)-75))) : (((((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_11])) % (((/* implicit */int) arr_23 [i_0] [i_0] [i_0]))))));
            arr_41 [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) arr_5 [i_0] [i_11])) / (((/* implicit */int) arr_2 [i_0])))));
        }
        for (unsigned char i_12 = 0; i_12 < 14; i_12 += 4) 
        {
            var_38 = ((/* implicit */short) max((var_38), ((short)9087)));
            var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 2856686551902467863ULL))) ? (arr_39 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_12] [i_0])))))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_12] [i_0] [i_0]))))))))));
            var_40 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_6) / (((/* implicit */long long int) ((/* implicit */int) (signed char)101)))))) ? ((+(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) (signed char)78))));
        }
        for (unsigned char i_13 = 0; i_13 < 14; i_13 += 4) 
        {
            var_41 |= ((/* implicit */short) ((long long int) arr_22 [i_0] [i_0] [i_0]));
            arr_47 [i_0] [i_0] [i_0] = (((!(((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_13] [i_0] [i_0]))) == (arr_27 [i_0] [i_0]))))) ? (((/* implicit */long long int) (~((-(((/* implicit */int) var_14))))))) : (max((arr_44 [i_13] [i_0] [i_0]), (((/* implicit */long long int) arr_28 [i_0] [i_0] [i_0])))));
            arr_48 [i_13] [i_0] [i_0] = ((/* implicit */signed char) max(((short)-2786), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-908)) * (((/* implicit */int) arr_21 [i_13]))))) != (((arr_7 [i_0] [i_0] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_13] [i_0]))))))))));
            var_42 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_32 [i_0] [i_0] [i_0] [i_0])))) : (((unsigned long long int) (unsigned short)65535))));
        }
    }
    for (unsigned char i_14 = 0; i_14 < 20; i_14 += 4) 
    {
        var_43 -= ((/* implicit */_Bool) min(((-((~(((/* implicit */int) var_8)))))), (((/* implicit */int) arr_49 [i_14] [i_14]))));
        arr_51 [i_14] [i_14] = ((/* implicit */short) ((unsigned char) arr_50 [i_14]));
    }
}

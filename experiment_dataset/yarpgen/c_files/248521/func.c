/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248521
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46074))) & (var_11)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 *= ((/* implicit */_Bool) (-(max((((/* implicit */int) min((var_5), (((/* implicit */short) arr_0 [i_0] [i_0]))))), (((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) arr_1 [i_0] [(short)13])) : (((/* implicit */int) var_2))))))));
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            var_20 = ((/* implicit */short) ((unsigned short) ((-1760797680) <= (((/* implicit */int) min((((/* implicit */short) arr_7 [i_0] [(short)3] [(short)3])), ((short)(-32767 - 1))))))));
                            var_21 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */unsigned int) 1760797679)) | (21U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_3] [i_4])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_10 [i_0] [i_1 - 2] [i_2] [i_3] [(_Bool)1])))))))) ? (((((/* implicit */_Bool) ((arr_1 [i_2] [i_3]) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (short)-2927))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_0 [(short)5] [(_Bool)1])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [i_4] [15U] [i_2])), (arr_10 [i_0] [i_1 + 4] [i_1 + 4] [i_1 + 4] [(short)9])))))) : (((/* implicit */int) var_0))));
                            var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(arr_2 [i_0] [i_1 + 1] [3U]))))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            var_23 = ((/* implicit */_Bool) (-(4294967295U)));
                            arr_14 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1760797673)) ? (((/* implicit */int) (short)-28860)) : (((/* implicit */int) (unsigned char)47))));
                        }
                        var_24 &= ((/* implicit */unsigned int) max((((arr_12 [i_1 + 3] [i_1 - 1] [i_2] [i_1 - 1] [(short)8]) ? ((-(((/* implicit */int) var_9)))) : ((-(((/* implicit */int) arr_9 [i_1] [i_3] [i_2] [i_3] [i_1] [i_1 + 3])))))), (((((/* implicit */int) arr_3 [i_2])) + (((/* implicit */int) arr_3 [i_0]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned char i_7 = 2; i_7 < 23; i_7 += 4) 
            {
                for (signed char i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    {
                        var_25 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_18 [i_0] [i_6] [(_Bool)1])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))))));
                        var_26 ^= ((/* implicit */signed char) arr_10 [i_0] [(unsigned char)5] [i_0] [i_0] [i_0]);
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (unsigned char)9))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_9 = 0; i_9 < 13; i_9 += 4) 
    {
        arr_26 [i_9] = ((/* implicit */_Bool) 1760797673);
        /* LoopNest 3 */
        for (unsigned short i_10 = 1; i_10 < 12; i_10 += 4) 
        {
            for (unsigned short i_11 = 0; i_11 < 13; i_11 += 4) 
            {
                for (short i_12 = 0; i_12 < 13; i_12 += 4) 
                {
                    {
                        arr_33 [i_9] [i_10] [i_11] [i_10] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (short)32758))) ? ((~(((/* implicit */int) arr_23 [i_9])))) : (((/* implicit */int) ((unsigned short) (unsigned short)0)))));
                        var_28 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_11])) ? (((long long int) arr_22 [i_9] [i_10] [i_11] [i_10] [i_12] [i_12])) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        var_29 = ((/* implicit */_Bool) ((short) arr_19 [i_9] [i_10 - 1] [i_11] [i_10 - 1]));
                        var_30 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)10))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_13 = 0; i_13 < 13; i_13 += 4) 
        {
            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_35 [i_9] [i_9] [i_13]))))) ? (((((/* implicit */int) arr_11 [(unsigned short)4] [i_13] [(unsigned short)4] [i_13] [(unsigned short)4] [(unsigned short)4] [(unsigned short)4])) + (((/* implicit */int) (short)-1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
            var_32 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) (short)-15162)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_22 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))));
            /* LoopNest 2 */
            for (unsigned int i_14 = 3; i_14 < 12; i_14 += 4) 
            {
                for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 4) 
                {
                    {
                        arr_40 [i_9] [i_13] [i_14 - 2] [i_9] [i_13] = ((/* implicit */unsigned short) arr_1 [i_13] [i_15]);
                        var_33 -= ((/* implicit */unsigned char) (~(arr_4 [i_14 - 2] [i_14 - 3])));
                        /* LoopSeq 2 */
                        for (unsigned int i_16 = 0; i_16 < 13; i_16 += 4) 
                        {
                            var_34 = ((/* implicit */short) ((_Bool) arr_21 [i_14 - 3] [i_14 - 1] [(short)21] [i_14 - 2]));
                            var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-122)) + (2147483647))) << (((((-1760797674) + (1760797696))) - (22)))))) ? (((/* implicit */int) (unsigned char)101)) : (((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */int) (unsigned char)92)) : (((/* implicit */int) (short)815))))));
                        }
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            var_36 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_9] [i_9])) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) arr_0 [1U] [i_15]))))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) (signed char)(-127 - 1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_9] [i_9] [(unsigned char)5] [(short)8])))))));
                            var_37 = arr_39 [i_9] [i_13] [i_14] [11LL] [i_14 - 2];
                        }
                        var_38 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(arr_1 [(signed char)3] [i_13]))))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            for (signed char i_19 = 0; i_19 < 13; i_19 += 4) 
            {
                {
                    arr_51 [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)69)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)213)))));
                    arr_52 [i_9] [i_18] [i_19] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_34 [(_Bool)1]) ? (((/* implicit */int) arr_42 [i_9] [i_18] [i_18] [i_18] [i_19] [i_19] [0LL])) : (((/* implicit */int) (_Bool)1))))) ? (arr_48 [i_18] [(short)3]) : (((/* implicit */unsigned long long int) arr_19 [i_19] [i_18] [i_9] [(short)15]))));
                    var_39 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)92)))));
                }
            } 
        } 
    }
}

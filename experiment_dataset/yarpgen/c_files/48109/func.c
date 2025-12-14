/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48109
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
    var_11 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) var_0)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((unsigned char) (short)11454));
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((arr_1 [5U]) == (((/* implicit */int) var_10))));
            /* LoopSeq 3 */
            for (unsigned short i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                arr_9 [i_2] = ((/* implicit */signed char) 2147483640);
                var_12 &= ((/* implicit */long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) * (arr_7 [2U] [i_1] [i_1] [i_0])))));
            }
            for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                arr_12 [i_1] [i_3] = ((/* implicit */int) arr_7 [i_0] [i_1] [i_3] [(unsigned short)1]);
                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_5))) ? (((/* implicit */int) ((short) arr_8 [i_0] [i_3]))) : (arr_1 [i_0])));
                /* LoopSeq 4 */
                for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    var_14 = ((/* implicit */short) 1096437406U);
                    var_15 *= ((/* implicit */unsigned char) (!(arr_15 [(unsigned char)8] [i_1])));
                    var_16 = ((/* implicit */short) arr_11 [i_0] [3ULL]);
                }
                for (short i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    var_17 *= ((/* implicit */_Bool) arr_10 [4LL] [8LL] [i_0]);
                    var_18 = ((/* implicit */int) (+(((long long int) var_5))));
                    var_19 = ((/* implicit */long long int) (-(arr_13 [i_0] [i_5])));
                }
                for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
                {
                    arr_24 [i_6] = ((/* implicit */long long int) ((((_Bool) 3198529872U)) ? (-1) : (((/* implicit */int) ((var_8) == (arr_13 [i_3] [i_6]))))));
                    arr_25 [i_6] [i_3] [i_1] [i_6] = (!(((/* implicit */_Bool) arr_0 [i_6] [i_0])));
                    arr_26 [i_0] [i_1] [i_3] [(unsigned char)8] [i_6] [i_6] = ((/* implicit */long long int) arr_4 [i_0] [i_0]);
                    var_20 += ((/* implicit */signed char) (+(((/* implicit */int) arr_10 [i_1] [i_3] [i_6]))));
                }
                for (unsigned short i_7 = 2; i_7 < 9; i_7 += 4) 
                {
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_7 - 2] [i_7 + 3] [i_7] [i_7] [i_7 - 1])) + (((/* implicit */int) arr_18 [i_7 + 3] [i_7 - 1] [i_7 - 1] [12LL] [i_7 + 2]))));
                    var_22 ^= ((((/* implicit */_Bool) 3198529872U)) ? (8064LL) : (((/* implicit */long long int) 2147483640)));
                    var_23 *= ((/* implicit */signed char) arr_23 [9LL]);
                    var_24 = ((/* implicit */long long int) ((995780786) < (((/* implicit */int) (unsigned short)33683))));
                }
            }
            for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 3) 
            {
                var_25 &= ((/* implicit */_Bool) ((unsigned char) (unsigned short)52182));
                /* LoopSeq 1 */
                for (unsigned int i_9 = 0; i_9 < 13; i_9 += 1) 
                {
                    var_26 *= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_34 [i_9] [i_0] [i_0] [i_0]))));
                    var_27 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) var_8)) == (var_2))))));
                    arr_36 [i_8] [i_0] [i_8] = ((/* implicit */short) ((((/* implicit */unsigned int) arr_11 [i_1] [i_9])) % (1096437423U)));
                }
            }
            arr_37 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) var_6);
            var_28 *= ((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_0])) != (((/* implicit */int) arr_8 [i_1] [i_0]))));
        }
        arr_38 [11ULL] = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) arr_3 [(_Bool)1]))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (short)24974)))))));
        /* LoopSeq 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (~(((((((/* implicit */unsigned long long int) -1682607821)) | (262016ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0] [i_0]) >= (arr_0 [i_0] [i_10]))))))))))));
            var_30 &= ((/* implicit */int) ((((min((arr_27 [i_10] [i_10]), (arr_27 [i_0] [i_10]))) + (9223372036854775807LL))) >> ((((~(arr_27 [i_0] [i_10]))) - (199138267736284743LL)))));
            var_31 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)16384)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)16384))) : (3198529872U))) & (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_29 [i_10])) ? (((/* implicit */int) arr_8 [i_10] [i_10])) : (((/* implicit */int) arr_18 [i_0] [(short)3] [i_0] [i_10] [(_Bool)1])))), ((~(((/* implicit */int) arr_15 [i_0] [i_0])))))))));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_39 [i_0] [i_11] [i_11]), (arr_39 [i_0] [(short)0] [i_12])))) ? (((/* implicit */int) min(((unsigned short)256), (((unsigned short) (unsigned short)29))))) : ((-(((/* implicit */int) arr_29 [i_0]))))));
                var_33 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_33 [i_0] [i_0])) & (((/* implicit */int) arr_8 [i_0] [i_0])))) & ((-(((/* implicit */int) arr_33 [i_0] [i_0]))))));
            }
            /* LoopNest 2 */
            for (signed char i_13 = 0; i_13 < 13; i_13 += 4) 
            {
                for (int i_14 = 0; i_14 < 13; i_14 += 2) 
                {
                    {
                        var_34 -= ((/* implicit */unsigned long long int) min((((arr_32 [i_0] [i_13] [i_13] [i_14]) ? (((/* implicit */int) arr_32 [i_0] [i_0] [i_13] [i_0])) : (((/* implicit */int) arr_32 [(unsigned char)8] [i_0] [i_13] [i_14])))), (((/* implicit */int) arr_50 [i_14] [i_13] [i_11] [i_0]))));
                        var_35 ^= ((/* implicit */long long int) min((((int) arr_21 [i_0] [i_0] [i_0] [i_0])), ((~(arr_1 [i_0])))));
                        arr_52 [i_0] [5] [i_13] [i_14] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_0]))));
                    }
                } 
            } 
            arr_53 [i_11] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_35 [i_11] [i_11] [i_11] [i_11]), ((short)9268))))));
            /* LoopNest 2 */
            for (unsigned short i_15 = 0; i_15 < 13; i_15 += 1) 
            {
                for (unsigned char i_16 = 0; i_16 < 13; i_16 += 4) 
                {
                    {
                        var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) << (((arr_27 [i_11] [i_0]) + (199138267736284792LL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (short)24974)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_8))))))))))));
                        var_37 = ((/* implicit */short) (~(((((/* implicit */int) arr_19 [i_0] [i_11])) - (((/* implicit */int) arr_19 [i_15] [i_11]))))));
                    }
                } 
            } 
        }
    }
    var_38 += ((/* implicit */short) ((((((-8434115600086086975LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)24974)) - (24911))))) << (((((/* implicit */int) var_1)) - (6878)))));
    var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) var_8))));
}

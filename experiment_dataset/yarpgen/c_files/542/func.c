/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/542
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
    var_18 = ((/* implicit */unsigned long long int) var_6);
    var_19 ^= ((/* implicit */unsigned char) ((int) 1890076153));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) (unsigned char)224)))));
        arr_2 [i_0] = ((/* implicit */signed char) ((((arr_1 [i_0] [i_0]) ^ (arr_1 [17U] [i_0]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)22327))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            var_21 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)18))) ? (((((/* implicit */_Bool) (unsigned char)92)) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) (unsigned short)43220)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) 17621514094712737357ULL)))))))) ? (((((/* implicit */int) arr_5 [i_1] [i_1] [i_1])) | (((/* implicit */int) arr_5 [(unsigned short)7] [(short)13] [i_0])))) : (((/* implicit */int) (unsigned char)18))));
            var_22 = ((/* implicit */signed char) (+(((/* implicit */int) arr_4 [i_1] [i_0] [i_0]))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) (signed char)105))) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)18)) >= (((/* implicit */int) arr_0 [i_0]))))))))));
                var_24 += ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) (unsigned short)43209))) ^ (((/* implicit */int) (unsigned short)5449))));
                /* LoopNest 2 */
                for (unsigned short i_3 = 3; i_3 < 23; i_3 += 1) 
                {
                    for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (unsigned char)237))) ? (((/* implicit */int) arr_4 [i_3 + 1] [i_3 + 1] [i_2 + 1])) : (((((/* implicit */_Bool) arr_10 [(_Bool)1] [i_3 + 1] [i_2] [i_1] [i_0])) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) (unsigned short)65529))))));
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_3 - 1] [i_2] [i_3 + 1] [(signed char)23] [i_2])) ? (arr_10 [i_3 - 1] [i_3] [i_3 - 2] [i_2] [i_2]) : (arr_10 [i_3 - 1] [i_3] [i_3] [i_3] [i_3])));
                        }
                    } 
                } 
                var_27 -= ((((/* implicit */int) (unsigned short)53409)) / (((/* implicit */int) var_5)));
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        {
                            arr_19 [i_6] [i_5] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_6] [i_2] [i_2 - 1] [i_2] [i_2])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_0] [5LL] [i_2] [(signed char)6] [(signed char)6])) && (((/* implicit */_Bool) arr_16 [i_6] [19] [i_2] [i_1] [i_0]))))) : (((/* implicit */int) ((unsigned char) var_9)))));
                            var_28 ^= ((/* implicit */unsigned char) arr_18 [i_2 + 4] [i_2 + 3] [i_2 + 4]);
                            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_2 + 2] [i_2 + 3] [i_2 + 3])) ? (((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (short)12930)))) : (((arr_7 [i_5]) ? (((/* implicit */int) (unsigned char)215)) : (-1121771610)))));
                        }
                    } 
                } 
            }
        }
    }
    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (unsigned char)30))) ? (var_4) : (((/* implicit */int) ((signed char) ((unsigned char) (unsigned short)43208))))));
    /* LoopSeq 2 */
    for (int i_7 = 0; i_7 < 25; i_7 += 1) 
    {
        var_31 = ((/* implicit */long long int) max(((+(((/* implicit */int) (unsigned char)63)))), (((((/* implicit */int) (signed char)-117)) / (((/* implicit */int) (signed char)-10))))));
        arr_24 [i_7] = ((/* implicit */unsigned char) arr_12 [i_7] [i_7] [23U] [i_7] [i_7]);
        arr_25 [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */unsigned int) min((-1121771616), (((/* implicit */int) (short)-1))))) + ((~(((((/* implicit */_Bool) (signed char)-123)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43209)))))))));
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_9 = 2; i_9 < 10; i_9 += 1) /* same iter space */
        {
            var_32 = ((/* implicit */signed char) min((var_32), (((signed char) var_0))));
            /* LoopNest 2 */
            for (long long int i_10 = 1; i_10 < 9; i_10 += 2) 
            {
                for (unsigned int i_11 = 1; i_11 < 9; i_11 += 3) 
                {
                    {
                        arr_39 [i_9] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [(_Bool)1] [(signed char)23] [i_10] [i_11] [(_Bool)1])) ? (((/* implicit */long long int) 1121771628)) : (((long long int) 4294967295U))));
                        var_33 *= ((/* implicit */_Bool) ((signed char) ((unsigned char) arr_34 [(unsigned short)2])));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (int i_12 = 2; i_12 < 10; i_12 += 2) 
            {
                for (unsigned short i_13 = 0; i_13 < 12; i_13 += 2) 
                {
                    for (unsigned char i_14 = 2; i_14 < 9; i_14 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */int) (+(((((/* implicit */_Bool) (unsigned char)63)) ? (arr_32 [(signed char)0] [i_13] [(short)0]) : (((/* implicit */long long int) ((/* implicit */int) (short)-27899)))))));
                            var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_14 + 3] [i_12 - 2])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (signed char)24))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_15 = 2; i_15 < 10; i_15 += 1) /* same iter space */
        {
            var_36 *= ((/* implicit */unsigned char) var_11);
            var_37 = ((/* implicit */unsigned int) (~(-1121771616)));
        }
        var_38 += ((/* implicit */unsigned long long int) var_6);
        arr_50 [11] = ((/* implicit */unsigned char) (_Bool)1);
        arr_51 [i_8] = ((/* implicit */unsigned int) ((unsigned short) arr_36 [(signed char)1] [(signed char)1] [i_8] [i_8]));
        var_39 += ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_8] [i_8] [i_8])) | (((/* implicit */int) (signed char)10))));
    }
}

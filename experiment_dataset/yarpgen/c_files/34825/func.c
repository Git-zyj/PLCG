/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34825
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
    var_11 = (~(min((((/* implicit */int) var_1)), (min((((/* implicit */int) var_1)), (var_6))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_12 = ((/* implicit */short) (-(((/* implicit */int) var_9))));
            arr_5 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)176))) : (var_4)))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                var_13 = ((/* implicit */unsigned short) (-((-(16646144U)))));
                var_14 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) - (var_4)));
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4278321148U)) ? (((/* implicit */int) (unsigned char)181)) : (((/* implicit */int) (short)-22866)))))));
                arr_9 [i_1] [(unsigned char)0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0 - 2] [i_2]))));
            }
            /* LoopNest 3 */
            for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 4; i_4 < 13; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        {
                            arr_16 [i_5] [i_1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63))) < (15386052242738945940ULL)));
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) 17592185913344ULL)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) arr_2 [i_0 + 1] [i_4 - 3] [i_4 - 3]))));
                            arr_17 [i_0] |= ((/* implicit */unsigned char) (-(((/* implicit */int) var_9))));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 1 */
        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            /* LoopSeq 3 */
            for (int i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                var_17 ^= ((/* implicit */unsigned char) ((signed char) arr_20 [i_6] [i_6] [i_6]));
                var_18 ^= ((unsigned long long int) arr_13 [i_0] [i_0 - 2] [i_0 - 2] [i_0]);
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    for (unsigned int i_9 = 0; i_9 < 17; i_9 += 3) 
                    {
                        {
                            arr_27 [i_0] [(short)5] [15] [i_0] [15] [(unsigned char)6] = ((/* implicit */signed char) arr_11 [i_6] [i_0 - 1]);
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (-(16646153U)))) ? (((((/* implicit */_Bool) var_1)) ? (16777184ULL) : (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37700)))));
                            var_20 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0 + 1] [i_7])) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) var_9))));
                            var_21 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((16777184ULL) << (((4278321173U) - (4278321141U))))))));
                        }
                    } 
                } 
                var_22 *= ((((/* implicit */_Bool) (unsigned char)186)) ? (arr_23 [i_0] [i_0 - 1] [i_0] [i_0 - 2]) : (((/* implicit */unsigned long long int) 4294967287U)));
            }
            for (long long int i_10 = 0; i_10 < 17; i_10 += 4) /* same iter space */
            {
                var_23 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -712165139)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (var_6))) >> (((((/* implicit */int) var_5)) - (90)))));
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 17; i_11 += 2) 
                {
                    for (long long int i_12 = 0; i_12 < 17; i_12 += 1) 
                    {
                        {
                            arr_38 [i_0] [i_0] [i_0] [i_12] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_31 [i_12] [i_10] [i_6] [i_0]))) ? (1796824240U) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_12] [i_10] [i_6] [i_0])))))));
                            var_24 -= ((/* implicit */unsigned long long int) ((arr_20 [i_0 - 2] [i_0 - 2] [i_0 - 2]) * (((/* implicit */unsigned int) arr_13 [i_0 - 2] [i_0] [i_0 - 2] [i_0]))));
                            var_25 = ((/* implicit */long long int) min((var_25), (((long long int) arr_32 [i_11] [i_10] [i_0 - 1] [i_11]))));
                            var_26 = var_6;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_13 = 0; i_13 < 17; i_13 += 1) 
                {
                    for (unsigned char i_14 = 0; i_14 < 17; i_14 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) 4294967264U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) <= (((/* implicit */int) arr_25 [i_0] [i_6] [i_6] [i_10] [i_13] [i_13])))))) : (11775997571529346655ULL)));
                            var_28 -= ((/* implicit */unsigned short) ((arr_3 [i_0 - 1]) ? (arr_30 [i_14] [i_13] [i_6] [i_0 - 2]) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_9)))))));
                            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) 1328419246))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned char) arr_31 [i_10] [i_0] [i_10] [i_10]);
                var_31 &= ((/* implicit */int) ((((((/* implicit */unsigned long long int) -935512350)) != (arr_23 [i_0] [i_6] [i_6] [i_0 - 1]))) ? (arr_18 [i_0] [(short)8] [i_10]) : (((/* implicit */unsigned long long int) var_6))));
            }
            for (long long int i_15 = 0; i_15 < 17; i_15 += 4) /* same iter space */
            {
                arr_46 [i_0 - 1] [i_6] [i_6] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_35 [i_0] [i_6] [i_0] [i_0 + 1] [i_6]))));
                arr_47 [i_0] [i_0] [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [0U] [0U] [(unsigned char)5] [i_15])) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [i_0] [i_6] [i_6] [i_0])))))));
                arr_48 [i_0] [i_15] = ((/* implicit */signed char) ((((((/* implicit */int) (short)23930)) <= (((/* implicit */int) arr_4 [i_6])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)91))))) : (arr_32 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_15])));
                arr_49 [i_6] [i_6] [i_6] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_21 [i_0] [i_6] [i_0]))));
            }
            var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 12557228944730156960ULL)) ? (((/* implicit */int) (unsigned char)53)) : (((/* implicit */int) arr_14 [i_6] [2ULL] [i_6] [i_0] [i_6])))))));
            /* LoopNest 3 */
            for (unsigned short i_16 = 3; i_16 < 13; i_16 += 1) 
            {
                for (unsigned long long int i_17 = 0; i_17 < 17; i_17 += 4) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_2 [i_0] [(signed char)16] [i_16])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))));
                            var_34 = ((/* implicit */int) ((((/* implicit */_Bool) 3ULL)) ? (((((/* implicit */_Bool) -1894269647)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)89))) : (-312461244908229002LL))) : (((/* implicit */long long int) ((int) var_10)))));
                            var_35 = ((((/* implicit */_Bool) ((unsigned short) var_10))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_21 [(unsigned char)8] [(short)6] [(short)6])));
                        }
                    } 
                } 
            } 
            var_36 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32767)) ? (((/* implicit */unsigned int) var_10)) : (1783094351U)))) ? (((/* implicit */int) var_3)) : ((-(((/* implicit */int) var_7))))));
            arr_58 [i_6] [(unsigned char)0] [i_0] = ((/* implicit */unsigned char) ((arr_24 [i_0] [i_0] [7U] [i_0] [i_0] [i_0]) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
        }
        arr_59 [(unsigned short)7] [(unsigned short)7] &= ((/* implicit */int) var_4);
        arr_60 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) 18446744073709551613ULL))));
    }
    for (unsigned int i_19 = 2; i_19 < 16; i_19 += 4) /* same iter space */
    {
        var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-6757))) : (2115368448U))))));
        var_38 -= ((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) arr_28 [i_19] [i_19] [i_19 + 1] [i_19])) : (((/* implicit */int) (unsigned char)202))))));
        var_39 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_19 - 1] [i_19 - 2] [i_19 - 2] [i_19] [i_19] [i_19] [i_19])) ? (((/* implicit */int) (unsigned char)81)) : (((/* implicit */int) arr_0 [i_19] [i_19 - 2]))))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) >= (1796824236U))) ? (13632991809153979043ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) | (arr_13 [i_19 - 2] [i_19 + 1] [i_19 + 1] [i_19])))))) : (((/* implicit */unsigned long long int) var_4))));
    }
    var_40 -= var_4;
}

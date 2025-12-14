/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53384
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_14 = ((/* implicit */int) ((unsigned long long int) 23LL));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        arr_8 [i_0] [i_1] [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_2 - 2] [i_2 - 2] [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1]))) : (((((/* implicit */unsigned int) 1106549645)) | (1546223962U)))));
                        arr_9 [i_0] [i_1] [i_2] [i_1] = ((signed char) min((arr_6 [i_2] [i_2] [i_2 - 1] [i_2 - 2] [i_2] [i_2 + 1]), (arr_6 [i_2] [i_2] [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2])));
                        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_13))) - (arr_6 [i_2] [i_2] [i_2 - 2] [(unsigned short)1] [i_2 - 2] [i_2]))))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */_Bool) max((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])), (min((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0] [(short)0] [i_0]))))), ((~(((/* implicit */int) (_Bool)1))))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_12 [i_4] = (signed char)-70;
        arr_13 [i_4] |= ((/* implicit */long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_4] [i_4]))))), (((((/* implicit */_Bool) 683245975497966566ULL)) ? (162072860U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4806)))))));
        arr_14 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)70)))))) ? (((long long int) (+(((/* implicit */int) arr_10 [i_4]))))) : (((/* implicit */long long int) max(((-(((/* implicit */int) arr_7 [(signed char)2] [i_4])))), ((~(((/* implicit */int) arr_2 [i_4] [i_4] [i_4])))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            var_17 = ((/* implicit */signed char) 1622914100245050150LL);
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                for (signed char i_7 = 0; i_7 < 15; i_7 += 1) 
                {
                    for (signed char i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) ((arr_15 [i_4] [i_4]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_8] [i_6] [(unsigned short)1])))));
                            arr_25 [i_4] [i_4] [i_4] [i_4] [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [(_Bool)1] [i_5] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_4]))) : (((((/* implicit */_Bool) arr_7 [i_5] [3ULL])) ? (arr_15 [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5] [i_5])))))));
                        }
                    } 
                } 
            } 
            arr_26 [i_5] [i_5] [i_4] = ((/* implicit */unsigned int) ((signed char) (unsigned short)6605));
        }
        for (short i_9 = 4; i_9 < 11; i_9 += 3) 
        {
            arr_30 [i_9] [i_9] = arr_0 [i_9 - 2] [i_9 - 2];
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)32749))))) || (((/* implicit */_Bool) ((unsigned short) (unsigned char)91)))));
        }
        for (signed char i_10 = 0; i_10 < 15; i_10 += 4) 
        {
            arr_34 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_4] [i_10] [i_4])) << (((/* implicit */int) arr_21 [i_4] [i_10] [i_10] [i_10] [i_4] [i_4]))))) ? (((((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14))) : (arr_27 [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_21 [i_4] [i_4] [i_10] [i_10] [i_10] [i_10]))))));
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) (signed char)-67)) < (((/* implicit */int) ((unsigned char) arr_32 [i_4] [i_10] [11LL])))))), (((((/* implicit */_Bool) arr_27 [i_4])) ? (((/* implicit */int) ((signed char) arr_5 [(unsigned short)1] [i_10]))) : (((((/* implicit */int) arr_17 [i_4] [i_4] [i_4])) << (((arr_27 [i_4]) - (3894529320697331384ULL))))))))))));
            var_21 *= ((/* implicit */unsigned long long int) (signed char)-46);
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_11 = 1; i_11 < 14; i_11 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_12 = 1; i_12 < 14; i_12 += 2) 
                {
                    for (unsigned int i_13 = 0; i_13 < 15; i_13 += 3) 
                    {
                        {
                            var_22 -= arr_10 [i_13];
                            arr_42 [i_4] [i_10] [i_11 - 1] [i_12] [i_13] = ((/* implicit */unsigned char) arr_40 [(short)10] [i_13] [i_11 - 1] [i_12] [i_10]);
                            var_23 = ((/* implicit */short) arr_33 [i_10]);
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_11 + 1] [i_12 + 1] [i_13] [(unsigned short)7])) ? (((/* implicit */int) arr_41 [i_11 + 1] [i_12 + 1] [i_11 - 1] [i_12 + 1])) : (((/* implicit */int) arr_41 [i_11 + 1] [i_12 + 1] [i_11 + 1] [i_12]))));
                            var_25 = ((/* implicit */unsigned short) ((arr_15 [i_11 + 1] [i_11 + 1]) > (arr_15 [i_11 - 1] [i_11 + 1])));
                        }
                    } 
                } 
                arr_43 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) arr_35 [i_11] [i_11 + 1] [i_11 - 1]);
                arr_44 [i_4] [i_11] [i_10] [i_4] = ((unsigned short) arr_39 [i_4] [i_10] [(short)9] [i_11] [i_11] [i_10] [i_10]);
                /* LoopNest 2 */
                for (long long int i_14 = 1; i_14 < 13; i_14 += 2) 
                {
                    for (short i_15 = 0; i_15 < 15; i_15 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)61)))))));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_15] [i_11 - 1] [i_11 + 1] [i_11 - 1] [i_15]))) & (((((/* implicit */_Bool) arr_35 [i_4] [i_10] [i_15])) ? (-1622914100245050150LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (signed char i_16 = 1; i_16 < 14; i_16 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_17 = 0; i_17 < 15; i_17 += 1) 
                {
                    for (long long int i_18 = 1; i_18 < 14; i_18 += 1) 
                    {
                        {
                            var_28 ^= (~(((((/* implicit */_Bool) arr_41 [i_4] [i_10] [i_4] [9ULL])) ? (-1622914100245050170LL) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_10]))))));
                            arr_56 [(unsigned short)1] [i_17] [i_17] [i_17] [i_16] [i_10] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_48 [i_18 - 1] [i_18 + 1] [i_18] [i_18 - 1] [i_18 + 1] [(short)10] [i_18 - 1])) ? (((/* implicit */int) arr_48 [i_18 - 1] [i_18 + 1] [i_18] [i_18 + 1] [i_18 + 1] [i_18 + 1] [i_18 - 1])) : (((/* implicit */int) arr_22 [i_10] [i_18 + 1] [i_18 + 1] [i_18 - 1] [i_18]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_19 = 2; i_19 < 14; i_19 += 4) 
                {
                    for (signed char i_20 = 2; i_20 < 12; i_20 += 2) 
                    {
                        {
                            arr_63 [i_4] [i_4] [i_4] [i_16 - 1] [(unsigned short)5] [i_20 + 1] = ((/* implicit */_Bool) (short)32743);
                            var_29 = ((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_20] [i_10] [i_16 + 1] [i_10] [i_4] [i_4])) == (((/* implicit */int) arr_21 [(unsigned short)2] [i_16] [i_16 - 1] [i_16 - 1] [i_16] [i_16]))));
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (long long int i_21 = 2; i_21 < 14; i_21 += 2) 
        {
            arr_66 [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_4] [i_21 - 2] [(signed char)7])) ? (((/* implicit */int) arr_35 [i_4] [i_21 + 1] [i_21 + 1])) : (((/* implicit */int) arr_7 [i_21] [i_21]))));
            arr_67 [i_21] [i_21] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [(signed char)10] [(signed char)10] [i_4] [i_21 - 1] [(signed char)10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_21 - 2] [i_4] [i_4] [i_4]))) : (766824498U)))) ? (((/* implicit */int) arr_29 [i_21])) : (((/* implicit */int) arr_51 [i_4] [i_4] [i_4] [i_4]))));
            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((unsigned long long int) (+(((/* implicit */int) (unsigned short)4214)))))));
        }
    }
    /* LoopSeq 1 */
    for (unsigned short i_22 = 0; i_22 < 15; i_22 += 4) 
    {
        arr_70 [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_16 [i_22] [i_22]))) || (((((/* implicit */_Bool) arr_16 [i_22] [(unsigned char)10])) && (((/* implicit */_Bool) arr_16 [i_22] [i_22]))))));
        var_31 = ((/* implicit */long long int) (-(max((arr_27 [i_22]), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_22])) != (((/* implicit */int) arr_51 [i_22] [i_22] [i_22] [i_22])))))))));
        arr_71 [i_22] = ((/* implicit */unsigned short) ((signed char) (signed char)40));
    }
    var_32 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned long long int) var_5))));
}
